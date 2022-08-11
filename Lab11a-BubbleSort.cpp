
//Harry Patel

#include <iostream>
#include <ctime>
#include<cstdlib>

using namespace std;

void bubble(int array[], int size);
double avg(int array[], int size);

int main() {
	srand(time(0));
	int const size = 10;
	int array[size];

	cout << "Sorted Array is: " << endl;
	bubble(array, size);
	cout <<"Average = "<< avg(array, size) << endl;

	system("pause");
	return 0;
}
void bubble(int array[], int size) {
	int hold, swap = 0;
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 51;
		cout << array[i] << endl;

	}
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				hold = array[j];
				array[j] = array[j + 1];
				array[j + 1] = hold;
				swap = swap + 1;
			}
		}
	}
	cout << "Sorted Array is: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << endl;
	}
	cout << "Number of Swap: " << swap << endl;
}
double avg(int array[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++){
		int sum = 0;
		sum=array[i]+array[i+1];
	}
	return sum / 50;
}
	