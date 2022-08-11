
//Harry Patel

#include <iostream>

using namespace std;

bool checkRange(int x);


int main() {
	int x;
	cout << "This app checks your value " << endl;
	cout << "Enter an integer x-value: ";
	cin >> x;

	//cout << "Result: " << checkRange(x) << endl;
	if (checkRange(x) == true) {
		cout << "Your number is in the range" << endl;
	}
	else {
		cout << "Your number is not in the range" << endl;
	}
	system("pause");
	return 0;
}
bool checkRange(int x) {
	if (x > -10 && x <= 10)
		return true;
	else
		return false;
}
