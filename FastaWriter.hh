#ifndef FASTA_WRITER_HH
#define FASTA_WRITER_HH

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
#include <vector>
#include "FastaRecord.hh"

class FastaWriter
{
	private:
		const std::string output_file_;

	public:
		FastaWriter(const std::string& output_file);
		void write(const std::vector<FastaRecord>& records);
};

inline FastaWriter::FastaWriter(const std::string& output_file)
	: output_file_(output_file)
{};

#endif
