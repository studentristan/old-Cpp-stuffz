// struct3.cpp
//
// This program uses a function to return a structure. 

#include <iostream>
#include <iomanip>
#include <cmath>					// For the pow function

using namespace std;

// Circle structure declaration
struct Circle
{
	float radius;
	float diameter;
	double area;
};

// Function prototype
Circle getInfo();

// Constant definition for pi
const float pi = 3.14159;

int main()
{
	Circle c;

	c = getInfo();
	c.area = pi * (c.radius * c.radius);
	cout << "The radius and area of the circle are:\n";
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	cout << "Radius: " << c.radius << endl;
	cout << "Area: " << c.area << endl;
	
	return 0;
}

//**************************************************************
// Definition of function getInfo. This function uses a        *
// local variable, Round, which is a circle structure.         *
// The user enters the diameter of thecircle, which is         *
// stored in Round.diameter. The function then calculates      *
// the radius, which is stored in Round.radius. Round is then  *
// returned from the function.                                 *
//**************************************************************

Circle getInfo()
{
	Circle Round;

	cout << "Enter the diameter of a circle: ";
	cin >> Round.diameter;
	Round.radius = Round.diameter / 2;
	return Round;
}
