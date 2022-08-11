
//Harry Patel
//Quadratic

#include <iostream>
#include <cmath>
#include<iomanip> 

using namespace std;


double discriminant(double, double, double);


int main() {
	//  ax^2 + bx + c = 0
	cout << "Quadratic Functions: determines the number and type of roots " << endl;
	double a, b, c;
	cout <<"\nEnter coefficients " << endl;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c;

	cout << fixed << setprecision(2);

	double d = discriminant(a,b,c);
	double root1,root2;
	

	cout << "\nDiscriminant value = " << d << endl;
	
	if (d > 0) {
		root1 = (-b + sqrt(double(b * b) - (4 * a * c))) / (2 * a);
		root2= (-b - sqrt(double(b * b) - (4 * a * c))) / (2 * a);
		cout << "Two Real Roots\n" << "Root1=  " << root1 << endl << "Root2=  " << root2 << endl;
	}
	else if (d == 0) {
		root1 = -b / (2 * a);
		cout << "One Real Root\n" << "Root1=  " << root1 << endl;
	}
	else {
		cout << "Two Complex Roots\n" << "no real solutions\n\n";
	}


	system("pause");
	return 0;
}
double discriminant(double a, double b, double c) {
	return (b * b) - (4 * a * c);	
}
