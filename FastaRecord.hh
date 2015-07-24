#ifndef FASTA_RECORD_HH
#define FASTA_RECORD_HH
 
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

#include <string>
#include <iostream>

struct FastaRecord
{
	std::string header;
	std::string sequence;
	
	FastaRecord();
	FastaRecord(const FastaRecord& original);
	FastaRecord(const std::string& header, const std::string& sequence);
	FastaRecord& operator=(const FastaRecord& original);
	friend std::ostream& operator<<(std::ostream& os, const FastaRecord&);
	friend std::istream& operator>>(std::istream& is, FastaRecord&);
};

inline
FastaRecord::FastaRecord()
: header(), sequence() {};

inline
FastaRecord::FastaRecord(const FastaRecord& original)
: header(original.header), sequence(original.sequence) {};

inline
FastaRecord::FastaRecord(const std::string& header, const std::string& sequence)
: header(header), sequence(sequence) {};


inline
FastaRecord& FastaRecord::operator=(const FastaRecord& original)
{
	if (this != &original)
	{
		header = original.header;
		sequence = original.sequence;
	}

	return(*this);
}
#endif // FASTA_RECORD_HH
