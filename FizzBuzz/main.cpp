#include <iostream>
#include <cassert>
#include "FizzBuzz.h"

int main() {
    // Fizzbuzz tests
    assert(fizzBuzz(7) == "7");
    assert(fizzBuzz(3) == "Fizz");
    assert(fizzBuzz(5) == "Buzz");
    assert(fizzBuzz(15) == "FizzBuzz");

    //Loops through 1-20 passing the vallue into the fizzBuzz function
    for (int i = 1; i <= 20; i++)
    {
        std::cout << fizzBuzz(i) << std::endl;
    }

	return 0;
}