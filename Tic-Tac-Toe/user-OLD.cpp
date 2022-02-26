//user.cpp
//Ryan Millstead




#include<iostream>

using namespace std;

int turn = 4;
int space;
void player_input();

const char* Top[5] = {"","|","","|",""};
const char* Board[5] = {"_","","_","","_"};
const char* Middle[5] = {"","|","","|",""};
const char* Bottom[5] = {" ","|"," ","|"," "};
void game_Board(const char*, const char*,const char*,const char*);


int main(){
	player_input();
	game_Board(Top[5],Board[5],Middle[5],Bottom[5]);

	
	return 0;
}

void game_Board(const char*, const char*,const char*,const char*){

	int i;
	for(int i = 0; i <=4; i++)
	{
		
		cout << Top[i];
		cout << Board[i];
		
	}
 	cout <<endl;
	for(int i = 0; i <=4; i++)
	{
		
		cout << Middle[i];
		cout << Board[i];
		
	}	
	 	cout <<endl;
	for(int i = 0; i <=4; i++)
	{
		
		cout << Bottom[i];
		
	}
		
		


	
}
void player_input()
{
	int input = 0;
	
	if (turn % 2 == 0 ){
		cout << "player two pick your spot:" << endl;
		cin >> input;
		if (space >= 1 || space <= 9){
			space = input;
		}
		else{
			cout << "invalid input try again";
		}
    }
	else{
		cout << "Player one pick your spot: "<< endl;
		cin >> input;
		if (space >= 1 || space <= 9){
			space = input;
		}
		else{
			cout << "invalid input try again";
		}
	}
	cout << space << endl;	
	
}