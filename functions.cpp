//functions.cpp
//Tristan Werden
//TODO: finished

/*
Exercise #3 (functions.cpp)
1. Write a function that normally takes one argument, the address of a char array (its name), and
prints that string once. However, if a second, type int, argument is provided and is nonzero, the
function should print the string int number of times.
2. Version 2... Modify this function to print the string the number of times equal to the number of
times that function has been called at that point. (Note that the number of times the string is
printed is not equal to the value of the second argument; it is equal to the number of times the
function has been called.)
3. Use the function in a simple program that demonstrates how the function works. */

#include <iostream>
#include <array>

using namespace std;


//PROTOTYPES
void theFunction(char[], int);
//GLOBALS



int main(){
	int i = 0;
	char thing[] = "thing";
	while (3 > 2){
		theFunction(thing[4], i);
		i++;
}
	return 0;
}


void theFunction(char thing[4], int i){
	
}
