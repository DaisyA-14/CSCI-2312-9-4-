#include "functions.h"

#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;

float getGrade()
{
    float grade = 0.0;
    cout << "Enter the grade (-99 to quit) : ";
    cin >> grade;

    return grade;
}

float averageGrade()
{
    float grade = getGrade();
    float total = 0.0;
    int counter = 0;

    while (grade != -99)
    {
        total += grade;
        ++counter;
        grade = getGrade();
    }

    if(counter >= 1)
    {
        return total/counter;
    }
    else
    {
        return 0;
    }
};

float avgGrade()
{
   float grade;
   float total;
   for (int ndx = 0; ndx < 5; ++ndx)  // for (int index = 0; index < 5; ++index)
   {
      std::cout << "please enter a grade : ";
      std::cin >> grade;
      total += grade;
   }
   return grade / 5;
}

float avgGrade(int classSize)
{
   float grade;
   float total;
   for (int ndx = 0; ndx < classSize; ++ndx)
   {
      std::cout << "please enter a grade (-99 to end) : ";
      std::cin >> grade;
      if (grade == -99)
         break;
      total += grade;
   }
   if (classSize > 0)
      return grade / classSize;
   else return 0.0;
}
