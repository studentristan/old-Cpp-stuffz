// program2.cpp 
// Tristan Werden

#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;


string word; 
list<string> lista;
list<string> :: iterator iter;

void Display(){
	for (iter = lista.begin(); iter != lista.end(); iter++)
	{
		cout << *iter << " ";
	}

	for (int x = 0; x < 4; x++)
		cout << endl;
}

void readFromFile(){
	string worda;
	
	ifstream inFile("coolerthanu.txt");
	
	
while(!inFile.eof()){
		inFile >> worda;
		cout << worda << "  ";
		lista.push_back(worda);
	}
}

int main(){
 
 	readFromFile();
 	
	Display();
	
	cout << endl << endl << "Cleaning..." << endl << endl;
	lista.unique();
	
	Display();
	

	
	

	return 0;
}


