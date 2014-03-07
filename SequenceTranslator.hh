#ifndef SEQUENCE_TRANSLATOR_HH
#define SEQUENCE_TRANSLATOR_HH

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
#include <memory>
#include <string>
#include "FastaRecord.hh"

class SequenceTranslator
{
	protected:
		unsigned reading_offset_;
		SequenceTranslator(unsigned reading_frame);
	public:
		virtual void translate(std::vector<FastaRecord>& records) = 0;
		virtual ~SequenceTranslator();
};

inline SequenceTranslator::SequenceTranslator(unsigned reading_frame)
	: reading_offset_(reading_frame-1)
{};

inline SequenceTranslator::~SequenceTranslator()
{};

class DirectStrandTranslator : public SequenceTranslator
{
	friend class SequenceTranslatorFactory;
	private:
		DirectStrandTranslator(unsigned reading_frame);

	public:
		virtual void translate(std::vector<FastaRecord>& records);
};

inline DirectStrandTranslator::DirectStrandTranslator(unsigned reading_frame)
	: SequenceTranslator(reading_frame)
{};

class ReverseStandTranslator : public SequenceTranslator
{
	friend class SequenceTranslatorFactory;
	private:
		ReverseStandTranslator(unsigned reading_frame);

	public:
		virtual void translate(std::vector<FastaRecord>& records);

};


inline ReverseStandTranslator::ReverseStandTranslator(unsigned reading_frame)
	: SequenceTranslator(reading_frame)
{};

class SequenceTranslatorFactory
{
	public:
		static std::unique_ptr<SequenceTranslator> create_translator(unsigned reading_frame, const std::string& strand);
};


#endif
