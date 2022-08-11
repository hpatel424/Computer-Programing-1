

//Harry Patel

#include<iostream>

using namespace std;


struct Function {
	double a, b, c;

	void displayAll(void);
	double yValue(double x);
};

int main() {

	Function myFunction1, myFunction2 = {4,3,2};
	myFunction1.a = -2.0;
	myFunction1.b = 0.0;
	myFunction1.c = -3.0;
	double xValue;

	cout << "Enter x : ";
	cin >> xValue;

	myFunction1.displayAll();

	myFunction1.yValue(xValue);

	myFunction2.displayAll();

	system("pause");
	return 0;
}
void Function::displayAll(void) {
	if (b == 0) {
		cout << "f(x) = ax^2 + c" << endl;
	}
	else {
		cout << "f(x) = ax^2 + bx + c" << endl;
	}

	//cout << "f(x) = " << yValue() << endl;
}
double Function::yValue(double x){
	double y;
	if (b == 0)
		return (a * x * x) + c;
	else 
		return (a * x * x) + (b * x) + c;
}