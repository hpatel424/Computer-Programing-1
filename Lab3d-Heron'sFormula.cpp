

//Harry Patel

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double triangleArea(double a, double b, double c);

int main() {

	cout << fixed << setprecision(2);
	cout << "calculates the area of any triangle using Herons's Formula\n\n\n";
	double x, y, z;
	cout << "Enter 1st side of the triangle: ";
	cin >> x;
	cout << "Enter 2nd side of the triangle: ";
	cin >> y;
	cout << "Enter 3rd side of the triangle: ";
	cin >> z;

	cout << "\n\n\nArea = " << triangleArea(x, y, z) << " unit squared " << endl;

	system("pause");
	return 0;
}
// function 
double triangleArea(double a, double b, double c) {
	double s = (a + b + c) / 2;
	return  sqrt((s) * (s - a) * (s - b) * (s - c));

}
