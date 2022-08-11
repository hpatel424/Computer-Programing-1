
//Harry Patel

#include <iostream>
#include<ctime>
#include <cstdlib>

using namespace std;

int maxInteger(int a[], int size);
int minInteger(int a[], int size);


int main() {
	srand(time(0));
	const int size = 100;
	int randomNumbers[size];
	
	char response;

	cout << "Display the Maximum and Minimum " << endl;

	do {
		//cout << endl;
		for (int i = 0; i < size; i++) {
			randomNumbers[i] = rand();
			cout << "Elements : " << i << "\t" << randomNumbers[i] << endl;
		}
		
		cout << "Minimum number = "<< minInteger(randomNumbers, size) << endl;
		cout <<"Maximum number = "<< maxInteger(randomNumbers, size) << endl;

		cout << "play again?";
		cin >> response;
	} while (response == 'y');

	return 0;
}
int maxInteger(int a[], int size) {
	int max = a[0];
	for (int i = 0; i < size; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}
int minInteger(int a[], int size) {
	int min = a[0];
	for (int i = 0; i < size; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}

