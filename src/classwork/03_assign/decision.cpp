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

    switch (grade)
    {
    case 90:
        letter_grade = 'A';
        break;
    case 80:
        letter_grade = 'B';
        break;
    case 70:
        letter_grade = 'C';
        break;
    case 60:
        letter_grade = 'D';
        break;
    default:
        letter_grade = 'D';
        break;
    }
}