#include "temp.h"


temp::temp(float input, int selection){
	float output;
	
	
	switch (selection){
		case 1:
			output = FtoC(input);
			std::cout << "your value is: " << output << " degrees Celsius."<< std::endl;
		break;
		case 2:
			output = CtoF(input);
			std::cout << "your value is: " << output << " degrees Fahrenheit."<< std::endl;
		break;
		case 3:
			output = FtoK(input);
			std::cout << "your value is: " << output << " degrees Kelvin." << std::endl;
		break;
		case 4:
			output = CtoK(input);
			std::cout << "your value is: " << output << " degrees Kelvin. " << std::endl;
		break;
		case 5:
			output = KtoF(input);
			std::cout << "your value is: " << output << " degrees Fahrenheit. " <<	std::endl;
		break;
		case 6:
			output = KtoC(input);
			std::cout << "your value is: " << output << " degrees Celsius. " << std::endl;
		break;
		default:
			std::cout << "invalid response. Please input in form [VALUE] [SELECTION]";
		break;
	}
	std::cout << std::endl << std::endl;
}

float temp::FtoC(float inputvar){					//OMG getting this thing to work was a pain in the ass. It kept throwing a makeFile.win error, and I don't know how I got it to work.
	float output;
	output = (inputvar - 32.0)*(float(5.0/9.0));
	return output;
}

float temp::CtoF(float inputvar){
	float output;
	output = (inputvar * (float(9.0/5.0)) + 32.0);
	return output;
}

float temp::FtoK(float inputvar){
	float output;
	output = FtoC(inputvar) + 273.15;
	return output;
}
	
float temp::CtoK(float inputvar){
	float output;
	output = inputvar + 273.15;
	return output;
}	

float temp::KtoF(float inputvar){
	float output;
	output = KtoC(inputvar);
	output = CtoF(output);
	return output;
}

float temp::KtoC(float inputvar){
	float output;
	output = inputvar - 273.15;
	return output;
}
	
temp::~temp(){
	
}