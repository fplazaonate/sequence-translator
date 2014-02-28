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

#include "GeneticCode.hh"

char GeneticCode::int_to_amino_acid_[64];

GeneticCode::initializer GeneticCode::init;
GeneticCode::initializer::initializer()
{
	int_to_amino_acid_[codon_to_int("TTT")] = AminoAcid::PHENYLALANINE;
	int_to_amino_acid_[codon_to_int("TTC")] = AminoAcid::PHENYLALANINE;
	int_to_amino_acid_[codon_to_int("TTA")] = AminoAcid::LEUCINE;
	int_to_amino_acid_[codon_to_int("TTG")] = AminoAcid::LEUCINE;
	int_to_amino_acid_[codon_to_int("CTT")] = AminoAcid::LEUCINE;
	int_to_amino_acid_[codon_to_int("CTC")] = AminoAcid::LEUCINE;
	int_to_amino_acid_[codon_to_int("CTA")] = AminoAcid::LEUCINE;
	int_to_amino_acid_[codon_to_int("CTG")] = AminoAcid::LEUCINE;
	int_to_amino_acid_[codon_to_int("ATT")] = AminoAcid::ISOLEUCINE;
	int_to_amino_acid_[codon_to_int("ATC")] = AminoAcid::ISOLEUCINE;
	int_to_amino_acid_[codon_to_int("ATA")] = AminoAcid::ISOLEUCINE;
	int_to_amino_acid_[codon_to_int("ATG")] = AminoAcid::METHIONINE;
	int_to_amino_acid_[codon_to_int("GTT")] = AminoAcid::VALINE;
	int_to_amino_acid_[codon_to_int("GTC")] = AminoAcid::VALINE;
	int_to_amino_acid_[codon_to_int("GTA")] = AminoAcid::VALINE;
	int_to_amino_acid_[codon_to_int("GTG")] = AminoAcid::VALINE;
	int_to_amino_acid_[codon_to_int("TCT")] = AminoAcid::SERINE;
	int_to_amino_acid_[codon_to_int("TCC")] = AminoAcid::SERINE;
	int_to_amino_acid_[codon_to_int("TCA")] = AminoAcid::SERINE;
	int_to_amino_acid_[codon_to_int("TCG")] = AminoAcid::SERINE;
	int_to_amino_acid_[codon_to_int("CCT")] = AminoAcid::PROLINE;
	int_to_amino_acid_[codon_to_int("CCC")] = AminoAcid::PROLINE;
	int_to_amino_acid_[codon_to_int("CCA")] = AminoAcid::PROLINE;
	int_to_amino_acid_[codon_to_int("CCG")] = AminoAcid::PROLINE;
	int_to_amino_acid_[codon_to_int("ACT")] = AminoAcid::THREONINE;
	int_to_amino_acid_[codon_to_int("ACC")] = AminoAcid::THREONINE;
	int_to_amino_acid_[codon_to_int("ACA")] = AminoAcid::THREONINE;
	int_to_amino_acid_[codon_to_int("ACG")] = AminoAcid::THREONINE;
	int_to_amino_acid_[codon_to_int("GCT")] = AminoAcid::ALANINE;
	int_to_amino_acid_[codon_to_int("GCC")] = AminoAcid::ALANINE;
	int_to_amino_acid_[codon_to_int("GCA")] = AminoAcid::ALANINE;
	int_to_amino_acid_[codon_to_int("GCG")] = AminoAcid::ALANINE;
	int_to_amino_acid_[codon_to_int("TAT")] = AminoAcid::TYROSINE;
	int_to_amino_acid_[codon_to_int("TAC")] = AminoAcid::TYROSINE;
	int_to_amino_acid_[codon_to_int("TAA")] = AminoAcid::STOP;
	int_to_amino_acid_[codon_to_int("TAG")] = AminoAcid::STOP;
	int_to_amino_acid_[codon_to_int("CAT")] = AminoAcid::HISTIDINE;
	int_to_amino_acid_[codon_to_int("CAC")] = AminoAcid::HISTIDINE;
	int_to_amino_acid_[codon_to_int("CAA")] = AminoAcid::GLUTAMINE;
	int_to_amino_acid_[codon_to_int("CAG")] = AminoAcid::GLUTAMINE;
	int_to_amino_acid_[codon_to_int("AAT")] = AminoAcid::ASPARAGINE;
	int_to_amino_acid_[codon_to_int("AAC")] = AminoAcid::ASPARAGINE;
	int_to_amino_acid_[codon_to_int("AAA")] = AminoAcid::LYSINE;
	int_to_amino_acid_[codon_to_int("AAG")] = AminoAcid::LYSINE;
	int_to_amino_acid_[codon_to_int("GAT")] = AminoAcid::ASPARTIC_ACID;
	int_to_amino_acid_[codon_to_int("GAC")] = AminoAcid::ASPARTIC_ACID;
	int_to_amino_acid_[codon_to_int("GAA")] = AminoAcid::GLUTAMIC_ACID;
	int_to_amino_acid_[codon_to_int("GAG")] = AminoAcid::GLUTAMIC_ACID;
	int_to_amino_acid_[codon_to_int("TGT")] = AminoAcid::CYSTEINE;
	int_to_amino_acid_[codon_to_int("TGC")] = AminoAcid::CYSTEINE;
	int_to_amino_acid_[codon_to_int("TGA")] = AminoAcid::STOP;
	int_to_amino_acid_[codon_to_int("TGG")] = AminoAcid::TRYPTOPHAN;
	int_to_amino_acid_[codon_to_int("CGT")] = AminoAcid::ARGININE;
	int_to_amino_acid_[codon_to_int("CGC")] = AminoAcid::ARGININE;
	int_to_amino_acid_[codon_to_int("CGA")] = AminoAcid::ARGININE;
	int_to_amino_acid_[codon_to_int("CGG")] = AminoAcid::ARGININE;
	int_to_amino_acid_[codon_to_int("AGT")] = AminoAcid::SERINE;
	int_to_amino_acid_[codon_to_int("AGC")] = AminoAcid::SERINE;
	int_to_amino_acid_[codon_to_int("AGA")] = AminoAcid::ARGININE;
	int_to_amino_acid_[codon_to_int("AGG")] = AminoAcid::ARGININE;
	int_to_amino_acid_[codon_to_int("GGT")] = AminoAcid::GLYCINE;
	int_to_amino_acid_[codon_to_int("GGC")] = AminoAcid::GLYCINE;
	int_to_amino_acid_[codon_to_int("GGA")] = AminoAcid::GLYCINE;
	int_to_amino_acid_[codon_to_int("GGG")] = AminoAcid::GLYCINE;  
};
