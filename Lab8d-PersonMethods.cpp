
//Harry Patel

#include <iostream>
#include <string>

using namespace std;

struct Person {
	string firstName, middleName, lastName, gender;
	int age;

	void print(void);
	void uppercase(void);
};


int main() {
	Person user;
	const int size = 3;
	Person people[size];

	for (int i = 0; i < size; i++) {
		cout << "Enter Your first name: ";
		getline(cin, people[i].firstName);

		cout << "Enter age: ";
		cin >> people[i].age;
		cin.ignore();

		cout << "Enter Your Middle name: ";
		getline(cin, people[i].middleName);

		cout << "Enter Your last name: ";
		getline(cin, people[i].lastName);

		cout << "Enter Your gender: ";
		getline(cin, people[i].gender);
		cout << endl;


	}
	for (int i = 0; i < size; i++) {
		people[i].uppercase();
		people[i].print();
	}

	system("pause");
	return 0;
}
void Person::print(void) {
	cout << "\nFirst name: " << firstName << endl;
	cout << "age : " << age << endl;
	cout << "Middle name: " << middleName << endl;
	cout << "Last name: " << lastName << endl;
	cout << "Gender: " << gender << endl;
}
void Person::uppercase(void) {
	firstName[0] = toupper(firstName[0]);
	middleName[0] = toupper(middleName[0]);
	lastName[0] = toupper(lastName[0]);
	gender[0] = toupper(gender[0]);
}