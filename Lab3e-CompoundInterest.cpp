
//Harry Patel

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double amount(double,double,int);


int main() {
	cout << "Compound Interest calculator ";

	cout << fixed << setprecision(2);

	double p, r;
	int t;
	
	cout << "\n\n\nEnter the principal amount: $";
	cin >> p;

	cout << "Enter the annual rate as percent (Example: 3.5 for 3.5%): ";
	cin >> r;

	cout << "Enter time in years: ";
	cin >> t;

	cout << "\n\nTotal amount = $" << amount(p,r,t)<< endl;

	system("pause");
	return 0;
}
double amount(double principal, double annualRate, int years) {
	annualRate = annualRate / 100;
	return principal * pow(1 + annualRate / 12, 12 * years);
	
}

