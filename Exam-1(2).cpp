

//Harry Patel
//Exam 1 Part-3 Number 2

#include <iostream>
#include <ctime>
#include<cstdlib>
#include <string>
using namespace std;

int toss();

int main() {
	srand(time(NULL));

	char userResponse = 'y';
	cout << "Flip a coin game " << endl;

	int heads = 0, tails = 0;

	do {
		int flip = toss();

			if (flip == 0) {
				heads = heads + 1;
				cout << "Result: Heads" << endl;

			}
			else if (flip == 1) {
				tails = tails + 1;
				cout << "Result: Tails" << endl;
			}
		
			cout << "Total Heads = " << heads << endl;
		
			cout << "Total Tails = " << tails << endl;

		//prompt user to play again
		cout << "Would you like to flip again? ";
		cin >> userResponse;

	} while (userResponse == 'y');


	return 0;
}
int toss() {
	return rand() % 2;
}