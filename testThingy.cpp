# include <iostream>

using namespace std;
int y, x;

int main(){  

cout << "Input a number, and I will tell you if it is between 10 and 100 inclusive: ";
cin >> y;
cout << endl;

if(y < 10 || y > 100){
	cout << "false" << endl;
} else {
	cout << "true" << endl;
}


cout << "Input a number, and I will tell you if it is outside the range of 10 and 100: ";
cin >> x;
cout << endl;

if(x > 10 && x < 100){
	cout << "false" << endl;
} else {
	cout << "true" << endl;
}
    return 0;   
}