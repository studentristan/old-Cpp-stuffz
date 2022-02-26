#ifndef TTT_H
#define TTT_H
#include <iostream>

class ttt
{
	public:
		ttt();
		void boardDisplay();
		void user();                                                
		void alreadyTaken();
		void winState();
		void declareWinner(char);                                       //aka "Switcheroo" TN: Switcheroo is the best name ever, and is a perfect example of self-documenting code. 
		void tieCheck();
		int theBot();
		~ttt();
	protected:
};

#endif