//write include statements
#include<iostream>
#include "variables.h"

//write namespace using statement for cout

using std::cout; using std::cin;

int main()
{
	// variables declared
	double meal_amount ;
	double tip_rate ;
	double tip_amount ;
	double tax_amount ;
	double total;

	// Cost of the meal
	cout<<"How much did the meal cost? ";
	cin>> meal_amount;

	// Get the tax amount
	tax_amount = get_sales_tax_amount(meal_amount);

	// Tip percentage
	cout<<"\nWhat was the tip rate? ";
	cin>> tip_rate;

	// Get the tip amount
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	// sum total
	total = meal_amount + tax_amount + tip_amount;

	// receipt
	cout<<"Meal Amount: "<<meal_amount;
	cout<<"\nSales Tax: "<<tax_amount;
	cout<<"\nTip Amount: "<<tip_amount;
	cout<<"\nTotal: "<<total;

	return 0;
}
