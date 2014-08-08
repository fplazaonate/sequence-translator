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

#include "Parameters.hh"
#include <boost/filesystem.hpp>
namespace fs = boost::filesystem;
#include <boost/program_options.hpp>
namespace po = boost::program_options;
#include <iostream>
#include <fstream>
#include <stdexcept>

Parameters get_parameters(int argc, char* argv[])
{
	Parameters pars;
	
	// Create options decription
	po::options_description opts_desc("Convert csfasta file to fasta file and vice versa.");
		

	opts_desc.add_options()
		("help,h", "print this help message")
		("input-file,i", po::value<std::string>(&pars.input_file), "FASTA nucleotide file to convert")
		("output-file,o", po::value<std::string>(&pars.output_file), "FASTA amino acid file generated")
		("reading-frame", po::value<unsigned>(&pars.reading_frame)->default_value(1), "1, 2 or 3")
		("strand", po::value<std::string>(&pars.strand)->default_value("direct"), "\"direct\" or \"reverse\"")
		;

	// Retrieve and parse command line parameters
	po::variables_map vm;
	po::store(po::parse_command_line(argc, argv, opts_desc), vm);

	// Print help
	if (argc == 1 || vm.count("help"))
	{
		std::cout << opts_desc << std::endl;
		std::exit(0);
	}

	po::notify(vm);

	// Check input file
	std::ifstream ifs;
	ifs.open(pars.input_file.c_str());

	if (ifs.fail())
	{
		throw (std::invalid_argument("error: " + pars.input_file + 
					" cannot be opened. Check that the path is valid and that you have read permissions."));
	}

	ifs.close();


	// Check output file
	std::ofstream ofs;
	ofs.open(pars.output_file.c_str());

	if (ofs.fail())
	{
		throw (std::invalid_argument("error: " + pars.output_file + 
					" cannot be created. Check that the path is valid and that you have write permissions."));
	}

	ofs.close();

	return (pars);
}
