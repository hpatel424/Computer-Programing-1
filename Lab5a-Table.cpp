

//Harry Patel
//Table for y=x^3
#include <iostream>

using namespace std;

int y(int);

int main() {

	cout << "Table for y=x^3" << endl;


	int m, n;
	cout << "\nWhere you want the loop to start: ";
	cin >> m;
	cout << "\nWhere you want the loop to end: ";
	cin >> n;
	cout << "\n\n\tx\t|\ty\t\n\t-------------------";
	int x = m;
	while (x <= n) {
		cout << "\n\t" << x << "\t|\t" << y(x) << endl;
		x = x + 1;
	}


	system("pause");
	return 0;
}
int y(int x) {
	return x * x * x;
}