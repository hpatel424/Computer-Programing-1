
//Harry Patel

#include <iostream>
#include<vector>


using namespace std;

class Dog {
private:
	string name, size;
	int ID;
	double hours;
public:

	Dog(string name = "Tom", string size = "small", int ID = 11, double hours = 1.5);

	string getName(void);
	void setName(string newA);

	string getSize(void);
	void setSize(string newB);

	int getID(void);
	void setID(int newC);

	double gethours(void);
	void sethours(double newColor);

	void print(void);
	double charge(void);

};


int main() {

	vector<Dog> items(3);

	items[0].setName("x");
	items[0].setSize("small");
	items[0].setID(888);
	items[0].sethours(8.0);

	items[1].setName("y");
	items[1].setSize("medium");
	items[1].setID(999);
	items[1].sethours(4.5);

	items[2].setName("z");
	items[2].setSize("large");
	items[2].setID(777);
	items[2].sethours(5.6);






	for (int i = 0; i < items.size(); i++) {
		items[i].print();
		cout << endl;

	}


	system("pause");
	return 0;
}

Dog::Dog(string name, string size, int ID, double hours) {
	setName(name);
	setSize(size);
	setID(ID);
	sethours(hours);
}

string Dog::getName(void) {
	return name;
}
void Dog::setName(string newA) {
	name = newA;
}

string Dog::getSize(void) {
	return size;
}
void Dog::setSize(string newB) {
	if (newB == "small" || newB == "medium" || newB == "large") {
		size = newB;
	}
	else {
		size = "N/A";
	}
}

int Dog::getID(void) {
	return ID;
}
void Dog::setID(int newC) {
	ID = newC;
}

double Dog::gethours(void) {
	return hours;
}
void Dog::sethours(double newColor) {
	if (newColor < 0) {
		hours = 0;
	}
	else {
		hours = newColor;
	}
}

void Dog::print(void) {
	string name = getName();
	string Size = getSize();
	int I = getID();
	double H = gethours();

	cout << "Name: " << name << endl;
	cout << "Size: " << Size << endl;
	cout << "ID: " << I << endl;
	cout << "Hours: " << H << endl;
	cout << "Charges $" << charge() << endl;

}
double Dog::charge(void) {

	string Size = getSize();
	double H = gethours();

	if (Size == "large") {
		return 1.50 * H;
	}
	else if (Size == "medium") {
		return 0.75 * H;
	}
	else if (Size == "small") {
		return 0.45 * H;
	}
}