
//Harry Patel

#include <iostream>

using namespace std;

double average(int a[], int size);


int main() {
	
	cout << "Calculates the average of 3 exam scores " << endl;
	
	const int size = 3;
	int testScores[size];
	char response;

	do {
		
		for (int i = 0; i < size; i++) {
			cout << "Enter test score " << i + 1 << ": ";
			cin >> testScores[i];
		}
		
		cout << "Average = " << average(testScores, size) << endl;


		cout << "play again?";
		cin >> response;
	} while (response == 'y');

	return 0;
}
double average(int a[], int size) {
	double sum = 0.0;
	for (int i = 0; i < size; i++) {
		sum = sum + a[i];
	}
	return sum / size;
}
