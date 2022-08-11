

//Harry Patel
#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Product {
	string name, description;
	double cost;
	int quantity;

	void displayProduct(void);
	double inventoryValue(void);
	double retailPrice(double markUp);
};

int main(void) {

	vector<Product> items(5);
	items[0].name = "Shirts";
	items[0].cost = 20;
	items[0].quantity = 30;
	items[0].description = "To be worn";

	items[1].name = "Chocolate";
	items[1].cost = 5;
	items[1].quantity = 50;
	items[1].description = "To be eaten by anyone";

	items[2].name = "Batteries";
	items[2].cost = 10;
	items[2].quantity = 18;
	items[2].description = "Giving certain items electrical life";

	items[3].name = "Thumbtacks";
	items[3].cost = 0.30;
	items[3].quantity = 29;
	items[3].description = "For placing things on boards";

	items[4].name = "Measuring Tapes";
	items[4].cost = 7;
	items[4].quantity = 3;
	items[4].description = "For measuring the length of items";

	for (int i = 0; i < items.size(); i++) {
		items[i].displayProduct();
		cout << "\t" << items[i].name << "'s value is $" << items[i].inventoryValue() << endl;
		cout << "\t" << items[i].name << "'s retail Price is $" << items[i].retailPrice(0.45) << endl;
		cout << "\t" << endl;
	}

	system("pause");
	return 0;
}

//Function Implementation
void Product::displayProduct(void) {
	cout << "Product: " << name << endl;
	cout << "\tWholesale Cost: $" << cost << endl;
	cout << "\tQuantity: " << quantity << endl;
	cout << "\tDesription: " << description << endl;
}
double Product::inventoryValue(void) {
	return cost * quantity;
}
double Product::retailPrice(double markUp) {
	return cost + markUp * cost;
}