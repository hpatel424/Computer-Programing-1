

//Harry Patel

#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int multiply(int x, int y);
int randomx(void);
int randomy(void);


int main() {
	cout << "Multipilcation Quiz Time\n" << endl;
	char response = 'y';
	do {
		srand(time(0));
		int z, score = 0;
		int const size = 5;
		int a[size];

		for (int i = 0; i < size; i++) {
			int m = randomx();
			int n = randomy();
			a[i] = multiply(m, n);
			

			cout << i + 1 << ") " << m << " * " << n << " = ";
			cin >> z;
			if (z == a[i]) {
				cout << "You got it!!!\n" << endl;
				score = score + 1;
			}
			else {
				cout << "opps:(\n" << endl;
			}
		}
		cout << endl << "Results: " << endl;
		for (int i = 0; i < size; i++) {
			cout << i + 1 << ") " << a[i] << endl;
		}

		if (score == 5)
			cout << "\nYay! Perfect Score" << endl;
		else if (score <= 4 && score >= 1)
			cout << "\nYour score is: " << score << endl;
		else if (score == 0)
			cout << "\nBetter luck next time:(" << endl;


		cout << "\nWould you like to take the quiz again (y or n)?";
		cin >> response;
	} while (response == 'y');

	system("pause");
	return 0;
}
int multiply(int x, int y) {
	return x * y;
}
int randomx(void) {
	int x = rand() % 11;
	return x;
}
int randomy(void) {
	int y = rand() % 11;
		return y;
}
