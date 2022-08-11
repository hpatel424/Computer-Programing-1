
//Harry Patel

#include <iostream>

using namespace std;

double bmi(double, double, double, double);

int main() {

	cout << "Body Mass Index App" << endl;

	
	double w, h, f, i;
	cout << "\nEnter your weight in pounds (lb): ";
	cin >> w;
	cout << "\nEnter your height \nEnter feet: ";
	cin >> f; 
	cout << "Enter inches: "; 
	cin >> i;
	h = f, i;
	cout << "\nYour BMI is " << bmi(w, h, f, i) <<" lb/in^2"<< endl;
	
	if (bmi(w, h, f, i) < 18.5) {
		cout << "Underweight" << endl;
	}
	else if (bmi(w, h, f, i) >= 18.5 && bmi(w, h, f, i) <= 24.9) {
		cout << "Normal Weight" << endl;
	}
	else if (bmi(w, h, f, i) >= 25 && bmi(w, h, f, i) <= 29.9) {
		cout << "Overweight" << endl;
	}
	else if(bmi(w, h, f, i) >= 30) {
		cout << "Obesity" << endl << endl;
	}

	system("pause");
	return 0;
}
double bmi(double weight, double height,double feet, double inches) {
	height = (feet * 12.00) + inches;
	return (703 * weight) / (height * height);
}