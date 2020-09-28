//cpp
#include "decision.h"

char get_letter_grade_using_if(int grade)
{
    char letter_grade;

    if (grade >= 90)
    {
        letter_grade = 'A';
    }
    else if (grade >= 80 && grade <= 89)
    {
        letter_grade = 'B';
    }
    else if (grade >= 70 && grade <= 79)
    {
        letter_grade = 'C';
    }
    else if (grade >= 60 && grade <= 69)
    {
        letter_grade = 'D';
    }
    else
    {
        letter_grade = 'F';
    }
    
    return letter_grade;
    
}

char get_letter_grade_using_switch(int grade)
{
    char letter_grade;

    switch (grade/10)
    {
    case 9:
        letter_grade = 'A';
        break;
    case 8:
        letter_grade = 'B';
        break;
    case 7:
        letter_grade = 'C';
        break;
    case 6:
        letter_grade = 'D';
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        letter_grade = 'F';
        break;
    default:
        letter_grade = 'I';//invalid must use string
        break;
    }

    return letter_grade;
}