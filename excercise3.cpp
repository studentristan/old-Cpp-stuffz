// excercise3.cpp - Age Converter
// Tristan Werden
// TODO: Add Days as input and Weeks as Output
#include <iostream>

using namespace std;

//Global Variables... 

int eYrs;						//Entered # years
int eMths;						//Entered # months
int eWeeks;


int totMths;
int totWks;
int totDays;
int totHrs;
int totMins;
int totSecs;



int main(){
 	
 
 cout << "Please enter your age in years, months and weeks: ";
 cin >> eYrs >> eMths >> eWeeks;
 cout << endl;
 
 cout << eYrs << " Years, ";
 cout << eMths << " Months and " << eWeeks << " Weeks equals..." << endl << endl;
 
 totMths = (eYrs * 12) + eMths;
 
 cout << totMths << " Total Months" << endl;
 
 totWks = (eYrs * 51.14) + (eMths * 4.345) + eWeeks;
 cout << totWks << " Total Weeks" << endl;
 
 totDays = (eYrs * 365.25) + ((365.25 / 12) * eMths) + (eWeeks * 7);
 
 cout << totDays << " Total Days" << endl;
 
 totHrs = totDays * 24;
 
 cout << totHrs << " Total Hours" << endl;
 
 totMins = totHrs * 60;
 
 cout << totMins << " Total Minutes" << endl;
 
 totSecs = totMins * 60;
 
 cout << totSecs << " Total Seconds" << endl;
 
	return 0;
}
