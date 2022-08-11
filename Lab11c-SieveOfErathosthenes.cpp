

//Harry Patel

#include <iostream>
#include  <iomanip>

using namespace std;

int main() {

	const int size = 1000;
	int array[size];
	int count = 0;

	for (int i = 0; i < size; i++) {
		array[i] = 1;
	}

	for (int i = 1; i < size; i++) {
		if (array[i] == 1 && i != 1) {
			for (int j = i; j < size; j++) {
				if (j % i == 0 && j != i)  
					array[j] = 0;
				
			}
		}
	}


	for (int i = 2; i < size; i++) {
		if (array[i] == 1) {
			cout << i << endl;
		}
	}

	system("pause");
	return 0;
}
