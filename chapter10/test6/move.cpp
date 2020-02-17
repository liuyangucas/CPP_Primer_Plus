#include<iostream>
#include"move.h"
using namespace std;
Move::Move(double a, double b) {
	x = a;
	y = b;
}
void Move::ShowMove() const {
	cout << "X=" << x << "  Y=" << y<<endl;
}
Move& Move::add(const Move& m) const {
	Move temp;
	temp.x = m.x+this->x;
	temp.y = m.y+this->y;
	return temp;
}
void Move::reset(double a, double b) {
	x = a;
	y = b;
}