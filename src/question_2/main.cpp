#include "question2.h"

int get_int_from_user()
{
	int user_input = 0;
	std::cout<<"\nPlease enter a number between 0-255: ";
	std::cin>>user_input;

	return user_input;
}

bool validate_user_input(int user_input)
{
	if(user_input > 0 && user_input <= 255)
	{
    	return user_input;
	}
    return false;
}

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

        std::cout<<decimal_to_binary(inputed_choice)<<"\n";
        std::cout<<"Continue (y/n)? ";
		std::cin>>option;
	}while(option == 'y');
}