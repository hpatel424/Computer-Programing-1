
//Harry Patel
//Lottery 

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int money(vector<int> user, vector<int> win);

int main() {
	char response = 'y';
	srand(time(0));
	const int size = 5;
	int dollar = 0, matches;

	do {
		vector<int>winnningNumbers = { 4,0,7,9,2 };
		vector<int>userNumbers(size);


		cout << "Winning ticket " << endl;
		cout << " { ";
		for (int i = 0; i < size; i++) {
			cout << winnningNumbers[i] << " ";
		}

		cout << "}" << endl << "Your quick pick " << endl;
		cout << " { ";

		for (int i = 0; i < size; i++) {
			userNumbers[i] = rand() % 10;
			cout << userNumbers[i] << " ";
		}

		
		cout << "}" << endl;
		 
		matches = money(userNumbers, winnningNumbers);
		cout << "Number of matches: " << matches << endl;
		dollar = dollar + matches;

		if (matches >= 1)
			cout << "You have won $" << dollar << " lottery!!!" << endl;
		else {
			cout << "You lost" << endl;
			
		}


			cout << "play again?";
			cin >> response;
		} while (response == 'y');

		return 0;
}

int money(vector<int> user, vector<int> win) {
	int dollar = 0;

	for (int i = 0; i < user.size(); i++) {
		if (user[i] == win[i] || user[1] == win[i] || user[2] == win[i] || user[3] == win[i] || user[4] == win[i]) {
			dollar++;
		}
	}

	return dollar;
}

