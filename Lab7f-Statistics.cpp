
//Harry Patel

#include <iostream>
#include <ctime>
#include<cstdlib>


using namespace std;

int randomNumber(void);
int range(int a[], int size);
double average(int a[], int size);
double  standardDeviation(int a[], int size,double avg);

int main() {
	srand(time(NULL));
	const int size = 20;
	int sum[size];

	for (int i = 0; i < size; i++) {
		sum[i] = randomNumber() + randomNumber();
		cout << i + 1 << " = " << sum[i]<<endl;
		//cout << sum[i] << ", ";
	}
	double avg = average(sum, size);
	cout <<"\nRange = "<< range(sum, size) << endl;
	cout << "Average = " << avg << endl;
	cout << "Standard Deviation = " << standardDeviation(sum, size,avg) << endl;

	system("pause");
	return 0;
}
int randomNumber(void) {
	return rand() % 6 + 1;
}
int range(int a[], int size) {
	int max = a[0];
	for (int i = 0; i < size; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	int min = a[0];
	for (int i = 0; i < size; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return max - min;
}
double average(int a[], int size) {
	double sum = 0.0;
	for (int i = 0; i < size; i++) {
		sum = sum + a[i];
	}
	return sum / size;
}
double  standardDeviation(int a[], int size,double avg) {
	double sum = 0.0, sd = 0.0;
	for (int i = 0; i < size; i++) {
		sd += (a[i] - avg) * (a[i] - avg);
	}
	sd = sd / (size - 1);
	 return sqrt(sd);
}