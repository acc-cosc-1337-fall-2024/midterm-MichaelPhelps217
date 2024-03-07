#include "question1.h"

bool test_config()
{
    return true;
}

string get_fib_sequence(int inputed_choice)
{
    string result = "";
    int num1 = 0;
    int num2 = 1;
    int next_num;

    for(int i = 1; i <= inputed_choice; i++)
    {
        if(i == 1)
        {
            result += std::to_string(num1);
            result += " ";
            continue;
        }
        if(i == 2)
        {
            result += std::to_string(num2);
            result += " ";
            continue;
        }
        
        next_num = num1 + num2;
        num1 = num2;
        num2 = next_num;
        result += std::to_string(next_num);
        if(i != inputed_choice)
        {
            result += " ";
        }
    }
    return result;
}