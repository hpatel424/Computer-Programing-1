
//Harry Patel
//lab 6a

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int outputArray(int arr[], int size);


int main() {
	const int size = 10;
	int myArray[size];
	srand(time(NULL));
	
	char response;

	do {
		for (int i = 0; i < size; i++) {
			myArray[i] = 0;
			cout << "Element " << i << ": " << myArray[i] << endl;
		}
		cout << endl;
		
		for (int i = 0; i < size; i++) {
			myArray[i] = rand();
			cout << "Element " << i << ": " << myArray[i] << endl;
		}
		cout << endl;
		
		for (int i = 0; i < size; i++) {
			myArray[i] = 2 * i + 2;
			cout << "Element " << i << ": " << myArray[i] << endl;
		}
		cout << endl;
		
		cout << "The sum: " << outputArray(myArray, size) << endl << endl;
		
		for (int i = size-1; i >= 0; i--) {
			cout << "Element " << i << ": " << myArray[i] << endl;
		}
		cout << endl;


		cout << "play again?";
		cin >> response;
	} while (response == 'y');


	
	return 0;
}
int outputArray(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + arr[i];
	}
	return sum;
}