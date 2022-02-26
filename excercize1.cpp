// excercise1.cpp - inches to ft / inches
// Tristan Werden

#include <iostream>

using namespace std;

int enteredIn;							//Inches Input

int ft;									//Calc ft
int in;									//Calc in
 
int const INFT = 12;


int main(){
 	
 	cout << "How tall are you in inches? ";
 	cin >> enteredIn;
 	
 	ft = enteredIn / INFT;
 	
 	in = enteredIn - (ft * INFT);
 	
 	cout << "You are " << ft << " feet, " << in << " inches tall!" << endl;

	return 0;
}
