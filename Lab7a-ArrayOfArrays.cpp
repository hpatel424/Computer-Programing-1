

//Harry Patel


#include <iostream>
#include<string>
using namespace std;

int main() {

	char userResponse = 'y';
	string userString;

	//Part 1
	cout << "Enter a string: ";
	getline(cin, userString);

	for (int i = 0; i < userString.size(); i++) {
		cout << userString[i] << "-";
	}
	cout << endl;
	for (int i = userString.size() - 1; i >= 0; i--) {
		cout << userString[i] << "-";
	}
	cout << endl;

	//Part 2
	const int n = 5;
	string userStrings[n];

	for (int i = 0; i < n; i++) {
		cout << "enter a string: ";
		getline(cin, userStrings[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < userStrings[i].size(); j++)
			cout << userStrings[i][j] << "*";
		cout << endl;
	}
	system("pause");
	return 0;
}
