//Array3 - Partial Array Initialization
#include<iostream>

using namespace std;

int main()
{

	int x[10] = {2, 3, 4, 5, 6};
	int ctr;

	for(ctr = 0; ctr < 10; ctr++)
	{
		cout << "Array " << ctr << "   " << x[ctr]  << endl;
	}

	return 0;
}
