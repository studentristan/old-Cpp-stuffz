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
 	
 	for(y = 1; y < size; y++){
 		for(x = size; x >= 1; x --){
 			if(y <= x){
 				cout << "*";
			 }
			 else{
			 	cout << " ";
			 }
 			
		 }
	 }
 
	return 0;
}