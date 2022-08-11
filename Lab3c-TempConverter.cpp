
/*Harry Patel
08/26/2019
Lab3c: Temperature Converter
*/

#include <iostream>

using namespace std;


double celsius(double);

int main() {

	cout << "This app will convert temperature from degrees Fahrenheit to degrees Celsius \n\n";
	
	double f;
	cout << "Enter the temperature in Fahrenhit: ";
	cin >> f;

	cout <<"\n\n"<< f << "\370 Fahrenheit is equal to " << celsius(f) <<"\370 Celsius"<< endl;

	system("pause");
	return 0;
}
double celsius(double fahrenheit) {
	return (fahrenheit - 32) / 1.8;
}