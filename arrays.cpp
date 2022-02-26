//arrays.cpp
//Tristan Werden
//TODO: finished

/*	
Your program must use these functions to do the following:
	fill an array,
	display the array,
	reverse the array,
	display the array again,
	reverse all but the first and last elements of the array,
	display the array again.
*/


#include <iostream>
#include <array>

using namespace std;


//PROTOTYPES
int Fill_array();
void Show_array();
void Reverse_array();
void Reverse_array_two();
//GLOBALS
int x = 6;
double arrayX[6];
double hold;


int main(){
	Fill_array();
	Show_array();
	Reverse_array();
	Show_array();
	Reverse_array_two();
	Show_array();
	
	
	return 0;
}


/*
Fill_array() takes as arguments the name of an array of double values and an array size. It
prompts the user to enter double values to be entered in the array. It ceases taking input when
the array is full or when the user enters non-numeric input, and it returns the actual number of
entries.
*/

int Fill_array(){
	double info;
	int i;
	for(i = 0; i < x; i++){
		cout <<"input # " << i + 1 << endl;
		cout << "please input a number: " << endl;
		cin >> info;
		cout << endl;
		arrayX[i] = {info}; 
	}
	return 6;
}


/*
Show_array() takes as arguments the name of an array of double values and an array size and
displays the contents of the array. 
*/

void Show_array(){
	cout << endl << arrayX[0] << "," << arrayX[1] << "," << arrayX[2] << "," << arrayX[3] << "," << arrayX[4] << "," << arrayX[5] << endl;
	//This can be done better with a loop, but... I'm stupid. So I did it by hand. 
}


/*
Reverse_array() takes as arguments the name of an array of double values and an array size
and reverses the order of the values stored in the array.
*/
void Reverse_array(){
 	double filler;
 	int i;
 	int endpoint = x - 1;
 	int loopvar = x / 2;
 	for(i = 0; i < loopvar; i++){
 		hold = arrayX[i];
 		arrayX[i] = arrayX[endpoint];
 		arrayX[endpoint] = hold;
 		endpoint = endpoint - 1;
	 }
}

void Reverse_array_two(){
 	double filler;
 	int i;
 	int endpoint = x - 1;
 	int loopvar = x / 2;
 	for(i = 0; i < loopvar; i++){
 		hold = arrayX[i];
 		arrayX[i] = arrayX[endpoint];
 		arrayX[endpoint] = hold;
 		endpoint = endpoint - 1;
	 }
	 i = 0;
	 endpoint = x - 1;
	 
	 hold = arrayX[i];
	 arrayX[i] = arrayX[endpoint];
	 arrayX[endpoint] = hold;
}