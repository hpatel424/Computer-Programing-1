
//Harry Patel

#include <iostream>

using namespace std;

struct Complex {
	//a + bi
	double a, b;

	Complex addComplex(Complex arg);
	Complex subtractComplex(Complex arg);
	Complex multiplyComplex(Complex arg);
	Complex divideComplex(Complex arg);
	double magnitude(void);
	void print(void);
};

int main() {

	Complex z, y, added, subtracted, multiplied, divided;
	z.a = 3;
	z.b = -7;

	y.a = 5;
	y.b = 0;

	added = z.addComplex(y);
	subtracted = z.subtractComplex(y);
	multiplied = z.multiplyComplex(y);
	divided = z.divideComplex(y);
	
	cout << "#1: ";
	z.print();
	cout << "\n#2: ";
	y.print();
	cout << "\nAdded: ";
	added.print();
	cout << "\nSubtracted: ";
	subtracted.print();
	cout << "\nMultiplied: "; 
	multiplied.print();
	cout << "\nDivided: ";
	divided.print();

	z.magnitude();
	

	system("pause");
	return 0;
}
Complex Complex::addComplex(Complex arg) {
	double realPart = a + arg.a;
	double imgPart = b + arg.b;
	Complex result = { realPart,imgPart };
	return result;
}
Complex Complex::subtractComplex(Complex arg) {
	double realPart = a - arg.a;
	double imgPart = b - arg.b;
	Complex result = { realPart,imgPart };
	return result;
}
Complex Complex::multiplyComplex(Complex arg) {
	double realPart = a * arg.a - b * arg.b;
	double imgPart = a * arg.b + b + arg.a;
	Complex result = { realPart,imgPart };
	return result;
}
Complex Complex:: divideComplex(Complex arg) {
	double realPart = (a * arg.a + b * arg.b) / (arg.a * arg.a + arg.b * arg.b);
	double imgPart = (b * arg.a + a * arg.b) / (arg.a * arg.a + arg.b * arg.b);
	Complex result = { realPart,imgPart };
	return result;
}
double Complex::magnitude(void) {
	return sqrt((a * a) + (b * b));
}

void Complex::print(void) {
	if (b >= 0)
		cout << a << " + " << b << "i" << endl;
	else
		cout << a << " - " << -1 * b << "i" << endl;
	
	cout << "Magnitude: " << magnitude() << "unites" << endl;
}