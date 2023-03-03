#include<iostream>
#include "complexNumber.h"
using namespace std;

//Default Constructor
ComplexNum::ComplexNum() {
	real = 0;
	imaginary = 0;
}

//Parameterized Constructor
ComplexNum::ComplexNum(int r, int i) {
	this->real = r;
	this->imaginary = i;
}

//Copy Constructor
ComplexNum::ComplexNum(const ComplexNum& obj) {
	this->real = obj.real;
	this->imaginary = obj.imaginary;
}

//Destructor
ComplexNum::~ComplexNum() {
	real = 0;
	imaginary = 0;
}

void ComplexNum::SetReal(int r) {
	real = r;
}

int ComplexNum::GetReal() {
	return real;
}

void ComplexNum::SetImaginary(int i) {
	imaginary = i;
}

int ComplexNum::GetImaginary() {
	return imaginary;
}

void ComplexNum::Display() {
	cout << "Real Number: " << real << endl;
	cout << "Imaginary Number: " << imaginary << "i" << endl;
	cout << endl;
}

// Operator +
ComplexNum ComplexNum::operator+ (const ComplexNum& obj) {
	int real = this->real + obj.real;
	int imaginary = this->imaginary + obj.imaginary;
	return ComplexNum(real,imaginary);
}

// Operator -
ComplexNum ComplexNum::operator- (const ComplexNum& obj) {
	int real = this->real - obj.real;
	int imaginary = this->imaginary - obj.imaginary;
	return ComplexNum(real, imaginary);
}

// Operator =
ComplexNum ComplexNum::operator = (const ComplexNum& obj) {
	this->real = obj.real;
	this->imaginary = obj.imaginary;
	return*this;
}

// Operator ==
bool ComplexNum::operator == (ComplexNum& obj) {
	if ((this->real != obj.real) && (this->imaginary != obj.imaginary))
		return false;
	else
		return true;
}

// Operator !=
bool ComplexNum::operator != (ComplexNum& obj) {
	if ((this->real != obj.real) && (this->imaginary != obj.imaginary))
		return true;
	else
		return false;
}

//Operator >>
istream& operator>>(istream& _cin, ComplexNum& obj) {
	cout << "Enter real number: ";
	cin >> obj.real;
	cout << "Enter imaginary number:";
	cin >> obj.imaginary;
	return _cin;
}

//Operator <<
ostream& operator<<(ostream& _cout, const ComplexNum& obj) {
	cout << obj.real << "\t" << obj.imaginary;
	cout << endl;
	return _cout;
}