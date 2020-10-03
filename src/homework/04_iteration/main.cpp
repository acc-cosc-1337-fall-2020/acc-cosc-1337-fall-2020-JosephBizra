//write include statements
#include<iostream>
#include "dna.h"
//write using statements
using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main()
{
	//storing input
	string input = "";

	// prompt user
	cout<<"Enter 1 for GC Content, 2 for DNA Content, or Y to exit ";
	cin>> input;

	// loops the prompt until y or Y is entered
	while (input != "y" && input != "Y")
	{
		// runs gc_content if 1 is entered
		if (input == "1")
		{
			string dna = "";

			// prompt user for dna string
			cout<<"Enter a DNA string ";
			cin>> dna;

			// run funtion
			double content = get_gc_content(dna);
			cout<<"Content: "<<content;
		}
		// runs dn_compliment if 1 is entered
		else if (input == "2")
		{
			string dna = "";

			// prompt user for dna string
			cout<<"Enter a DNA string ";
			cin>> dna;
			
			// run funtion
			string compliment = get_dna_complement(dna);
		}
		
		// re-prompt user if y wasn't entered
		cout<<"\nEnter 1 for GC Content, 2 for DNA Content, or Y to exit ";
		cin>> input;
	}
	
	return 0;
}