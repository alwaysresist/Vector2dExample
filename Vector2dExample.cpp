#include <iostream>
#include<string>
#include "Vector2d.h"
using namespace std;


int main()
{
	Vector2d a(2, 5);
	Vector2d b(1, 3);
	cout << "Vector 1: " << (string)a << endl;
	cout << "Vector 2: " << (string)b << endl;
	cout << "Sum a+b: " << string(a + b) << endl;
	cout << "Mult a by 5: " << string(a * 5) << endl;
	cout << "Sub a-b: " << string(a - b) << endl;
	cout << "a*b: " << (a * b) << endl;
	cout << "Legth of vector 1: " << a.len() << endl;
	cout << "Legth of vector 2: " << b.len() << endl;
	cout << "Angle: " << a.angle(b) << endl;
}

