#include<iostream>
#include "complexNumber.h"

using namespace std;
int main()
{
	ComplexNum c1, c2;
	ComplexNum(5, 13);

	cout << "\t1st Number\n";
	c1.SetReal(9);
	c1.SetImaginary(8);
	c1.Display();

	cout << "\t2nd Number\n";
	c2.SetReal(1);
	c2.SetImaginary(5);
	c2.Display();

	cout << "\tOperation + performed\n";
	ComplexNum add = c1 + c2;
	add.Display();

	cout << "\tOperation - performed\n";
	ComplexNum sub = c1 - c2;
	sub.Display();

	cout << "\tOperation == performed\n";
	cout << "   c1 == c2 : " << (c1 == c2) << endl << endl;

	cout << "\tOperation != performed\n";
	cout << "   c1 != c2 : " << (c1 != c2) << endl << endl;

	cout << "\tOperation = performed\n";
	ComplexNum assignment = c2;
	assignment.Display();

	system("pause");
	return 0;
}