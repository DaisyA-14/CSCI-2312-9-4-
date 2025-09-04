// main.cpp
// diane
// driver file to test functions
#include "functions.h"

#include <iostream>
#include <string>

int main()
{

    float average = averageGrade();
    if (average == 0)
    {
        std::cout << "no grades entered" << std::endl;
    }
    else{
        std::cout << "\nThe average grade is "<< average << std::endl;
    }

    return 0;
    
}