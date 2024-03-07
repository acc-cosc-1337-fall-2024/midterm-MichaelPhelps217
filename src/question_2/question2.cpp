#include "question2.h"

bool test_config()
{
    return true;
}

string decimal_to_binary(int value)
{
    string rval = "";
    for(int i = 7; i >= 0; i--)
    {
        //shifts value by i (decrements each loop) then compare zero bit (right most bit in value) to 1 (&1). If that is true then append '1', else append '0'.
        rval.push_back((value>>i)&1 ? '1' : '0');

    }
    return rval;
}