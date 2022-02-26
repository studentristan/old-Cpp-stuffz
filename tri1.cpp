// tri1.cpp - triangle one
// Tristan Werden
// TODO: null
#include <iostream>

using namespace std;

//global var
int x, y;
int size;


int main(){
 	cout << "Enter Size: " << endl;
 	cin >> size;
 	cout << "Enter Symbol: " << endl;
 	cin >> symbol;
 	
 	printTriangle(size, symbol)
 	for(x = 1; x < size; x++){
 		for(y = 1; y < x; y ++){
 			cout << "*";
 			
		 }
		 cout << endl;
	 }
 
	return 0;
}