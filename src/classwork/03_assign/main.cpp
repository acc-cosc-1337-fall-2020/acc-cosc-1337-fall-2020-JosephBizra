//Write the include statement for decisions.h here
#include<iostream>
#include "decision.h"

//Write namespace using statements for cout and cin

using std::cout; using std::cin;

int main() 
{
	int grade;

	while (!(grade >= 0 && grade <= 100))
	{
		cout<<"What is your grade? ";
		cin>>grade;
	}

	cout<<"You entered: "<<grade;

	char letter_grade = get_letter_grade_using_if(grade);
	cout<<"\n(If/esle) You have a "<<letter_grade;

	char letter_grade2 = get_letter_grade_using_switch(grade);
	cout<<"\n(Case/switch) You have a "<<letter_grade2;

	return 0;

}