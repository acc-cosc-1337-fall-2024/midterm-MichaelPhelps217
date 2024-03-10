#include "question3.h"

/*
bool validate_dice_roll(int random_num)
{
	if(random_num > 0 && random_num <= 6)
	{
    	return random_num;
	}
    return false;
}
*/

int main()
{
    char option = 'q';

    /*
    srand(time(0));
    for(int i = 10; i >= 1; i--)
    {
        validate_dice_roll(roll_die());
        std::cout<<roll_die()<<"\n";
    }

    std::cout<<"\nAll test rolls are valid!\n";
    std::cout<<"\n--------------------------\n";
    */

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