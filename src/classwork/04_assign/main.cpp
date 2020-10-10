//write includes statements
#include<iostream>
#include "loops.h"
//write using statements for cin and cout

using namespace std;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	// placeholder number
	int num;
	
	// user input
	cout<<"Enter a number between 1 and 20 or type 0 to exit: ";
	cin>>num;

	// verify user doesn't want to exit
	while (num != 0)
	{
		// verify input is between 1 and 20
		while (num < 1 || num > 20)
		{
			cout<<"Please give a number between 1 and 20 ";
			cin>>num;
		}
		
		// call function
		int value = factorial(num);

		// display results
		cout<<"\nYour factorial is: "<<value;

		// prompt user again
		cout<<"\nEnter a number between 1 and 20 or type 0 to exit: ";
		cin>>num;
	}
	


	return 0;
}