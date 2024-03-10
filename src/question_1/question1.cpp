#include "question1.h"

bool test_config()
{
    return true;
}

string get_fib_sequence(int inputed_choice)
{
    string result = "0 1 ";
    int num1 = 0;
    int num2 = 1;
    int next_num;

    for(int i = 1; i < inputed_choice; i++)
    {
        next_num = num1 + num2;
        num1 = num2;
        num2 = next_num;
        result += std::to_string(next_num);
        if(i != inputed_choice - 1)
        {
            result += " ";
        }
    }
    return result;
}