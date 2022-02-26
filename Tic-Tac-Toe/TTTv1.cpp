//TTTv1.cpp
//v1. v1-2 coming soon, with better if statements!!
//Tristan Werden
//TODO: None, except add AI? 
//NOTE:  TN means TRISTAN NOTE so you can see my comments separately from yours
# include <iostream>
using namespace std;

void boardDisplay();
void user();                                                
void alreadyTaken();
void winState();
void declareWinner(char);                                       //aka "Switcheroo" TN: Switcheroo is the best name ever, and is a perfect example of self-documenting code. 
void tieCheck();
// global variables...

int input;                                                      //user input variable - TN: also ends the game if 0. Very tricky...
int turn = 0;                                                   //gamer turn counter
char xo = ' ';                                                  // X O board input        

char board[10] = {' ','1','2','3','4','5','6','7','8','9'};     //board contents 
                                                                //using 10 elements to match squares
                                                                //with appropriate array elements.
                                                                //Note: Using 1 array is easier than 3!

int main(){  //TN: You like to put the bracket below the function name, but it drives me crazy. So for everywhere you did that and I wanted to change something, I changed it.
    do{  // add the main code here to get this program to run 
        boardDisplay();
        cout << "Turn#: " << turn << ".  Please choose a number, 1 - 9 (or 0 to quit): ";   // prompts the user for a spot on the board 
																							// TN: Moved out of boardDisplay() so it didn't print when board display is called to show off the board in win and tie scenarios.
        user();
    	tieCheck();
        
    
    }while(input != 0);
	
	
    
    return 0;   
}

void boardDisplay(){																											// TN: This is simpler, and what I suggested. It was shot down though.
        cout << " " << board[1] << " " << "|" << " " << board[2] << " " << "|" << " " << board[3] << " " << endl;               // draws the board 
    
        cout << "----------" << endl;
    
        cout << " " << board[4] << " " << "|" << " " << board[5] << " " << "|" << " " << board[6] << " " << endl;               // draws the board 
    
        cout << "----------" << endl;
    
        cout << " " << board[7] << " " << "|" << " " << board[8] << " " << "|" << " " << board[9] << " " << endl;               
    
        
        
        }

void user(){
        turn++;
        
        cin >> input;
        
        cout << endl << endl;

        if(turn % 2 == 0)
            xo = 'X';
        else
            xo = 'O';
    
        switch (input)
        {
            case 1:	
                if ((board[1] == 'x')||(board[1] == 'X')||(board[1] == 'o')||(board[1] == 'O')) // decides if spot is already taken
                {
                    alreadyTaken();
                    break;
                }
                board[1] = xo;
                break;
            
	       	case 2:	
                if ((board[2] == 'x')||(board[2] == 'X')||(board[2] == 'o')||(board[2] == 'O')) // same process for all cases
                {
                    alreadyTaken();
                    break;
                }
                board[2] = xo;
                break;
		    case 3:	
                if ((board[3] == 'x')||(board[3] == 'X')||(board[3] == 'o')||(board[3] == 'O'))
                {
                    alreadyTaken();
                    break;
                }
                board[3] = xo;
                break; 
            case 4:
                if ((board[4] == 'x')||(board[4] == 'X')||(board[4] == 'o')||(board[4] == 'O'))
                {
                    alreadyTaken();
                    break;
                }
                board[4] = xo;
                break;
	       	case 5:	if ((board[5] == 'x')||(board[5] == 'X')||(board[5] == 'o')||(board[5] =='O'))
                {
                    alreadyTaken();
                    break;
                }
                board[5] = xo;
                break;
		    case 6:	
                if ((board[6] == 'x')||(board[6] == 'X')||(board[6] == 'o')||(board[6] =='O'))
                {
                    alreadyTaken();
                    break;
                }
                board[6] = xo;
                break;
            case 7:	
                if ((board[7] == 'x')||(board[7] == 'X')||(board[7] == 'o')||(board[7] =='O'))
                {
                    alreadyTaken();
                    break;
                }
                board[7] = xo;
                break;
	       	case 8:	
                if ((board[8] == 'x')||(board[8] == 'X')||(board[8] == 'o')||(board[8] =='O'))
                {
                    alreadyTaken();
                    break;
                }
                board[8] = xo;
                break;
		    case 9:	
            if ((board[9] == 'x')||(board[9] == 'X')||(board[9] == 'o')||(board[9] =='O'))
                {
                    alreadyTaken();
                    break;
                }
                board[9] = xo;
                break;
            case 0:  
                break;                                                      //quit flag
	       	default:	
                cout << "You did not enter a valid input" << endl;
    	}
        winState();
}

void alreadyTaken()
{
    cout << "This spot is already taken, try again." << endl;
    turn--;
}

void winState() {                                                     //TN: Because of how the code validates who won, my infinite if-statement won't work. 
    																  //TN: HOWEVER: removing the swticharoo would do the trick... I'm having an idea. I'll see if I can get it to work... in another file.
    if((board[1] == board[4]) && (board[4] == board[7]))  		      //Win on Left Column 
        declareWinner(board[7]);
    
    else if((board[2] == board[5]) && (board[5] == board[8])) 		  //Win on Middle Column 
        declareWinner(board[8]);

    else if((board[3] == board[6]) && (board[6] == board[9])) 	      //Win on Right Column 
        declareWinner(board[9]);
    
    else if((board[1] == board[2]) && (board[2] == board[3]))		  //Win on Top Row
        declareWinner(board[3]);
    
    else if((board[4] == board[5]) && (board[5] == board[6]))         //Win on Middle Row
        declareWinner(board[6]);

    else if((board[7] == board[8]) && (board[8] == board[9])) 	      //Win on Bottom row
        declareWinner(board[9]);
    
    else if((board[1] == board[5]) && (board[5] == board[9])) 	 	//Win On '\' Diagonal
        declareWinner(board[1]);
    
    else if((board[3] == board[5]) && (board[5] == board[7])){		//Win on '/' Diagonal
        declareWinner(board[7]);
    }

}

void declareWinner(char val) {		                              //Displays the Winner
    switch(val)                                                   //TN: I didn't think to use a variable here. We would have ran into problems...
    {															  //TN: I also added the board display to the wins so you could see them in a row. Thought it was a nice touch. 
        case 'X': 
		boardDisplay();
		cout << "X Wins!" << endl;
            break;
        case 'O': 
		boardDisplay();
		cout << "O Wins!" << endl;
            break;
    }
    input = 0;                              // end game
    turn = 0;								//TN: kills tieCheck() so you don't get random garbage after the game ends if you end on the 9th turn. 
}

void tieCheck() {
	if (turn >= 9){
		boardDisplay();
		cout << "Sorry! It was a draw.";
		input = 0;                        
	}
}

