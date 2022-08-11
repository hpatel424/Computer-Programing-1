
//Harry Patel

#include <iostream>
#include <vector>

using namespace std;

struct Line {
	//y = mx + b
	double m, b;
	//constructor
	Line(double slope = 0, double yint = 0);

	//methods
	void print(void);
	double evaluate(double x);
};

int main() {


	Line y(5, 7);
	cout << "Evaluate x = 5 y = " << y.evaluate(5) << endl;
	y.print();
	vector<Line> lineVec(5);
	lineVec[0].m = 3;
	lineVec[0].b = -2;
	lineVec[1].m = 6;
	lineVec[1].b = 9;
	lineVec[2].m = -2;
	lineVec[2].b = 3.2;
	lineVec[3].m = -2.3;
	lineVec[3].b = 7;
	lineVec[4].m = -8.0;
	lineVec[4].b = -2;

	for (int i = 0; i < lineVec.size(); i++) {
		lineVec[i].print();
	}

	system("pause");
	return 0;
}
//NO Defaults in implemantation 
Line::Line(double slope, double yint) {
	m = slope;
	b = yint;
}

void Line::print(void) {
	if (b < 0)
		cout << "y = " << m << " x - " << -1 * b << endl;
	else
		cout << "y = " << m << " x + " << b << endl;
}
double Line::evaluate(double x) {
	return m * x + b;
}