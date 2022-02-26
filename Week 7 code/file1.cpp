// file1.cpp
// Opens a file...

#include<iostream>
#include<fstream>


using namespace std;

int main()
{
	char fileName[8];
	fstream dataFile;  // Declare a file stream object

	cout << "Enter the file name you wish to open or create: " << endl;

	cin  >> fileName;

	dataFile.open(fileName,ios::out);  //note file mode flag

	return 0;
}
