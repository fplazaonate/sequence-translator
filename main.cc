/*
 * (C) Copyright 2014-2015 Enterome
 * 
 * This file is part of sequence-translator.
 * 
 * sequence-translator is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * sequence-translator is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with sequence-translator.  If not, see <http://www.gnu.org/licenses/>.
 */ 

#include "TimeProfiler.hh"
#include "Parameters.hh"
#include "FastaParser.hh"
#include "SequenceTranslator.hh"
#include "FastaWriter.hh"
#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
	try
	{
		TimeProfiler time_profiler;
		time_profiler.start_new_timer("Total");

		const Parameters& parameters = get_parameters(argc, argv);

		std::auto_ptr<SequenceTranslator> sequence_translator =
			SequenceTranslatorFactory::create_translator(parameters.reading_frame, parameters.strand);
		FastaParser fasta_parser(parameters.input_file);
		FastaWriter fasta_writer(parameters.output_file);

		std::cout << "Reading FASTA nucleotide file..." << std::endl;
		time_profiler.start_new_timer("Reading FASTA nucleotide file");
		std::vector<FastaRecord> records = fasta_parser.parse_file();
		time_profiler.stop_last_timer();
		std::cout << "Done. FASTA file has " << records.size() << " entries.\n" << std::endl;

		std::cout << "Translating to FASTA amino acid..." << std::endl;
		time_profiler.start_new_timer("Translating to FASTA amino acid");
		sequence_translator->translate(records);
		time_profiler.stop_last_timer();
		std::cout << "Done\n" << std::endl;

		std::cout << "Writing FASTA amino acid file..." << std::endl;
		time_profiler.start_new_timer("Writing FASTA amino acid file");
		fasta_writer.write(records);
		time_profiler.stop_last_timer();
		std::cout << "Done\n" << std::endl;

		time_profiler.stop_last_timer();
		std::cout << time_profiler << std::endl;

		std::exit(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::exit(-1);
	}
}
