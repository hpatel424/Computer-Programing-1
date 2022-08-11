
//Harry Patel
//Calculate PI

#include <iostream>
#include <cmath>

using namespace std;

double calculatePI(int numTerms);

int main() {

	cout << "Calculating the value of PI from the infinite series:\n" << endl;

	int n;
	cout << "Enter the number of terms for the summation ";
	cin >> n;

	int x = 0;
	while (x < n) {
		x = x + 10;
		cout << "CalculatePI (" << x << ") = " << calculatePI(x) << endl;
	}

	return 0;
}
double calculatePI(int numTerms) {
	int i = 0;
	double sum = 0.0, pi;
	while (i < numTerms) {
		sum = sum + pow(-1, i) / (2 * i + 1);
		i = i + 1;
	}
	return 4 * sum;
}