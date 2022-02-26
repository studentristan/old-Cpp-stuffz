// program1.cpp 
// Tristan Werden

#include <iostream>
#include <string>
#include <list>
#include <fstream>

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

void fill(){
	cout << "Please insert a word: ";
	cin >> word;
	cout << "The word inserted was: " << word << endl;
	lista.push_back(word);
	
}

void writeToFile(){
	string worda;
	ofstream fileOfWords;
	fileOfWords.open("coolerthanu.txt");
	for (iter = lista.begin(); iter != lista.end(); iter++)
	{
		worda = *iter;
		fileOfWords << worda << ", ";
	}
	fileOfWords.close();
}

int main(){
 	int yorn;
 	for(int i = 0; i < 10; i++){
		 fill();
		 cout << "would you like to add another word? (1=Y or 0=N): ";
		 cin  >> yorn;
		 if(yorn == 0){
		 	break;
		 }
	 }
 	
	Display();
	

	
	writeToFile();
	
	

	return 0;
}


