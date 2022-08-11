

//Harry Patel
//Exam1 Part3 Number-1

#include <iostream>

using namespace std;

double examAvg(int t1, int t2, int t3);

int main() {

	char userResponse = 'y';

	cout << "Calculates and returns the average of 3 test scores " << endl;

	do {

		int score1, score2, score3;
		cout << "Enter the test score 1: ";
		cin >> score1;
		cout << "Enter the test score 2: ";
		cin >> score2;
		cout << "Enter the test score 3: ";
		cin >> score3;
		int a = examAvg(score1, score2, score3);
		if (score1 && score2 && score3 >= 0 && score1 && score2 && score3 <= 100) {
			cout << "Average = " << a << endl;
		}
		else {
			cout << "Incorrect data" << endl;
		}
		if (a >= 90 && a <= 100) {
			cout << "Grade = A" << endl;
		}
		else if (a >= 80 && a <= 89) {
			cout << "Grade = B" << endl;
		}
		else if (a >= 70 && a <= 79) {
			cout << "Grade = C" << endl;
		}
		else if (a >= 60 && a <= 69) {
			cout << "Grade = D" << endl;
		}
		else
			cout << "Grade = F" << endl;

		//prompt user to run again
		cout << "Would you like to play again? ";
		cin >> userResponse;

	} while (userResponse == 'y');


	return 0;
}
double examAvg(int t1, int t2, int t3) {
	return (t1 + t2 + t3) / 3;
}
