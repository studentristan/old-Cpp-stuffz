//HrMnSc.cpp
//Tristan Werden
//TODO: finished

#include <iostream>

using namespace std;


//I had the function return something instead of voiding. First time doing this, everything worked perfect and compiled right away. (Whoo!)

int infoCalc(int hr, int min, int sec){
	int totalSec = (hr * 60 * 60) + (min * 60) + sec;
	return totalSec;
}

//I wanted to do the if/else logic outside the main, but this was way cleaner. I just had the main call itself if you put in an invalid input.
//that way, you don't need to restart the program
int main(){
	
	int hr, min, sec;
	int totalSec;
	cout << "please input the hours, minutes, and seconds. don't go over 24 hours, and don't input 0 values." << endl;
	cin >> hr >> min >> sec;
	//check for 0 input
	if(hr + min + sec == 0){
		cout << "sorry, but that isn't a valid input. Please try again." << endl;
		main();
		
	//check for > 24hrs input (I USED THE FUNCTION IN AN IF STATEMENT I DIDN'T THINK IT WOULD WORK IT WAS SO COOL!)	
	}else if(infoCalc(hr, min, sec) > 86400){
		cout << "sorry, but that isn't a valid input. Please try again." << endl;
		main();
		
	//If everything checks out, it just prints the results in the format you asked for. 
	}else{
		totalSec = infoCalc(hr, min, sec);
		cout << hr << " hours, " << min << " minutes, and " << sec  << " seconds equals " << totalSec << " seconds.";
	}
	
	return 0;
}