//cpp
#include<iostream>
#include "loops.h"
using namespace std;

int factorial(int num)
{
    // keep one separate variable to multiply. Keep it at 1 so 0 doesn't get multiplied.
    int fact = 1;

    // loop through all integers between 0 and num.
    for (int i = 1; i <= num; i++)
    {
        cout<<"\ni = "<<i;
        // keep multiplying fact by i
        fact = fact * i;
        cout<<"  newNum = "<<fact;
    }
    
    return fact;
}