

//Harry Patel

#include <iostream>
#include<cmath>
#include <string>
using namespace std;

const double PI = 3.14159;

struct Circle{
	double h, k, r;

	void displayAll(void);
	double circumference(void);
	double area(void);
};
int main() {
	Circle circle1, circle2;
	cout << "Enter radius of a circle-1 (MUST be greater than 0): ";
	cin >> circle1.r;
	while(circle1.r <= 0) {
		cout << "Invalid Data" << endl << "Please try again (Value MUST be greater than 0): ";
		cin >> circle1.r;
	}

	cout << "Enter Circle 1 - h: ";
	cin >> circle1.h;
	cout << "Enter Circle 1 - k: ";
	cin >> circle1.k;


	cout << "\nEnter radius of a circle-1 (MUST be greater than 0): ";
	cin >> circle2.r;
	while (circle2.r <= 0) {
		cout << "Invalid Data" << endl << "Please try again (Value MUST be greater than 0): ";
		cin >> circle2.r;
	}

	cout << "Enter Circle 2 - h: ";
	cin >> circle2.h;
	cout << "Enter Circle 2 - k: ";
	cin >> circle2.k;
	cout << "Circle-1 ";
	circle1.displayAll();
	cout << endl;
	cout << "Circle-2";
	circle2.displayAll();
	cout << endl;

	system("pause");
	return 0;
}
void Circle::displayAll(void) {
	if (h >= 0 && k >= 0) {
		cout << "(x - " << h << ")^2 + (y - " << k << ")^2 = " << r * r << endl;
	}
	else if (h < 0 && k>0) {
		cout << "(x + " << -1 * h << ")^2 + (y - " << k << ")^2 = " << r * r << endl;
	}
	else if (h>0 &&k < 0) {
		cout << "(x - " << h << ")^2 + (y + " << -1 * k << ")^2 = " << r * r << endl;
	}
	else if (h < 0 && k < 0) {
		cout << "(x + " << -1 * h << ")^2 + (y + " << -1 * k << ")^2 = " << r * r << endl;
	}
	cout << "\nArea = " << area() << " unit squared" << endl;
	cout << "\nCircumference = " << circumference() << " unit" << endl;
}
double Circle::circumference(void) {
	return 2 * PI * r;
}
double Circle::area(void) {
	return PI * r * r;
}