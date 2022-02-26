// mpg.cpp - mpg calculator
// Tristan Werden
// TODO: null
#include <iostream>

using namespace std;

//Global Variables... 
//inputs
float millageInput;
float gallonsInput;

//calculated ratios
float mpg;
float liPerHundredKilo;

//conversion vars
float KmTraveled;
float hundredKmTraveled;
float liUsed;


int main(){
 	
 
 cout << "Please enter the ammount of fuel you've used to the nearest decimal: ";
 cin >> gallonsInput;
 cout << endl;
 
 cout << "Please enter the distance you've traveled to the nearest decimal: ";
 cin >> millageInput;
 cout << endl;
 
 //mpg calc
 mpg = millageInput / gallonsInput;
 cout << "You traveled " << millageInput << " miles and used " << gallonsInput << " gallons." << endl;
 cout << "Your viechle gets " << mpg << " miles per gallon." << endl;
 
 //unit conversions
 KmTraveled = millageInput * 1.60934;
 hundredKmTraveled = KmTraveled / 100;
 liUsed = gallonsInput * 3.875;
 
 //100 km per li calc
 liPerHundredKilo = liUsed / hundredKmTraveled;
 cout << "You traveled " << KmTraveled << " kilometers and used " << liUsed << "liters." << endl;
 cout << "Your viechle gets " << liPerHundredKilo << " hundred kilometers per liter." << endl;

	return 0;
}