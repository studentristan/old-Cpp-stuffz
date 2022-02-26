#include <iostream>
#include "temp.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float input;
	int selection;
	int restart;
	std::cout << "Please input a selection: " << std::endl << "1: F to C" << std::endl << "2: C to F" << std::endl << "3: F to K" << std::endl << "4: C to K" << std::endl << "5: K to F" << std::endl << "6: K to C" << std::endl << std::endl;
	std::cin >> selection;
	std::cout << std::endl << std::endl << "Please input a value: ";
	std::cin >> input;
	std::cout << std::endl << std::endl;
	
	
	temp t(input, selection);
	
	
	std::cout << std::endl << "would you like to run the program again? (1=Y or 0=N)" << std::endl;
	std::cin >> restart;
	std::cout << std::endl << std::endl << std::endl;
	if(restart == 1){
		main();
	}
	return 0;
}

