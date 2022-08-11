
//Harry Patel

#include <iostream>
#include <vector>
#include <string>
#include<cstdlib>
#include<ctime>

using namespace std;

void printStrings(vector<string> arg);
string randomString(vector<string> arg);

int main() {
	srand(time(0));
	char userResponse;
	string userString;
	vector<string> userStrings;

	do {

		cout << "Size: " << userStrings.size() << endl;
		cout << "Enter a string: ";
		getline(cin, userString);

		userStrings.push_back(userString);

		cout << "Do u want to add another string?";
		cin >> userResponse;
		cin.ignore();
	} while (userResponse == 'y');


	printStrings(userStrings);
	cout << "Random string: " << randomString(userStrings) << endl;

	system("pause");
	return 0;
}
void printStrings(vector<string> arg) {
	for (int i = 0; i < arg.size(); i++) {
		cout << "\nSubscript " << i << " string: " << arg[i] << endl;
	}
}
string randomString(vector<string> arg) {
	// How to choose a random string?
	//Ans: Choose a random STRING!!!
	string randomstring;
	randomstring = arg[rand() % arg.size()];
	// OR randomstring = arg.at(rand() % arg.size());

	return randomstring;
}


