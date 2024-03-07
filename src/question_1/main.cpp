#include "question1.h"

int get_int_from_user()
{
	int user_input = 0;
	std::cout<<"\nPlease enter a number between 1-15: ";
	std::cin>>user_input;

	return user_input;
}

bool validate_user_input(int user_input)
{
	if(user_input > 0 && user_input <= 15)
	{
    	return user_input;
	}
    return false;
}

//MAKE SURE TO MAKE THE PROGRAM LOOPS UNTIL THE USER WANTS TO EXIT
int main()
{
	char option = 'q';
    do
	{
    	int inputed_choice = get_int_from_user();
		if(!validate_user_input(inputed_choice))
		{
			std::cout<<"Invalid Option"<<"\n";
			return 0;
		}
	
		std::cout<<get_fib_sequence(inputed_choice)<<"\n";
		std::cout<<"Continue (y/n)? ";
		std::cin>>option;
	}while(option == 'y');
}