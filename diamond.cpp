// diamond.cpp
// Tristan Werden
// TODO: null
#include <iostream>

using namespace std;

//global var
int mid;
int size;
int oddeven;

int main(){
 	
 	cout << "Enter the size of the diamond: " << endl;
 	cin >> size;
 	
 	//odd/even test
 	if((size % 2) == 0 ){
		
		mid = size / 2;
		oddeven = 0;
	}else{
		
		mid = (size + 1) / 2;
		oddeven = 1;
	}
	
	
	int blank = mid - 1;
	int x; //I could have just put this in the loop, but I wasn't sure if I would need it later, so it's out here. 
	
 	
 	/*The Top Triangle (This took forever. I had a mountain of if/else statements, 
	 and a friend looked over my shoulder and suggested I use for statements. I feel dumb.)*/
	 
	 for(int i = 0; i < mid; i++){  
		
		for (x = 0; x <= blank; x++){
			cout << " ";
		}
		
		for (x = 0; x <= i; x++){
			cout << "* ";
		}
			
		
			
		 cout << endl;
		 blank--;
		 
	}
	
	/*The Bottom Triangle (way easier - just flip the top after fixing odd/even stuff*/
	if(oddeven == 1){
		mid = mid - 1;
		blank = 1;
	}else{
		blank = 0;
	}
	
	
	
	for (int i = mid; i > 0; i--){
		
		for (x = 0; x <= blank; x++){
			cout << " ";
		}
		
		for (x = 0; x < i; x++)
			cout << "* ";
			
		cout << endl;
		blank++;
	}
		 
	cout << endl << endl << "done!          ...finally...";
	 
 
	return 0;
}

