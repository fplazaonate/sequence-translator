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

#include "FastaParser.hh"
#include <fstream>
#include <iterator>

std::vector<FastaRecord> FastaParser::parse_file()
{
	std::ifstream ifs;
	ifs.open(file_.c_str());
	
	std::istream_iterator<FastaRecord> is_it(ifs), eos;

	std::vector<FastaRecord> fasta_records(is_it, eos);

	ifs.close();

	return fasta_records;
}

