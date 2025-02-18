//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double item1 = 0.0;
	double item2 = 0.0;
	double temp = 0.0;
	double total = 0.0;
	//enter input data
	cout << "Item 1 price: ";
	cin >> item1;
	cout << "Item 2 price: ";
	cin >> item2;
	//determine which is the greater price
	if (item1>item2) {
		temp = item1;
		item2 = item1;
		item2 = temp;
		//end if
		
	}

	return 0;
}	//end of main function

