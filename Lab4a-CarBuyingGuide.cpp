
//Harry Patel

#include <iostream>

using namespace std;

int main() {

	cout << "Car Buying Guide for the Average Male" << endl;

	int age;
	cout << "\nEnter your age ";
	cin >> age;

	if (age < 40)
	{
		cout << "Life stage 1" << endl;
		if (age < 25) {
			cout << "Buy a Ford focus" << endl;
		}
		else {
			cout << "Buy a minivan" << endl;
		}
	}
	else {
		cout << "Life stage 2" << endl;

		if (age < 55)
		{
			cout << "Buy a corvette" << endl;
		}
		else {
			cout << "Buy a lincon" << endl;
		}
	}

	system("pause");
	return 0;
}