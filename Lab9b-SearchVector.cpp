
//Harry Patel

#include <iostream>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;

int searchVector(vector<int> arg, int value);
void printVector(vector<int> arg);

int main() {
	srand(time(0));
	char response;
	int userInput;
	vector<int> randomInt;


	for (int i = 0; i < 15; i++) {
		randomInt.push_back(rand() % 99 + 1);
	}
	printVector(randomInt);


	do {
		//vector<int> randomInt;


		cout << "Enter a number to look for?: ";
		cin >> userInput;

		int index = searchVector(randomInt, userInput);
		if (index >= 0)
			cout << "Index: " << index << endl;
		else
			cout << "Index NOT found" << endl;

		cout << "Run again (y or n)?";
		cin >> response;
	} while (response == 'y');
	system("pause");
	return 0;
}
int searchVector(vector<int> arg, int value) {
	for (int i = 0; i < arg.size(); i++) {
		if (arg[i] == value)
			return i;
	}
	return -1;
}
void printVector(vector<int> arg) {
	for (int i = 0; i < arg.size(); i++) {
		cout << "Subscript " << i << " string: " << arg[i] << endl;
	}
}
