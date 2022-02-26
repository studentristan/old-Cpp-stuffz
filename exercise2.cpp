// excercise2.cpp - seconds breakdown
// Tristan Werden

#include <iostream>

using namespace std;

//Global Variables...

int const daySeconds = 86400;
int const hrSeconds = 3600;
int const minSeconds = 60;

long entSeconds;

//days, hours, mins, seconds
int d;
int h;
int m;
int s;

int remain;							//remainder work var

int main(){
 	
 	cout << "Enter the number of seconds to calculate: ";
 	cin >> entSeconds;
 	cout << endl;
 	
 	//calculate the num days
 	
 	d = entSeconds / daySeconds;
	cout << "Days: " << d << endl;
 
 	remain = entSeconds - (d * daySeconds);

 	
 	//Calc the num hours
 	
 	h = remain / hrSeconds;
 	cout << "Hours: " << d << endl;
 	
 	remain = remain - (h * hrSeconds);

 	
 	//Calc the num min
 	
 	m = remain / minSeconds;
 	
 	remain = remain - (m * minSeconds);
 	
 	cout << "Minutes: " << m << endl;
 	
 	//Calc Seconds
 	
 	cout << "Seconds: " << remain << endl;
 	

	return 0;
}
