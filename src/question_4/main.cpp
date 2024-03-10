#include "question4.h"

int main()
{
    string dna = "";
    std::cout<<"Please enter a DNA or RNA string (EX: GATGGAACTTGACTACGTAAATT): ";
	std::cin>>dna;

    std::cout<<"Here is the new string: "<<transcribe_dna_to_rna(dna)<<"\n";

    return 0;
}