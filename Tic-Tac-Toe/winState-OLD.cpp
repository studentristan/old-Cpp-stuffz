#include<iostream>
using namespace std;

//Debugging Tables
/****************************************************
char top[] = 	{"X|O|O"};	//Top Row of Board      *
char middle[] = {"X|O|O"};	//Middle Row of Board   *
char bottom[] = {"O|X|X"};	//Bottom Row of Board   *
****************************************************/

void winState(char[], char[], char[]);
void switcheroo(char);

int main() {
	
	winState(top, middle, bottom);
	
	return 0;
}

void winState(char top[], char middle[], char bottom[]) {
	
	if((top[0] == middle[0]) && (middle[0] == bottom[0]) && (bottom[0] != ' '))  {			//Win on Left Column
		switcheroo(bottom[0]);
	}
	
	else if((top[2] == middle[2]) && (middle[2] == bottom[2]) && (bottom[2] != ' ')) {		//Win on Middle Column
		switcheroo(bottom[2]);
	}
	
	else if((top[4] == middle[4]) && (middle[4] == bottom[4]) && (bottom[4] != ' ')) {		//Win on Right Column
		switcheroo(bottom[4]);
	}
	
	else if((top[0] == top[2]) && (top[2] == top[4]) && (top[4] != ' ')) {					//Win on Top Row
		switcheroo(top[4]);
	}
	
	else if((middle[0] == middle[2]) && (middle[2] == middle[4]) && (middle[4] != ' ')) {	//Win on Middle Row
		switcheroo(middle[4]);
	}
	
	else if((bottom[0] == bottom[2]) && (bottom[2] == bottom[4]) && (bottom[4] != ' ')) {	//Win on Bottom row
		switcheroo(bottom[4]);
	}
	
	else if((top[0] == middle[2]) && (middle[2] == bottom[4]) && (bottom[4] != ' ')) {		//Win On '\' Diagonal
		switcheroo(bottom[4]);
	}
	
	else if((top[4] == middle[2]) && (middle[2] == bottom[0]) && (bottom[0] != ' ')) {		//Win on '/' Diagonal
		switcheroo(bottom[0]);
	}
	else {
		cout << "continue" << endl;
	}
}

void switcheroo(char val) {		//Checks for which player won
	switch(val) {
			case 'X': cout << "Player 1 Wins!";
					  break;
			case 'O': cout << "Player 2 Wins!";
					  break;
			default: cout << "failure";
		}
}