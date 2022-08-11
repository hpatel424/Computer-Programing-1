
/* Harry Patel
   8/19/2019
   Lab 2b: Circle Calculations
*/



#include <iostream>


using namespace std;

const double PI = 3.14159;

int main(void)
{
	double r;
	cout << "Circle Calculations\n\n" << endl;
	cout << "Please Enter the Radius of the Circle :  ";
	cin >> r; 

	double c = 2 * PI * r;
	cout << "\nCircumference: P = 2 * " << PI << " * " << r << " = " << c << " units\n\n"; 

	double a = PI * r * r;
	
	cout << "Area of the circle = " << a << " unit squared" << endl;

	
	system("\npause");
	return 0;
}