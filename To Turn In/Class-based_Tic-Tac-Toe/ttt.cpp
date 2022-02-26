#include "ttt.h"

//GLOBALS - only actually exist when the class is called anyways, so... why not put them here for convenience?

	int input;                                                      //user input variable - TN: also ends the game if 0. Very tricky...
	int turn = 0;                                                   //gamer turn counter
	char xo = ' ';                                                  // X O board input        
	int choice;                                                     //The ROBO STARTER!!!! ~~Bumm Bummmm BUUUMMMMMM~~
	char board[10] = {' ','1','2','3','4','5','6','7','8','9'};   //board contents 
                                                            	  //using 10 elements to match squares
                                                              	  //with appropriate array elements.
                                                              	  //Note: Using 1 array is easier than 3!              


ttt::ttt(){                                                  	                                                           	  
   
   std::cout << "Would you like to play single player or 2 player? (1 for multiplayer, 2 for THE ULTIMATE ROBOT)";
	std::cin >> choice;
	if (choice != 1 && choice != 2 ){
		std::cout << "AHHHHHH!!! Input validation before the game even starts? ugh. Stop hitting wrong buttons. Just try again.";
		ttt();
	}
	
   do{  // add the main code here to get this program to run 
        boardDisplay();
        std::cout << "Turn#: " << turn << ".  Please choose a number, 1 - 9 (or 0 to quit): ";   // prompts the user for a spot on the board 
																							// TN: Moved out of boardDisplay() so it didn't print when board display is called to show off the board in win and tie scenarios.
        user();
    	tieCheck();
        
    
    }while(input != 0);
                                                             	  
}

void ttt::boardDisplay(){																											// TN: This is simpler, and what I suggested. It was shot down though.
        std::cout << " " << board[1] << " " << "|" << " " << board[2] << " " << "|" << " " << board[3] << " " << std::endl;               // draws the board 
    
        std::cout << "----------" << std::endl;
    
        std::cout << " " << board[4] << " " << "|" << " " << board[5] << " " << "|" << " " << board[6] << " " << std::endl;               // draws the board 
    
        std::cout << "----------" << std::endl;
    
        std::cout << " " << board[7] << " " << "|" << " " << board[8] << " " << "|" << " " << board[9] << " " << std::endl;               
    
        
        
        }

void ttt::user(){
        turn++;
        if(choice == 2){ //RELEASE THE BOTS!!!
		
        	if(turn % 2 == 0){
        	
				input = theBot();
				std::cout << input;
				std::cout << std::endl << std::endl;
            	xo = 'O';
            
        	}else{
            	std::cin >> input;
        
        		std::cout << std::endl << std::endl;
            	xo = 'X';
            
        }} else if(choice == 1){      //Normal Mode
        	if(turn % 2 == 0){
        	
				std::cin >> input;
        
        		std::cout << std::endl << std::endl;
            	xo = 'X';
            
        	}else{
        	
        		std::cin >> input;
        
        		std::cout << std::endl << std::endl;
				xo = 'O';
		}}
    
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
                std::cout << "You did not enter a valid input" << std::endl;
    	}
        winState();
}

void ttt::alreadyTaken()
{
    std::cout << "This spot is already taken, try again." << std::endl;
    turn--;
}

void ttt::winState() {                                                     //TN: Because of how the code validates who won, my infinite if-statement won't work. 
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

void ttt::declareWinner(char val) {		                              //Displays the Winner
    switch(val)                                                   //TN: I didn't think to use a variable here. We would have ran into problems...
    {															  //TN: I also added the board display to the wins so you could see them in a row. Thought it was a nice touch. 
        case 'X': 
		boardDisplay();
		std::cout << "X Wins!" << std::endl;
            break;
        case 'O': 
		boardDisplay();
		std::cout << "O Wins!" << std::endl;
            break;
    }
    input = 0;                              // end game
    turn = 0;								//TN: kills tieCheck() so you don't get random garbage after the game ends if you end on the 9th turn. 
}

void ttt::tieCheck() {
	if (turn >= 9){
		boardDisplay();
		std::cout << "Sorry! It was a draw.";
		input = 0;                        
	}
}

int ttt::theBot() {
	int inputx;
	if (turn == 2){  //round 1 logic (the most important turn in the game)
		
		if ((board[5] == '5') && ((board[7] == 'X') || (board[9] == 'X') || (board[3] == 'X') || (board[1] == 'X'))){  // if center open, and there is a stolen corner, grab it
			inputx = 5;
	} else {
		if(board[7] == '7') 
			inputx = 7;
		else if(board[9] == '9')
			inputx = 9;
		else if(board[1] == '1')
			inputx = 1;
		else if(board[3] == '3')
			inputx = 3;
		}
		
	}else if ((turn == 4) && (board[5] == 'O')){  
		
	if(board[8] == '8')
		inputx = 8;
	else if(board[6] == '6')
		inputx = 6;
	else if(board[2] == '2')
		inputx = 2;
	else inputx = 4;
	
	}else if ((turn == 4) && (((board[8] == 'X') && (board[6] == 'X')) || ((board[8] == 'X') && (board[4] == 'X')) || ((board[4] == 'X') && (board[2] == 'X')) || ((board[2] == 'X') && (board[6] == 'X')) )){  
		inputx = 5;
	}else{			//logic for the rest of the game...*sigh*
	
	
	//START WITH THE 24 WIN CONDITIONS
	
	//top row
	if((board[1] == board[2]) && (board[2] == 'O') && (board[3] != 'X'))
		inputx = 3;
	else if((board[2] == board[3]) && (board[2] == 'O') && (board[1] != 'X'))
		inputx = 1;
	else if((board[1] == board[3]) && (board[3] == 'O') && (board[2] != 'X'))
		inputx = 2;
		
	//middle row
	else if((board[4] == board[5]) && (board[5] == 'O') && (board[6] != 'X'))
		inputx = 6;
	else if((board[4] == board[6]) && (board[6] == 'O') && (board[5] != 'X'))
		inputx = 5;
	else if((board[5] == board[6]) && (board[6] == 'O') && (board[4] != 'X'))
		inputx = 4;
		
	//bottom row
	else if((board[7] == board[8]) && (board[8] == 'O') && (board[9] != 'X'))
		inputx = 9;
	else if((board[8] == board[9]) && (board[9] == 'O') && (board[7] != 'X'))
		inputx = 7;
	else if((board[7] == board[9]) && (board[9] == 'O') && (board[8] != 'X'))
		inputx = 8;
	
	//left column
	else if((board[1] == board[7]) && (board[7] == 'O') && (board[4] != 'X'))
		inputx = 4;
	else if((board[1] == board[4]) && (board[4] == 'O') && (board[7] != 'X'))
		inputx = 7;
	else if((board[4] == board[7]) && (board[7] == 'O') && (board[1] != 'X')) 
		inputx = 1;
	
	//middle column
	else if((board[2] == board[5]) && (board[5] == 'O') && (board[8] != 'X'))
		inputx = 8;
	else if((board[8] == board[5]) && (board[5] == 'O') && (board[2] != 'X'))
		inputx = 2;
	else if((board[2] == board[8]) && (board[8] == 'O') && (board[5] != 'X'))
		inputx = 5;
	
	//right column
	else if((board[3] == board[6]) && (board[6] == 'O') && (board[9] != 'X'))
		inputx = 9;
	else if((board[6] == board[9]) && (board[9] == 'O') && (board[3] != 'X'))
		inputx = 3;
	else if((board[3] == board[9]) && (board[9] == 'O') && (board[6] != 'X'))
		inputx = 6;
	
	//diagnal down->right
	else if((board[1] == board[5]) && (board[5] == 'O') && (board[9] != 'X'))
		inputx = 9;
	else if((board[1] == board[9]) && (board[9] == 'O') && (board[5] != 'X'))
		inputx = 5;
	else if((board[9] == board[5]) && (board[5] == 'O') && (board[1] != 'X'))
		inputx = 1;
		
	//diagnal up->right
	else if((board[3] == board[5]) && (board[5] == 'O') && (board[7] != 'X'))
		inputx = 7;
	else if((board[7] == board[5]) && (board[5] == 'O') && (board[3] != 'X'))
		inputx = 3;
	else if((board[3] == board[7]) && (board[7] == 'O') && (board[5] != 'X'))
		inputx = 5;
	
	
	//RUN THROUGH THE 24 BLOCK CONDITIONS
	
	//top row
	if((board[1] == board[2]) && (board[2] == 'X') && (board[3] != 'O'))
		inputx = 3;
	else if((board[2] == board[3]) && (board[2] == 'X') && (board[1] != 'O'))
		inputx = 1;
	else if((board[1] == board[3]) && (board[3] == 'X') && (board[2] != 'O'))
		inputx = 2;
		
	//middle row
	else if((board[4] == board[5]) && (board[5] == 'X') && (board[6] != 'O'))
		inputx = 6;
	else if((board[4] == board[6]) && (board[6] == 'X') && (board[5] != 'O'))
		inputx = 5;
	else if((board[5] == board[6]) && (board[6] == 'X') && (board[4] != 'O'))
		inputx = 4;
		
	//bottom row
	else if((board[7] == board[8]) && (board[8] == 'X') && (board[9] != 'O'))
		inputx = 9;
	else if((board[8] == board[9]) && (board[9] == 'X') && (board[7] != 'O'))
		inputx = 7;
	else if((board[7] == board[9]) && (board[9] == 'X') && (board[8] != 'O'))
		inputx = 8;

	//left column
	else if((board[1] == board[7]) && (board[7] == 'X') && (board[4] != 'O'))
		inputx = 4;
	else if((board[1] == board[4]) && (board[4] == 'X') && (board[7] != 'O'))
		inputx = 7;
	else if((board[4] == board[7]) && (board[7] == 'X') && (board[1] != 'O'))
		inputx = 1;
	
	//middle column
	else if((board[2] == board[5]) && (board[5] == 'X') && (board[8] != 'O'))
		inputx = 8;
	else if((board[8] == board[5]) && (board[5] == 'X') && (board[2] != 'O'))
		inputx = 2;
	else if((board[2] == board[8]) && (board[8] == 'X') && (board[5] != 'O'))
		inputx = 5;
	
	//right column
	else if((board[3] == board[6]) && (board[6] == 'X') && (board[9] != 'O'))
		inputx = 9;
	else if((board[6] == board[9]) && (board[9] == 'X') && (board[3] != 'O'))
		inputx = 3;
	else if((board[3] == board[9]) && (board[9] == 'X') && (board[6] != 'O'))
		inputx = 6;
	
	//diagnal down->right
	else if((board[1] == board[5]) && (board[5] == 'X') && (board[9] != 'O'))
		inputx = 9;
	else if((board[1] == board[9]) && (board[9] == 'X') && (board[5] != 'O'))
		inputx = 5;
	else if((board[9] == board[5]) && (board[5] == 'X') && (board[1] != 'O'))
		inputx = 1;
		
	//diagnal up->right
	else if((board[3] == board[5]) && (board[5] == 'X') && (board[7] != 'O'))
		inputx = 7;
	else if((board[7] == board[5]) && (board[5] == 'X') && (board[3] != 'O'))
		inputx = 3;
	else if((board[3] == board[7]) && (board[7] == 'X') && (board[5] != 'O'))
		inputx = 5;

	
	//GRAB CORNERS IF AVAILABLE
	
	else if(board[7] == '7') 
		inputx = 7;
	else if(board[9] == '9')
		inputx = 9;
	else if(board[1] == '1')
		inputx = 1;
	else if(board[3] == '3')
		inputx = 3;
	
	//GRAB ANYTHING OPEN (finish a tie condition)
	else if(board[8] == '8')
		inputx = 8;
	else if(board[6] == '6')
		inputx = 6;
	else if(board[2] == '2')
		inputx = 2;
	else inputx = 4;
		
		
	}
	
	
	
	return inputx;
}

ttt::~ttt(){
	
}