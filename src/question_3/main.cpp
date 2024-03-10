#include "question3.h"

int main()
{
    char option = 'q';

    std::cout<<"----------------------------------\n";
    std::cout<<"This program will roll a 1d6 dice\n";
    std::cout<<"----------------------------------\n";
    std::cout<<"First dice roll: ";
    
    do
    {
        srand(time(0));
        for(int i = 1; i >= 1; i--)
        {
            std::cout<<roll_die()<<"\n";
        }
        std::cout<<"\nRoll dice again(y/n)? ";
		std::cin>>option;
    } while(option == 'y');
}