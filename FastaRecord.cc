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

#include "FastaRecord.hh"

std::ostream& operator<<(std::ostream& os, const FastaRecord& fr)
{
	os << fr.header << '\n';
	os << fr.sequence << '\n';

	return os;
}

std::istream& operator>>(std::istream& is, FastaRecord& fr )
{
	std::string line;
    if (std::getline(is, line))
	{
		if (line[0] ==  '>')
		{
            fr.header.swap(line);

            std::string sequence;
            while (is.peek() != '>' && std::getline(is, line)) {
                sequence += line;
            }
            fr.sequence.swap(sequence);

            is.clear();
        }
        else {
			is.clear(std::ios_base::failbit);
        }
    }
    return is;
}
