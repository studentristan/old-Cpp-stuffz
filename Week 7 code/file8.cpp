// file8.cpp
// Example of the reading the file created in file7.cpp

#include<iostream>
#include<fstream>

using namespace std;

// Declare a structure
struct Info
{
	char name[51];
	int empNum;
	char address1[51];
	char csz[51];
};

int main()
{
	fstream peopleFile;
	Info person;
	char again;


	peopleFile.open("people.dat", ios::in | ios::binary);

	if (!peopleFile)
	{
		cout << "Error opening File..." << endl;
		return 0;
	}

	cout << "Here is the information stored in the file..." << endl;

	peopleFile.read((char *)&person, sizeof(person));

	while(!peopleFile.eof())
	{
		cout << "Name: ";
		cout << person.name << endl;

		cout << "EmpNum: ";
		cout << person.empNum << endl;

		cout << "Address - Line 1: ";
		cout << person.address1 << endl;

		cout << "City, State, Zip: ";
		cout << person.csz << endl;

		cout << "Press any key to see the next record... " << endl;

		cin.get(again);

		peopleFile.read((char *)&person, sizeof(person));
	}

	cout << "Program End..."  << endl;

	peopleFile.close();
	
	
	return 0;
}

