//Program Description: Assignment 2 - Operator Overloading, Template
//Class: Data Structures BCS 370
//Created By: Arlsan Khurram
//Date: 02/13/19

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

//template
template <class C>

//Circle Class
class Circle {
	C radius;
public:
	//default constructor
	Circle() { this->radius = 0; }

	//calculate area
	C area() {
		C area;
		area = M_PI * pow(radius, 2);
		return area;
	}

	//cin operator overload
	friend istream& operator>>(istream &is, Circle &rad) {
		is >> rad.radius;
		return is;
	}

	//cout operator overload
	friend ostream& operator<<(ostream &os, Circle &rad) {
		os << "Radius: " << rad.radius << "\nArea: " << rad.area() << endl;
		return os;
	}

	//+ function overload
	friend void operator+(Circle &rad, int val) {
		rad.radius += val;
	}
};

//main
int main()
{
	cout << "Enter value for Radius: "; 
	
	//create Cirlce object using double data type
	Circle<double> c1;
	
	//cin using operator overloading
	cin >> c1;
	
	//cout using operator overloading
	cout << "\n" << c1 << endl;
	
	//add value to radius using function overloading
	c1 + 2;
	
	cout << c1 << endl;
	return 0;
}
