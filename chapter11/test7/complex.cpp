#include"complex.h"
#include<iostream>
Complex::Complex() {
	real = img = 0;
}
Complex::Complex(double r, double i) {
	real = r;
	img = i;
}
Complex::~Complex() {}
Complex Complex::operator+(const Complex& t)const {
	Complex sum;
	sum.real = real + t.real;
	sum.img = img + t.img;
	return sum;
}
Complex Complex::operator-(const Complex& t)const {
	Complex diff;
	diff.real = real - t.real;
	diff.img = img - t.img;
	return diff;
}
Complex Complex::operator*(double n)const {
	Complex mult;
	mult.real = real * n;
	mult.img = img * n;
	return mult;
}
Complex Complex::operator*(const Complex& t)const {
	Complex mult;
	mult.real = real * t.real - img * t.img;
	mult.img = real * t.img + img * t.real;
	return mult;
}
Complex Complex::operator~() const {
	Complex conj;
	conj.real = real;
	conj.img = -img;
	return conj;
}
Complex operator*(double n, const Complex& t) {
	return t * n;
}
std::ostream& operator<<(std::ostream& os, const Complex& t) {
	os << "(" << t.real << "," << t.img<<"i)" << std::endl;
	return os;
}
std::istream& operator>>(std::istream& is, Complex& t) {
	std::cout << "real: ";
	is >> t.real;
	if (!is)
		return is;
	std::cout << "imaginary: ";
	is >> t.img;
	return is;
}