// Testpoint.cpp
//
// Simple examples of using Point class.
//
// (C) Datasim Education BV 2006

#include "point.hpp"
#include "point.cpp"
#include <iostream>

int main()
{

	// Create a point
	Point p1;
	Point p2;
//    Point Point::OriginP =Point(0.0, 0.0);
	// Modify it cordinates
	p1.X(2.0);
	p1.Y(3.0);
    p2.X(4.0);
    p2.Y(5.0);
    
	// Print it
	cout << "[" << p1.X() << "," << p1.Y() << "]" << endl;
    cout << "[" << p2.X() << "," << p2.Y() << "]" << endl;
	// Midpoint
	Point pL(0.0, 0.0);
	Point pR(1.0, 1.0);

	cout << pL; cout << pR;

	Point PM = pL.MidPoint(pR);
	cout << "Midpoint " << PM << endl;
    cout <<"P1+P2"<<p1.add(p2)<<endl;
    // Work with the unique Origin Point
	cout << "Origin point: " << Point::GetOriginPoint() << endl;
	Point::GetOriginPoint() = Point(1.0, 2.0);
cout << "Origin point: " << Point::GetOriginPoint() << endl;
	return 0;
}
