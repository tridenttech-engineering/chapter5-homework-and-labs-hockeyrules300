//lab5-2.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double sub=0.0;
	double const disc=0.9;
	double total=0.0;
	char member;
	
	// inputs
	cout << "Enter the subtotal: $";
	cin >> sub;
	cout<< "Premier Club Member (Y/N)?  ";
	cin>> member;
	if (tolower(member)=='y'){
		
		total=sub*disc;
			}
	else {
				total=sub;
			}
	//end if
	if (total>=100){
				total=total+.99;
		
	}
	else {
		
		total=total+4.99;
		
	}
	//end if
	cout<<fixed<<setprecision(2);
	cout << "Total: $" << total << endl;
	return 0;
}	//end of main function
