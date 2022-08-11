

//Harry Patel
//lab7g-Roll 5 times

#include <iostream>
#include <ctime>
#include<cstdlib>

using namespace std;

int dieRoll(void);
int snakeEye(int a[], int size);
int numberOfTimes7Or11(int a[], int size);

int main() {
	cout << "My awesome game!\n" << endl;

	char userResponse = 'y';
	srand(time(0));
	const int size = 5;
	int rolls[size];
	int money = 0, total = 0;


	do {
		cout << "How much do you want to bet? (in dollars, no cents). $";
		cin >> money;

		for (int i = 0; i < 5; i++) {
			rolls[i] = dieRoll() + dieRoll();
			cout << "Rolls " << i + 1 << " = " << rolls[i] << endl;

		}
		cout << "\n7 OR 11? " << numberOfTimes7Or11(rolls, size) << endl;
		cout << "Snake Eyes " << snakeEye(rolls, size) << endl;

		if (snakeEye(rolls, size) < 2) {
			if (numberOfTimes7Or11(rolls, size) > 0) {

				cout << "In this round you Won $" << money * 2 << endl;
				total += money * 2;
			}
			else {
				cout << "You are a big Looser!" << endl;
				total -= money;
			}
		}
		else {
			cout << "You are a big Looser!" << endl;
			total -= money;
		}

		cout << "\nYour Total Balance is $" << total << endl;

		//prompt user to play again
		cout << "Would you like to play again? ";
		cin >> userResponse;
		cout << endl;
	} while (userResponse == 'y');

	return 0;
}
int dieRoll(void) {
	return rand() % 6 + 1;
}
int numberOfTimes7Or11(int a[], int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] == 7 || a[i] == 11) {
			count++;
		}
	}
	return count;
}

int snakeEye(int a[], int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] == 2) {
			count++;
		}
	}
	return count;
}