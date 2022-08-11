
//Harry Patel
//Quadratic

#include <iostream>
#include <cmath>
#include<iomanip> 

using namespace std;


double discriminant(double, double, double);


int main() {
	//  ax^2 + bx + c = 0
	
	char userResponse;
	do {
		cout << "Quadratic Functions: determines the number and type of roots " << endl;
		double a, b, c;
		cout << "Enter coefficients " << endl;
		cout << "a= ";
		cin >> a;
		cout << "b= ";
		cin >> b;
		cout << "c= ";
		cin >> c;

		if (b >= 0 && c >= 0) {
			cout << "\nEquation: " << a << "x^2 + " << b << "x + " << c << " = 0 " << endl;
		}
		else if (b < 0 && c < 0) {
			cout << "\nEquation: " << a << "x^2 " << b << "x " << c << " = 0 " << endl;
		}
		else if (b >= 0 && c < 0) {
			cout << "\nEquation: " << a << "x^2 + " << b << "x " << c << " = 0 " << endl;
		}
		else if (b < 0 && c > 0) {
			cout << "\nEquation: " << a << "x^2 " << b << "x + " << c << " = 0 " << endl;
		}

		cout << fixed << setprecision(4);
		
		double d = discriminant(a, b, c);
		double root1, root2, real, imaginary;


		if (d > 0) {
			root1 = (-b + sqrt(double(b * b) - (4 * a * c))) / (2 * a);
			root2 = (-b - sqrt(double(b * b) - (4 * a * c))) / (2 * a);
			cout << "Has roots:  x= "  << root1  << " and x=  " << root2 << endl;
		}
		else if (d == 0) {
			root1 = -b / (2 * a);
			cout << "Has root x= " << root1 << endl;
		}
		else {
			real = -b / (2 * a);
			imaginary = sqrt(-1 * d) / (2 * a);
			
				cout << "Has roots: x= " << real << " + " << imaginary << "i" << "  and  x= " << real << " - " << imaginary << "i" << endl;
			
		}
		cout << "Would you like to run agaian (y or n)? ";
		cin >> userResponse; cout << endl << endl;

	} while (userResponse == 'y');


	return 0;
}
double discriminant(double a, double b, double c) {
	return (b * b) - (4 * a * c);
}
