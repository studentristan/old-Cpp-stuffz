#include "dog.h"

dog::dog(){
	std::cout << "woof! ";
	std:: cout << std::endl;
}

dog::dog(int times){
	for (int x = 0; x < times; x++)
		std::cout << "woof!" << std::endl;
}

dog::dog(char* dName){
	std::cout << "woof!" << dName << " created...";
	std::cout << std::endl;
	dogName = dName;	
}

dog::~dog(){
	if(dogName == NULL){
		std::cout << "wag! wag! ";
		std::cout << std::endl;
	} else {
		std::cout << "Bye Bye " << dogName << std::endl;
	}
}
