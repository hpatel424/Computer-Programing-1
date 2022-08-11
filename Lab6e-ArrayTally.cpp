
//Harry Patel
//lab6e

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int dice1();
int dice2();
void diceTotal(int dice[], int diceCount[], int rand, int size);
void display(int dice[], int diceCount[], int size);

int main() {
	srand(time(0));
	cout << "Array Tally" << endl;
	char response;

	const int size = 11;
	int randomNumbers[size];
	int dice[size] = { 2,3,4,5,6,7,8,9,10,11,12 };
	int sum;
	do {
		srand(time(0));
		int diceCount[size] = { 0,0,0,0,0,0,0,0,0,0,0 };
		for (int i = 0; i < 100000; i++) {
			 sum= dice1() + dice2();
			
			diceTotal(dice, diceCount, sum, size);
		}
		
		display(dice, diceCount, size);
		
	
		cout << "play again?";
		cin >> response;
	} while (response == 'y');

	return 0;
}
int dice1() {
	return rand() % 6 + 1;
}
int dice2() {
	return rand() % 6 + 1;
}
void diceTotal(int dice[], int diceCount[], int rand, int size) {
	
	for (int i = 0; i < size ; i++) {
		if(dice[i]==rand){
			diceCount[i] = diceCount[i] + 1;
			
		}
	}
}
void display(int dice[], int diceCount[], int size) {
	for (int i = 0; i < size; i++) {

		cout << "\n"<<diceCount[i]<<" = number of times sum of  " << dice[i] <<"  comes up" << endl;
		cout << "The chances of getting sum of  " << dice[i] << "  are " << (diceCount[i] / 100000.0) * 100.0 << "% \n" << endl;
	}
}