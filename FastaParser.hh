#ifndef FASTA_PARSER_HH
#define FASTA_PARSER_HH

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

#include "FastaRecord.hh"
#include <vector>

class FastaParser
{
	private:
		const std::string file_;

	public:
		FastaParser(const std::string file);
		std::vector<FastaRecord> parse_file();
};


inline FastaParser::FastaParser(const std::string file)
	: file_(file)
{};

#endif // FASTA_PARSER_HH
