// tri3.cpp - triangle one
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
 	
 	for(x = 1; x < size; x++){
 		for(y = 1; y < size; y++){
 			if(x >= y){
 				cout << " ";
			 }
			 else{
			 	cout << "*";
			 }
 			
		 }
		 cout << endl;
	 }
 
	return 0;
}