// War.cpp  Version 2 of Shuffle...

#include <iostream>
#include <iomanip>				// for setw

using namespace std;

struct Card {
	char f;
	char s;
};

int p1, p2;

void filldeck(Card [], char [], char []);
void shuffle(Card []);
void deal(Card []);
void war(Card []);
void pointGiven(Card [], int, int);


int main(){
	Card deck[52];

	char face[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
		
	char suit[4] = {'H', 'D', 'C', 'S'};

	filldeck(deck, face, suit);
	
	shuffle( deck );
	deal( deck );
	
	war(deck);
	
	return 0;
}

void filldeck(Card wDeck[], char wFace[], char wSuit[]){
	for (int i = 0; i < 52; i++){
		wDeck[i].f = wFace[ i % 13 ];
		wDeck[i].s = wSuit[ i / 13 ];
	}
}

void shuffle(Card wDeck []){
	srand( time(0) );
	for (int i = 0; i < 52; i++){
		int j = rand() % 52;
		Card temp = wDeck[ i ];
		wDeck[ i ] = wDeck[ j ];
		wDeck[ j ] = temp;
	}
}	

void deal(Card wDeck [] ){
	cout << "Player one deck: " << endl;
	for (int i = 0; i < 26; i++)
		cout <<  setw(5) << wDeck[ i ].f << " of " << wDeck[i].s << endl;
	cout << endl << endl << "Player two deck: " << endl;
	for (int i = 26; i < 52; i++)
		cout <<  setw(5) << wDeck[ i ].f << " of " << wDeck[i].s << endl;
}

void war(Card wDeck [] ){
	cout << endl << "WAR!!" << endl << endl;
	for (int i = 0; i < 26; i++){
		int x = i + 26;
		cout <<  setw(5) << wDeck[ i ].f << " of " << wDeck[i].s << " VS " << wDeck[x].f << " of " << wDeck[x].s;
		pointGiven(wDeck, i, x);
	}
	
	cout << endl << endl << "P1 total: " << p1 << endl << endl << "P2 total: " << p2 << endl << endl;
}

void pointGiven(Card wDeck [], int i, int x){
	int p1test, p2test;
	
	
	
	if (wDeck[i].f == 'A')
		p1test = 1;
	else if (wDeck[i].f == '2')
		p1test = 2;
	else if (wDeck[i].f == '3')
		p1test = 3;
	else if (wDeck[i].f == '4')
		p1test = 4;
	else if (wDeck[i].f == '5')
		p1test = 5;
	else if (wDeck[i].f == '6')
		p1test = 6;
	else if (wDeck[i].f == '7')
		p1test = 7;
	else if (wDeck[i].f == '8')
		p1test = 8;
	else if (wDeck[i].f == '9')
		p1test = 9;
	else if (wDeck[i].f == 'T')
		p1test = 10;
	else if (wDeck[i].f == 'J')
		p1test = 11;
	else if (wDeck[i].f == 'Q')
		p1test = 12;
	else if (wDeck[i].f == 'K')
		p1test = 13;
		
		
	if (wDeck[x].f == 'A')
		p2test = 1;
	else if (wDeck[x].f == '2')
		p2test = 2;
	else if (wDeck[x].f == '3')
		p2test = 3;
	else if (wDeck[x].f == '4')
		p2test = 4;
	else if (wDeck[x].f == '5')
		p2test = 5;
	else if (wDeck[x].f == '6')
		p2test = 6;
	else if (wDeck[x].f == '7')
		p2test = 7;
	else if (wDeck[x].f == '8')
		p2test = 8;
	else if (wDeck[x].f == '9')
		p2test = 9;
	else if (wDeck[x].f == 'T')
		p2test = 10;
	else if (wDeck[x].f == 'J')
		p2test = 11;
	else if (wDeck[x].f == 'Q')
		p2test = 12;
	else if (wDeck[x].f == 'K')
		p2test = 13;	

	
	if (p1test > p2test){
		cout << "   p1 gets a point!" << endl;
		p1 = p1 + 1;
	} else if (p1test < p2test){
		cout << "   p2 gets a point!" << endl;
		p2 = p2 + 1;
	} else {
		cout << "   it's a tie! no point!" << endl;
	}
}
