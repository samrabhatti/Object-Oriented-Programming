#pragma once
#include<iostream>
using namespace std;

class ComplexNum
{
private:
	int real;
	int imaginary;
	friend ostream& operator<<(ostream& _cout, const ComplexNum& obj);
	friend istream& operator>>(istream& _cin, ComplexNum& obj);
public:
	ComplexNum();
	ComplexNum(int r, int i);
	ComplexNum(const ComplexNum& obj);
	~ComplexNum();
	void SetReal(int r);
	int GetReal();
	void SetImaginary(int i);
	int GetImaginary();
	void Display();
	ComplexNum operator+ (const ComplexNum& obj);
	ComplexNum operator- (const ComplexNum& obj);
	ComplexNum operator = (const ComplexNum& obj);
	bool operator == (ComplexNum& obj);
	bool operator != (ComplexNum& obj);
};
