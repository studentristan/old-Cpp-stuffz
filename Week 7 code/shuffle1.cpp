//Shuffle.cpp  
//Example of Card Shuffling and Dealing (Version 1.0)

#include <iostream>
#include <iomanip>						// for getw

using namespace std;


int ctr = 0;		           // iteration counter

void shuffle( int[] [13] );

void deal(const int[] [13], const char [], const char []);

int main()
{
	const char suit[4] =
	{'H', 'D', 'C', 'S'};

	const char face[13] =
	{'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};

	int deck [4] [13] = {0};

	shuffle( deck);

	deal(deck, face, suit);
	
	cout << "# Interations:  " << ctr << endl;

	return 0;
}

void shuffle( int wDeck[] [13] )
{
	int row, column;
	
	srand( time(0) );

	for ( int card = 1; card <= 52; card++) {
		do {
			ctr++;
			row = rand() % 4;
			column = rand() % 13;
		}while( wDeck[row] [column] != 0);

		wDeck[row] [column] = card;
	}
}	

void deal(const int wDeck[] [13], const char wFace[],
		  const char wSuit[])
{
	for (int card = 1;card <= 52; card++)
		for (int row = 0; row <=3; row++)
			for (int column = 0; column <= 12; column++)

				if (wDeck[row] [column] == card)
				{
					cout << setw(5) << setiosflags(ios::right)
					<< wFace[column] << " of " << wSuit[row] << "  ";
					if (card % 2 == 0) 
						cout << endl;
				}
}
