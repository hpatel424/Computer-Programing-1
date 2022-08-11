
//Harry Patel

#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

bool runAgain(void);
double sin(double arg, int terms);
int factorial(int number);
const double PI = 3.14159;

int main() {

	cout << fixed << setprecision(4);
	double x;
	int n;
	do {
		cout << "Enter x in degrees: ";
		cin >> x;
		cout << "Enter n number of terms: ";
		cin >> n;

		cout << sin(x * PI / 180, n) << endl;

	} while (runAgain());

	system("pause");
	return 0;
}

bool runAgain(void) {
	char userResponse;

	cout << "\nWould you like to run again (y or n): ";
	cin >> userResponse;

	if (userResponse == 'y')
		return(true);

	return(false);
}
double sin(double arg,int terms) {
	double answer = 0.0;
	for (int n = 0; n < terms; n++) {
		answer = answer + pow(-1, n) * pow(arg, 2 * n + 1) / factorial(2 * n + 1);
	}
	return answer;
}
int factorial(int number) {

	if (number <= 1) return 1;

	return(number * factorial(number - 1));
}