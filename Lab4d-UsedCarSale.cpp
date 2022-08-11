
//Harry Patel

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double commission(double, double);

int main() {
	cout << "Used car sale commission calculator" << endl;
	
	cout << fixed << setprecision(2);
	
	double a, r;
	string position;

	cout << "what is your position? ";
	getline(cin, position);
	cout << "Enter the sale price $";
	cin >> a;

	

	if (position == "salesperson" || position=="Salesperson") {
		if (a <= 15000.00) {
			r = 2.3;
			cout <<"\nYour commission is $"<< commission(a, r) << endl;
		}
		else if (a >= 15000.01 && a <= 25000.00) {
			r = 3.5;
			cout << "\nYour commission is $" << commission(a, r) << endl;
		}
		else {
			r = 4.5;
			cout << "\nYour commission is $" << commission(a, r) << endl;
		}
		

	}
	else if (position == "officer" || position=="Officer") {
		if (a <= 15000.00) {
			r = 0.6;
			cout << "\nYour commission is $" << commission(a, r) << endl;
		}
		else if(a>=15000.01 && a<=25000.00){
			r = 0.8;
			cout << "\nYour commission is $" << commission(a, r) << endl;
		}
		else {
			r = 1.00;
			cout << "\nYour commission is $" << commission(a, r) << endl;
		}

	}
		else {
			cout << "Incorrect Data" << endl;
		}

	system("pause");
	return 0;
}

double commission(double amount, double rate){
	rate = rate / 100;
	return amount * rate;
}