#include "question4.h"

bool test_config()
{
    return true;
}

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