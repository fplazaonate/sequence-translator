#ifndef GENETIC_CODE_HH
#define GENETIC_CODE_HH

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

#include "AminoAcid.hh"
#include "NucleicAcid.hh"

class GeneticCode
{
	public:
		static char translate_codon(const char* codon);
		static char translate_rev_comp_codon(const char* codon);

	private:
		static uint8_t codon_to_int(const char* codon);
		static uint8_t rev_comp_codon_to_int(const char* codon);
		static char int_to_amino_acid_[256];

		static class initializer 
		{
			public:
				initializer();
		} init;

};


inline char GeneticCode::translate_codon(const char* codon)
{
	return int_to_amino_acid_[codon_to_int(codon)];
}

inline char GeneticCode::translate_rev_comp_codon(const char* codon)
{
	return int_to_amino_acid_[rev_comp_codon_to_int(codon)];
}

inline uint8_t GeneticCode::codon_to_int(const char* codon)
{

	return
	   	NucleicAcid::to_int(codon[0]) << 4 |
		NucleicAcid::to_int(codon[1]) << 2 |
		NucleicAcid::to_int(codon[2]);
}

inline uint8_t GeneticCode::rev_comp_codon_to_int(const char* codon)
{

	return
	   	NucleicAcid::rev_comp_to_int(codon[2]) << 4 |
		NucleicAcid::rev_comp_to_int(codon[1]) << 2 |
		NucleicAcid::rev_comp_to_int(codon[0]);
}

#endif
