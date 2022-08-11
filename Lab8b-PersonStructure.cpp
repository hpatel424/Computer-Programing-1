
//Harry Patel

#include <iostream>
#include<string>
using namespace std;

struct Person {
	string firstName, middleName, lastName, gender;
	int age;

};

int main() {
	Person user;
	cout << "Enter Your first name: ";
	getline(cin, user.firstName);

	cout << "Enter age: ";
	cin >> user.age;
	cin.ignore();

	cout << "Enter Your Middle name: ";
	getline(cin, user.middleName);

	cout << "Enter Your last name: ";
	getline(cin, user.lastName);

	cout << "Enter Your gender: ";
	getline(cin, user.gender);


	cout << "\n\nFirst name: " << user.firstName << endl;
	cout << "age : " << user.age << endl;
	cout << "Middle name: " << user.middleName << endl;
	cout << "Last name: " << user.lastName << endl;
	cout << "Gender: " << user.gender << endl;

	system("pause");
	return 0;
}
