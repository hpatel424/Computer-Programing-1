

//Harry Patel
//Lab 7b

#include <iostream>

using namespace std;

int main() {

	int const size = 12;

	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= size; j++) {
			cout << "\t" << j * i;
		}
		cout << endl;
	}



	system("Pause");
	return 0;
}
