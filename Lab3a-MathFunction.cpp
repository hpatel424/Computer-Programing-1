
//Harry Patel

#include <iostream>

using namespace std;

double f(double);




int main() {
	cout << "This is the f(x) = 2x+3 application \n\n" << endl;
	double x;
	cout << "Enter an x-value for Function ";
	cin >> x;
	cout << " \n\nResult : f(" << x << ") = 2(" << x << ") + 3 = " << f(x) << endl;
	system("pause");
	return 0;
}

double f(double x) {
	return 2 * x + 3;

}