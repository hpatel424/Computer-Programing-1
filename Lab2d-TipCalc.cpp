

//Harry Patel
//8/21/2019
 //Tip Calculator (Lab2d)
 
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(void) {
	cout << fixed << setprecision(2);

	string firstName;
	double dollars;
	double tipPercent;

	cout << "Tip Calculator!!!\n" << endl;

	cout << "Enter Servers First Name: \t\t";
	getline(cin, firstName);

	cout << "Enter the amount for your service: \t$";
	cin >> dollars;

	cout << "Enter your tip percent (10 for 10%): \t";
	cin >> tipPercent;

	double tip = dollars * tipPercent / 100;
	double total = dollars + tip;

	cout << "\n\nYour servers name: \t\t\t" << firstName << endl;
	cout << "Your service charge: \t\t\t$" << dollars << endl;
	cout << "Your tip:          \t\t\t$" << tip << endl;
	cout << "---------------------------------------------------";
	cout << "\nYour Total is : \t\t\t$" << total << endl;
	system("pause");
	return (0);
}