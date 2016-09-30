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

#include "NucleicAcid.hh"
#include <limits>

const uint8_t NucleicAcid::A = 0;
const uint8_t NucleicAcid::C = 1;
const uint8_t NucleicAcid::G = 2;
const uint8_t NucleicAcid::T = 3;
const uint8_t NucleicAcid::U = 3;
const uint8_t NucleicAcid::UNKNOWN = std::numeric_limits<uint8_t>::max();


const uint8_t NucleicAcid::to_int_[256] = {
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::A, NucleicAcid::UNKNOWN, NucleicAcid::C,
    NucleicAcid::UNKNOWN,NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::G,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::T, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN,NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::A, NucleicAcid::UNKNOWN, NucleicAcid::C,
    NucleicAcid::UNKNOWN,NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::G,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::T, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN
};

const uint8_t NucleicAcid::rev_comp_to_int_[256] = {
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::T, NucleicAcid::UNKNOWN, NucleicAcid::G,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::C,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::A, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::T, NucleicAcid::UNKNOWN, NucleicAcid::G,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::C,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::A, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN,
    NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN, NucleicAcid::UNKNOWN
};

