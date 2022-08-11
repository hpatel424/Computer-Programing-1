

//Harry Patel
//8/19/2019
//Average Calculator (Lab2a)

#include <iostream>

using namespace std;

int main(void) {

	cout << "3 integer Average calculator" << endl;
	int x;
	cout << "\n\nEnter your 1st integer ";
	cin >> x;
	int y;
	cout << "Enter your 2nd integer ";
	cin >> y;
	int z;
	cout << "Enter your 3rd integer ";
	cin >> z;

	double answer = (x + y + z) / 3.0;
	cout << "\nAverage: ( " << x << " + " << y << " + " << z << " )/3 = " << answer << endl;
	


	system("pause");
	return 0;
}