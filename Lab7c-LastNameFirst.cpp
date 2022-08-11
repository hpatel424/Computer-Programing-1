
//Harry Patel

#include <iostream>
#include <string>

using namespace std;

string lastNameFirst(string name[]);

int main() {
	string userName[3];
	cout << "Enter First Name: ";
	getline(cin, userName[0]);
	cout << "Enter Middle Name: ";
	getline(cin, userName[1]);
	cout << "Enter last Name: ";
	getline(cin, userName[2]);

	cout << "\n\nFirst Name: " << userName[0] << endl;
	cout << "Middle Name: " << userName[1] << endl;
	cout << "Last Name: " << userName[2] << endl;


	cout << "Your name is: " << lastNameFirst(userName) << endl;
	
	system("pause");
	return 0;
}

string lastNameFirst(string name[]) {
	name[0][0] = toupper(name[0][0]);
	name[2][0] = toupper(name[2][0]);
	name[1][0] = toupper(name[1][0]);
	
		int  i= name[0].find(" ", 0);
		if (i > 0) {
			name[0][i + 1] = toupper(name[0][i + 1]);
		}

	return name[2] + ", " + name[0] + " " + name[1][0] + ".";
}
