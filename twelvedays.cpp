// twelvedays.cpp 
// Tristan Werden
// TODO: null

#include <iostream>

using namespace std;

int main(){
	
	for (int i = 12; i > 0; i--) {

	cout << "On the " << 13 - i << " day of christmas, my true love gave to me:" << endl;

		switch (i) {
			case 1: cout << "    12 Drummers Drumming" << endl;
			case 2: cout << "    11 Pipers Piping" << endl;
			case 3: cout << "    10 Lords a Leaping" << endl;
			case 4: cout << "    9 Ladies Dancing" << endl;
			case 5: cout << "    8 Maids a Milking" << endl;
			case 6: cout << "    7 Swans a Swimming" << endl;
			case 7: cout << "    6 Geese a Laying" << endl;
			case 8: cout << "    5 Golden Rings" << endl;
			case 9: cout << "    4 Calling Birds" << endl;
			case 10: cout << "    3 French Hens" << endl;
			case 11: cout << "    2 Turtle Doves" << endl;
			case 12: cout << "    a Partridge in a Pear Tree" << endl;

		}

	}
}