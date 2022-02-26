//TTTv1-2.cpp
//OMG IT WORKS - the only function changed is Winstate, and declareWinner has been removed (RIP Switcheroo)
//Tristan Werden
//TODO: Nothing, it's perfect.
//NOTE:  TN means TRISTAN NOTE so you can see my comments separately from yours
# include <iostream>
using namespace std;

void boardDisplay();
void user();                                                
void alreadyTaken();
void winState();
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

void boardDisplay(){																											// zTN: This is simpler, and what I suggested. It was shot down though.
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

void winState() {   //I want to get 2 if statements - one for X, one for 0. Let's do this.                                                  
    																  
    if(                                                                          //X's first
	((board[1] == board[4]) && (board[4] == board[7]) && (board[7] == 'X')) ||   //left column 
	((board[2] == board[5]) && (board[5] == board[8]) && (board[5] == 'X')) ||   //middle column 
	((board[3] == board[6]) && (board[6] == board[9]) && (board[9] == 'X')) ||   //right column 
	((board[1] == board[2]) && (board[2] == board[3]) && (board[2] == 'X')) ||   //top row
	((board[4] == board[5]) && (board[5] == board[6]) && (board[5] == 'X')) ||   //mid row
	((board[7] == board[8]) && (board[8] == board[9]) && (board[9] == 'X')) ||   //bottom Row
	((board[1] == board[5]) && (board[5] == board[9]) && (board[9] == 'X')) ||	 //slant 1
	((board[3] == board[5]) && (board[5] == board[7]) && (board[5] == 'X'))      //slant 2	
	){
		boardDisplay();
		cout << "X Wins!" << endl;
		input = 0;                              // end game
    	turn = 0;								//TN: kills tieCheck() so you don't get random garbage after the game ends if you end on the 9th turn. (found this bug by accident}		      

	} else if (
	((board[1] == board[4]) && (board[4] == board[7]) && (board[7] == 'O')) ||   //left column 
	((board[2] == board[5]) && (board[5] == board[8]) && (board[5] == 'O')) ||   //middle column 
	((board[3] == board[6]) && (board[6] == board[9]) && (board[9] == 'O')) ||   //right column 
	((board[1] == board[2]) && (board[2] == board[3]) && (board[2] == 'O')) ||   //top row
	((board[4] == board[5]) && (board[5] == board[6]) && (board[5] == 'O')) ||   //mid row
	((board[7] == board[8]) && (board[8] == board[9]) && (board[9] == 'O')) ||   //bottom Row
	((board[1] == board[5]) && (board[5] == board[9]) && (board[9] == 'O')) ||	 //slant 1
	((board[3] == board[5]) && (board[5] == board[7]) && (board[5] == 'O'))
	){
		boardDisplay();
		cout << "O Wins!" << endl;
		input = 0;                              // end game
    	turn = 0;								//TN: kills tieCheck() so you don't get random garbage after the game ends if you end on the 9th turn. (found this bug by accident}	
	}}



void tieCheck() {
	if (turn >= 9){
		boardDisplay();
		cout << "Sorry! It was a draw.";
		input = 0;                        
	}
}

