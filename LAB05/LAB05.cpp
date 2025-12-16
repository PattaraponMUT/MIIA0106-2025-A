#include <iostream>
#include <cmath>
using namespace std;

double calulateCircleArea(double radius) 
{
	const double M_PI = 3.14159;
	return M_PI * radius * radius;
}
double calculateRectangleArea(double length, double width) 
{
	return length * width;
}
void inputAndcalculateCircleArea() 
{
	double radius;
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	double area = calulateCircleArea(radius);
	cout << "The area of the circle is: " << area << endl;
}
void inputAndCalculateRectangleArea() 
{
	double length, width;
	cout << "Enter the length of the rectangle: ";
	cin >> length;
	cout << "Enter the width of the rectangle: ";
	cin >> width;
	double area = calculateRectangleArea(length, width);
	cout << "The area of the rectangle is: " << area << endl;
}
int main()
{
	inputAndcalculateCircleArea();
	inputAndCalculateRectangleArea();
	return 0;
}

