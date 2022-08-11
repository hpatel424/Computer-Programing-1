// Harry Patel
//Lab6d-Magic-8

#include <iostream>
#include <string>
#include <cstdlib>
#include<ctime>
using namespace std;


int main() {
	srand(time(0));


	cout << "Magic 8-Ball" << endl;
	// A random sentence generator.

	string magic8Answers[20] = { "It is certain.",
		"It is decidedly so",
		"Without a doubt",
		"Yes - definitely.",
		"You may rely on it.",
		"As I see it, yes.",
		"Most likely.",
		"Outlook good.",
		"Yes.",
		"Signs point to yes.",
		"Reply hazy, try again.",
		"Ask again later.",
		"Better not tell you now.",
		"Cannot predict now.",
		"Concentrate and ask again.",
		"Don't count on it.",
		"My reply is no.",
		"My sources say no.",
		"Outlook not so good.",
		"Very doubtful." };

	char response;
	do {
		cout << "Ask Question (y or n)? " << endl;
		cin >> response;
		cout << "***SHAKE***" << endl;
		cout << "\n" << magic8Answers[rand() % 20] << endl;

	} while (response == 'y');

	return(0);
}

