

//Harry Patel

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string rot13(string arg);

int main() {

	string userString;
	char response;
	cout << "Enter message:" << endl;
	getline(cin, userString);

	cout << "Do you want to encrypt it or decode it (e or d)?";
	cin >> response;

	cout << endl << rot13(userString) << endl;
	


	system("pause");
	return 0;
}
string rot13(string arg) {
	string answer;

	for (int i = 0; i < arg.size(); i++) {

		if (int(arg[i]) > 65 && int(arg[i]) < 123) {

			if (int(arg[i]) > 65 && int(arg[i]) < 91) {
				if (int(arg[i]) < 78) {
					answer = answer + char(int(arg[i]) + 13);
				}
				else {
					answer = answer + char(int(arg[i]) - 13);
				}
			}

			if (int(arg[i]) > 96 && int(arg[i]) < 123) {
				if (int(arg[i]) < 110) {
					answer = answer + char(int(arg[i]) + 13);
				}
				else {
					answer = answer + char(int(arg[i]) - 13);
				}
			}
		}
		else {
			answer = answer + arg[i];
		}
		
	}
	return answer;
}