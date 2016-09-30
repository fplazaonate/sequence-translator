#ifndef NUCLEIC_ACID_HH
#define NUCLEIC_ACID_HH

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

#include <stdint.h>

class NucleicAcid
{
	public:
		static const uint8_t A;
		static const uint8_t C;
		static const uint8_t G;
		static const uint8_t T;
		static const uint8_t U;
		static const uint8_t UNKNOWN;

		static uint8_t to_int(char c);
		static uint8_t rev_comp_to_int(char c);

	private:
		static const uint8_t to_int_[256];
		static const uint8_t rev_comp_to_int_[256];
};

inline uint8_t NucleicAcid::to_int(char c)
{
	return to_int_[(uint8_t)c];
}

inline uint8_t NucleicAcid::rev_comp_to_int(char c)
{
	return rev_comp_to_int_[(uint8_t)c];
}

#endif
