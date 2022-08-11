
//Harry Patel

#include <iostream>

using namespace std;


int main() {
	const int size = 500;
	int side1, side2, hypotenuse = 1;

	for (int side1 = 1; side1 <= size; side1++){

		for (int side2 = 1; side2 <= size; side2++){

			for (int hypotenuse = 1; hypotenuse <= size; hypotenuse++){

				if ((side1 * side1) + (side2 * side2) == hypotenuse * hypotenuse && hypotenuse <= size && hypotenuse > 0){
				
					cout << "{" << side1 << " , " << side2 << " , " << hypotenuse << "}" << endl;
				}
			}
		}
	}

	system("pause");
	return 0;
}