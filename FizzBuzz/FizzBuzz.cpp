#include "FizzBuzz.h"


std::string fizzBuzz(int number)
{
    //Checks if div by 3 & 5
    if (number % 3 == 0 && number % 5 == 0)
    {
        return "FizzBuzz";
    }
    //Checks if div by 3
    else if (number % 3 == 0)
    {
        return "Fizz";
    }
    //Checks if div by 5
    else if (number % 5 == 0)
    {
        return "Buzz";
    }
    //if not div by 3 or 5 or both returns number as string
    else
    {
        return std::to_string(number);
    }
}