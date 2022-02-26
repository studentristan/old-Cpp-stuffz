// This program demonstrates a function that accepts
// a structure variable as its argument.

#include <iostream>

using namespace std;


struct InvItem
{
	int partNum;			// Part number
	char description[50];  // Item description
	int onHand;				// Units on hand
	float price;			// Unit price
};

void ShowItem(InvItem);		// Function prototype

int main()
{
	InvItem part = {171, "Industrial Widget", 25, 150.0};

	ShowItem(part);
	
    return 0;
}

//**********************************************************
// Definition of function ShowItem. This function accepts  
// an argument of the InvItem structure type. The contents 
// of the structure is displayed.                          
//
// ios::showpoint   Show decimal point and trailing zeros for floating-point values.
// ios::fixed   Display floating-point numbers in fixed format.
//**********************************************************

void ShowItem(InvItem piece )

{
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	
	cout << "Part Number: " << piece.partNum << endl;
	cout << "Description: " << piece.description << endl;
	cout << "Units On Hand: " << piece.onHand << endl;
	cout << "Price: $" << piece.price << endl;
}

