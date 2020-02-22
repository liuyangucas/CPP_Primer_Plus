#pragma once
#ifndef _COMPLEX_H_
#define _COMPLEX_H_
#include<iostream>
class Complex {
private:
	double real;
	double img;
public:
	Complex();
	Complex(double r, double i);
	~Complex();
	Complex operator+(const Complex& t) const;
	Complex operator-(const Complex& t) const;
	Complex operator*(const Complex& t) const;
	Complex operator*(double n) const;//t*n
	Complex operator~() const;
	friend Complex operator*(double n, const Complex& t);//n*t
	friend std::ostream& operator<<(std::ostream& os, const Complex& t);
	friend std::istream& operator>>(std::istream& is, Complex& t);
};
#endif // !_COMPLEX_H_
