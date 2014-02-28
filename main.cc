/*
 * (C) Copyright 2014 Enterome
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

#include "Parameters.hh"
#include "FastaParser.hh"
#include "SequenceTranslator.hh"
#include "FastaWriter.hh"
#include <iostream>

int main(int argc, char *argv[])
{
	try
	{
		const Parameters& parameters = get_parameters(argc, argv);

		FastaParser fasta_parser(parameters.input_file);
		FastaWriter fasta_writer(parameters.output_file);

		std::cout << "Reading FASTA nucleotide file..." << std::endl;
		std::vector<FastaRecord> records = fasta_parser.parse_file();
		std::cout << "Done\n" << std::endl;

		std::cout << "Translating to FASTA amino acid..." << std::endl;
		SequenceTranslator::translate(records);
		std::cout << "Done\n" << std::endl;

		std::cout << "Writing FASTA amino acid file..." << std::endl;
		fasta_writer.write(records);
		std::cout << "Done" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return -1;
	}


	return 0;
}
