

// Harry Patel
//lab 9e

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Point {
	double x, y;

	void dislplayPoint(void);
};

struct Triangle {
	Point a, b, c;

	void displayTrinagle(void);
	double sideLength(int side);
	bool isRight(void);
};

//regular c-type function
double length(Point pt1, Point pt2);

int main() {

	Point pt1 = { 0, 0 };
	Point pt2 = { 0, 4 };
	Point pt3 = { 3, 0 };

	Point pt4 = { 4,5 };
	Point pt5 = { 1,6 };
	Point pt6 = { 5,-1 };

	Triangle myTriangle = { pt1, pt2, pt3 };
	Triangle yourTriangle = { pt4, pt5, pt6 };


	myTriangle.displayTrinagle();
	cout << "My Triangle : " << myTriangle.isRight() << endl;
	yourTriangle.displayTrinagle();
	cout << "Your Triangle: " << yourTriangle.isRight() << endl << endl;

	cout << "Distance: " << length(pt1, pt3) << endl;
	cout << "Distance: " << myTriangle.sideLength(2) << endl;


	for (int i = 1; i < 4; i++) {
		cout << myTriangle.sideLength(i) << endl;
	}
	for (int i = 1; i < 4; i++) {
		cout << yourTriangle.sideLength(i) << endl;
	}

	system("pause");
	return 0;

}

void Point::dislplayPoint(void) {
	cout << "(" << x << ", " << y << ")" << endl;
}

void Triangle::displayTrinagle(void) {
	a.dislplayPoint();
	b.dislplayPoint();
	c.dislplayPoint();
}

double Triangle::sideLength(int side) {

	switch (side) {
	case 1:
		return(sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y)));
	case 2:
		return(sqrt((a.x - c.x) * (a.x - c.x) + (a.y - c.y) * (a.y - c.y)));
	case 3:
		return(sqrt((b.x - c.x) * (b.x - c.x) + (b.y - c.y) * (b.y - c.y)));
	default:
		return(0);

	}
}


//Implement this function
bool Triangle::isRight(void) {
	double s1 = sideLength(1);
	double s2 = sideLength(2);
	double s3 = sideLength(3);
	if (s1 * s1 + s2 * s2 == s3 * s3 || s2 * s2 + s3 * s3 == s1 * s1 || s1 * s1 + s3 + s3 == s2 * s2)
		return(true);
	else
		return false;
}
double length(Point pt1, Point pt2) {
	double answer;
	answer = sqrt(pow(pt2.x - pt1.x, 2) + (pow(pt2.y - pt1.y, 2)));
	return answer;
}