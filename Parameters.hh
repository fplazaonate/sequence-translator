#ifndef PARAMETERS_HH
#define PARAMETERS_HH
 
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

#include <vector>
#include <string>

struct Parameters
{
	std::string input_file;
	std::string output_file;
	unsigned reading_frame;
	std::string strand;
};

Parameters get_parameters(int argc, char* argv[]);


#endif // PARAMETERS_HH
