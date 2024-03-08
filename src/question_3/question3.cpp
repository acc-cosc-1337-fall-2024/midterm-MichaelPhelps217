#include "question3.h"

bool test_config()
{
    return true;
}

/*
int roll_die_test()
{
    int random_num = 0;
    int lowest_val = 1;
    int highest_val = 6;

    for(int i = 10; i >= 1; i--)
    {
        random_num = rand() % (highest_val - lowest_val + 1) + lowest_val;
        return random_num;
    }
}
*/

int roll_die()
{
    int random_num = 0;
    int lowest_val = 1;
    int highest_val = 6;

    random_num = rand() % (highest_val - lowest_val + 1) + lowest_val;
    return random_num;
}