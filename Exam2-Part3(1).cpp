
//Harry Patel
#include <iostream>
#include <string>
using namespace std;

int numberOfWords(string x);

int main(void) {
	char userResponse = 'y';

	do {
		string userString = "";
		cout << "\nPlease enter a sentence: ";
		getline(cin, userString);

		cout << "Your string: \"" << userString << "\"" << endl;
		cout << "has " << numberOfWords(userString) << " words." << endl;

		cout << "\nWould you like to run again? (y/n): ";
		cin >> userResponse;
		cin.ignore();

	} while (userResponse == 'y');

	return 0;
}

int numberOfWords(string arg) {

	if (arg == "") return 0;

	int count = 0;
	for (int i = 0; i <= arg.size(); i++) {
		if (arg[i] == ' ')
			count++;
	}
	return count + 1;
}