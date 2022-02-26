// tri2.cpp - triangle one
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
 	
 	for(x = size; x > 1; x--){
 		for(y = 1; y < x; y ++){
 			cout << "*";
 			
		 }
		 cout << endl;
	 }
 
	return 0;
}