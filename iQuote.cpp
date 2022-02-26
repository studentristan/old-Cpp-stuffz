//iQuote.cpp
//Tristan Werden
//TODO: finished (haven't debugged or optimized... ran out of time. I'm sure this can be broken EASY, but honors physics has been kicking my butt.)

#include <iostream>

using namespace std;


int iQuote(int, char);
double iQuote(double, char);
char iQuote(char[], char);


int main(){
	char quotes = '"';
	int x = 3;
	double y = 3904;
	char z[]{"Banana"};
	iQuote(x, quotes);
	iQuote(y, quotes);
	iQuote(z, quotes);
	
	return 0;
}

int iQuote(int x, char quotes){
	cout << endl << "The output is: " << quotes << x << quotes << endl;
	return x;
}

double iQuote(double y, char quotes){
	cout << endl << "The output is: " << quotes << y << quotes << endl;
	return y;
}

char iQuote(char z[], char quotes){
	cout << endl << "The output is: " << quotes << z << quotes << endl;
	return 0;
}

