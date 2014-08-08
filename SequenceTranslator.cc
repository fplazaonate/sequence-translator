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

#include "SequenceTranslator.hh"
#include "GeneticCode.hh"
#include <iostream>
#include <stdexcept>

void DirectStrandTranslator::translate(std::vector<FastaRecord>& records)
{
	for (size_t i = 0; i < records.size(); i++)
	{
		std::string& sequence = records[i].sequence;

		const int num_codons = 
			static_cast<int>(sequence.size()-reading_offset_)/3;

		for (int curr_codon = 0, curr_nucl = reading_offset_;
				curr_codon < num_codons;
				curr_codon++,curr_nucl+=3)
		{
			sequence[curr_codon] = 
				GeneticCode::translate_codon(&sequence[curr_nucl]);
		}

		sequence.resize(num_codons);
	}

}

void ReverseStandTranslator::translate(std::vector<FastaRecord>& records)
{
	for (size_t i = 0; i < records.size(); i++)
	{
		std::string& sequence = records[i].sequence;
		const std::string sequence_copy = records[i].sequence;

		const int num_codons = 
			static_cast<int>(sequence.size()-reading_offset_)/3;

		for (int curr_codon = 0, curr_nucl = sequence.size()-3-reading_offset_;
				curr_codon < num_codons;
				curr_codon++,curr_nucl-=3)
		{
			sequence[curr_codon] = 
				GeneticCode::translate_rev_comp_codon(&sequence_copy[curr_nucl]);
		}

		sequence.resize(num_codons);
	}

}

std::auto_ptr<SequenceTranslator> SequenceTranslatorFactory::create_translator(unsigned reading_frame, const std::string& strand)
{
	if (reading_frame < 1 || reading_frame > 3)
		throw (std::invalid_argument("error: reading frame must be between 1 and 3."));

	if (strand == "direct")
	{
		return std::auto_ptr<SequenceTranslator>(new DirectStrandTranslator(reading_frame));
	}
	else if (strand == "reverse")
	{
		return std::auto_ptr<SequenceTranslator>(new ReverseStandTranslator(reading_frame));
	}

	throw (std::invalid_argument("error: " + strand + " is not a valid strand."));
}
