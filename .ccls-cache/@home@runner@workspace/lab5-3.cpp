//lab5-3.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//double sub=0.0;
	double const disc=0.1;
	double total=0.0;
	char member;
	double const pdisc=0.05;

	// inputs
	cout << "Enter the subtotal: $";
	cin >> total;
	cout<< "Premier Club Member (Y/N)?  ";
	cin>> member;
	if (tolower(member)=='y'){
		
		total -= total * disc;
			}
	else {
		
		total -= total * pdisc;
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