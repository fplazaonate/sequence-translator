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

#include "NucleicAcid.hh"
#include <limits>
#include <cstring>

const std::uint8_t NucleicAcid::A = 0;
const std::uint8_t NucleicAcid::C = 1;
const std::uint8_t NucleicAcid::G = 2;
const std::uint8_t NucleicAcid::T = 3;
const std::uint8_t NucleicAcid::U = 3;
const std::uint8_t NucleicAcid::UNKNOWN = std::numeric_limits<std::uint8_t>::max();


std::uint8_t NucleicAcid::to_int_[256];
std::uint8_t NucleicAcid::rev_comp_to_int_[256];

NucleicAcid::initializer NucleicAcid::init;
NucleicAcid::initializer::initializer()
{
	std::memset(NucleicAcid::to_int_, NucleicAcid::UNKNOWN, sizeof(to_int_));
	to_int_['A'] = to_int_['a'] = NucleicAcid::A;
	to_int_['C'] = to_int_['c'] = NucleicAcid::C;
	to_int_['G'] = to_int_['g'] = NucleicAcid::G;
	to_int_['T'] = to_int_['t'] = NucleicAcid::T;
	to_int_['U'] = to_int_['u'] = NucleicAcid::U;

	std::memset(NucleicAcid::rev_comp_to_int_, NucleicAcid::UNKNOWN, sizeof(rev_comp_to_int_));
	rev_comp_to_int_['A'] = rev_comp_to_int_['a'] = NucleicAcid::T;
	rev_comp_to_int_['C'] = rev_comp_to_int_['c'] = NucleicAcid::G;
	rev_comp_to_int_['G'] = rev_comp_to_int_['g'] = NucleicAcid::C;
	rev_comp_to_int_['T'] = rev_comp_to_int_['t'] = NucleicAcid::A;
	rev_comp_to_int_['U'] = rev_comp_to_int_['u'] = NucleicAcid::A;

};
