
//Harry Patel

#include <iostream>

using namespace std;

class Point {
private:

	double x, y;

public:
	// constructor
	Point(double x = 0, double y = 0);

	double getX(void);
	double getY(void);
	void setX(double x);
	void setY(double y);

	void printPoint(void);
};

class Segment {
private:

	Point start, end;

public:
	// constructor
	Segment(Point start = Point(), Point end = Point());

	Point getStart(void);
	Point getEnd(void);
	void setStart(Point point);
	void setEnd(Point point);
	double getLength(void);
	double getSlop(void);

	void printSegment(void);

};

int main() {

	Point point1 = Point(3, 7);
	Point point2 = Point(4, 4);


	Segment segment = Segment(point1, point2);

	segment.printSegment();
	cout << endl;

	cout << "Slope: " << segment.getSlop() << endl;
	cout << "Length: " << segment.getLength() << endl;


	system("pause");
	return 0;
}


// constructor imp.
Point::Point(double x, double y) {
	this->x = x;
	this->y = y;
}
double Point::getX(void) {
	return x;
}
double Point::getY(void) {
	return y;
}
void Point::setX(double x) {
	this->x = x;
}
void Point::setY(double y) {
	this->y = y;
}

void Point::printPoint(void) {
	cout << "(" << x << " , " << y << ")";
}


// constructor imp.
Segment::Segment(Point start, Point end) {
	this->start = start;
	this->end = end;
}

Point Segment::getStart(void) {
	return start;
}
Point Segment::getEnd(void) {
	return end;
}
void Segment::setStart(Point point) {
	start = point;
}
void Segment::setEnd(Point point) {
	end = point;
}
double Segment::getLength(void) {
	double x1 = start.getX();
	double y1 = start.getY();

	double x2 = end.getX();
	double y2 = end.getY();

	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
double Segment::getSlop(void) {
	double x1 = start.getX();
	double y1 = start.getY();

	double x2 = end.getX();
	double y2 = end.getY();

	return (y1 - y2) / (x1 - x2);
}
void Segment::printSegment(void) {
	cout << "Segment: ";
	start.printPoint();
	cout << " to ";
	end.printPoint();
}