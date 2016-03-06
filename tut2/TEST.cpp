#include "FRACTIONS.h"
#include <iostream>

using namespace std;

int main()
{
	FRACTIONS fraction1(1, 1);
	FRACTIONS fraction2(1, 1);
	FRACTIONS temp(1, 1);

	int x, y;

	cout << "please enter the numerator for fraction 1:";
	cin >> x;
	cout << "please enter the denominator for fraction 2 :";
	cin >> y;
	fraction1.setNumDenom(x, y);
	cout << "please enter the numerator for fraction 1 :";
	cin >> x;
	cout << "please enter the denominator for fraction 2 :";
	cin >> y;
	fraction2.setNumDenom(x, y);
	cout << "Multiplication : ";
	temp = fraction1.operator*(fraction2);
	temp.print();
	cout << "Division : ";
	temp = fraction1.operator/(fraction2);
	temp.print();
	cout << "" << endl;
	cout << "Addition : ";
	temp = fraction1.operator+(fraction2);
	temp.print();
	cout << "Subtraction : ";
	temp = fraction1.operator-(fraction2);
	temp.print();
}