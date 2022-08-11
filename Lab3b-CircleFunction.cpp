
/* Harry Patel
   8/26/2019
   Lab 3b: Circle Functions
*/

#include <iostream>
using namespace std;

const double PI = 3.14159;

double area(double);
double circumference(double);



int main(void)
{
	double r;
	cout << "Circle Calculations\n\n" << endl;
	cout << "Please Enter the Radius of the Circle :  ";
	
	cin >> r;

	cout << "\nCircumference: P = 2 * " << PI << " * " << r << " = " << circumference (r) << " units\n\n";

	cout << "Area of the circle = " << area (r) << " unit squared\n" << endl;

	system("pause");
	return 0;
}

double area(double r) {
	return PI * r * r;
}
double circumference(double r) {
	return 2 * PI * r;
}