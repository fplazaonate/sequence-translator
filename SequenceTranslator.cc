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

void SequenceTranslator::translate(std::vector<FastaRecord>& records)
{
	for (FastaRecord& record: records)
	{
		std::string& sequence = record.sequence;
		const unsigned num_codons = sequence.size()/3;

		for (unsigned i = 0; i < num_codons; i++)
		{
			// This is evil to retrieve a pointer on a string in this way
			// but it works in practice
			sequence[i] = 
				GeneticCode::translate_codon(&sequence[i*3]);
		}

		sequence.resize(num_codons);
	}

}
