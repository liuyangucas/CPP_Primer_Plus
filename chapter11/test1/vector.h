#pragma once
#ifndef _VECTOR_H_
#define _VECTOR_H_
#include<iostream>
namespace VECTOR {
	class Vector {
	public:
		enum Mode{ RECT,POL };
	private:
		double x;
		double y;
		double mag;
		double ang;
		Mode mode;
		//私有方法设置成员变量值
		void set_mag();
		void set_ang();
		void set_x();
		void set_y();
	public:
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form = RECT);
		~Vector();
		double xval() const { return x; }
		double yval() const { return y; }
		double magval() const { return mag; }
		double angval() const { return ang; }
		void polar_mode();
		void rect_mode();
		//重载运算符
		Vector operator+(const Vector& b) const;
		Vector operator-(const Vector& b) const;
		Vector operator-() const;
		Vector operator*(double n) const;
		//友元方式重载运算符
		friend Vector operator*(double n, const Vector& a);
		friend std::ostream& operator<<(std::ostream& os, const Vector& v);
	};
}
#endif // !_VECTOR_H_
