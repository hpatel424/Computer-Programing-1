
//Harry Patel
#include <iostream>
#include <string>
using namespace std;


struct Person {
	string firstName, middleName, lastName, gender;
	int age;
};

void capitalize(Person& arg);
void printPerson(Person arg);


int main(void) {
	int const size = 3;
	Person user[size];
	int age = 1;
	for (int i = 0; i < size; i++) {
		cout << "Enter Your first name: ";
		getline(cin, user[i].firstName);

		cout << "Enter age: ";
		cin >> user[i].age;
		cin.ignore();

		cout << "Enter Your Middle name: ";
		getline(cin, user[i].middleName);

		cout << "Enter Your last name: ";
		getline(cin, user[i].lastName);

		cout << "Enter Your gender: ";
		getline(cin, user[i].gender);
		cout << endl;
		
	}
	for (int i = 0; i < size; i++) {
		capitalize(user[i]);
		printPerson(user[i]);
	}
	



	system("pause");
	return 0;
}
void capitalize(Person &arg) {
	// Because here we are just using a paticular memory slot to replace the value.

		arg.firstName[0] = toupper(arg.firstName[0]);
		arg.middleName[0] = toupper(arg.middleName[0]);
		arg.lastName[0] = toupper(arg.lastName[0]);
	
}
void printPerson(Person arg) {
	// Here we are using the actual value to display.
	cout << arg.firstName << "\t\t " << arg.middleName << "\t\t " << arg.lastName << endl;
	
}