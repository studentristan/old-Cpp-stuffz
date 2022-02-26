// triwithoptions.cpp 
// Tristan Werden
// TODO: null

#include <iostream>

using namespace std;

//Triangle Function - using trisymbol and trisize to differentiate from the main function vars. 
void triangle(int trisize, char trisymbol){
	for(int x = 1; x < trisize; x++){
 		for(int y = 1; y < x; y ++){
 			cout << trisymbol;
 			
		 }
		 cout << endl;
	 }
}


int main(){
	int size;
	char symbol;
	cout << "Enter Size: " << endl;
 	cin >> size;
 	cout <<"Enter Symbol (such as # or *)" << endl;
 	cin >> symbol;
 	triangle(size, symbol);
 	
 	return 0;
}