#include <iostream>
using namespace std;

void swapByvalue(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
void swapByReference(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a, b;
	cout << "Enter two integers a : ";
	cin >> a;
	cout << "Enter two integers b : ";
	cin >> b;
	cout << "Before swap: a = " << a << ", b = " << b << endl;

	swapByvalue(a, b);
	cout << "After swap by value: a = " << a << ", b = " << b << endl;
	swapByReference(a, b);
	cout << "After swap by reference: a = " << a << ", b = " << b << endl;
	
	return 0;
}