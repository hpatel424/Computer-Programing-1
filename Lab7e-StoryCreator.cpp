
//Harry Patel

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(0));
	const char* artical1[] = { "The", "A", "One", "Some", "Any" };
	const char* artical2[] = { "the", "a", "one", "some", "any" };
	const char* noun[] = { "boy", "girl", "dog", "town",  "car" };
	const char* verb[] = { "drove", "jumped", "ran", "walked",  "skipped" };
	const char* preposition[] = { "to", "from", "over", "under", "on" };

	int sentences;
	cout << "How many sentences? ";
	cin >> sentences;
	for (int i = 0; i < sentences; i++) {

		cout << artical1[rand() % 5] << " " << noun[rand() % 5] << " " << verb[rand() % 5] << " " << preposition[rand() % 5] << " " << artical2[rand() % 5] << " " << noun[rand() % 5] << ".\n" << endl;
	}
	system("pause");
	return 0;
}
