
//Harry Patel

#include <iostream>
#include <ctime>
#include<cstdlib>

using namespace std;

int dieRoll();

int main() {
	srand(time(NULL));
	char userResponse = 'y';

	do {
		int roll1 = dieRoll();
		int roll2 = dieRoll();
		cout << "Rolled " << roll1 << " and " << roll2 << endl;

		int total = roll1 + roll2;
		cout << "Total: " << total << endl;

		if (total == 2 && roll1==roll2) {
			cout << "Snake eyes!" << endl << "Doubles" << endl;
		}
		else if (roll1 == roll2) {
			cout << "Doubles" << endl;
		}

		cout << "Play again? ";
		cin >> userResponse;

	} while (userResponse == 'y');

	return 0;
}
int dieRoll() {
	return rand() % 6 + 1;
}