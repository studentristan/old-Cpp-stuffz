// file6.cpp
// Example of reading from a file.

#include<iostream>
#include<fstream>
#include<string>


using namespace std;

int main()
{
	string input;
	fstream dataFile("names.txt", ios::in);

	if(dataFile.fail())
	{
		cout << "Error opening File..." << endl;
		return 0;
	}

	while(!dataFile.eof())  //flipped them. it works now. It was re-printing the last one over. just a loop error.
	{
		cout << input << endl;
		dataFile >> input;
	}

	dataFile.close();
	

	return 0;
}
