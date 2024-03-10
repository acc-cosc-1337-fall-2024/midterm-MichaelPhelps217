#include "question4.h"

bool test_config()
{
    return true;
}

/*
double get_t_and_u(const string &dna_string)
{
	double count_tu = 0;

	for(auto i = 0; i < dna_string.length(); i++)
	{
		if(dna_string[i] == 'T' || dna_string[i] == 'U')
		{
			count_tu++;
		}
	}
	return count_tu;
}
*/

string transcribe_dna_to_rna(string dna)
{
	string rna = dna;
	for(std::size_t i = 0; i < rna.length(); i++)
	{
		if(rna[i] == 'T')
		{
			rna[i] = 'U';
		}
		else if(rna[i] == 'U')
		{
			rna[i] = 'T';
		}
	}
	return rna;
}