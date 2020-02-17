#include<iostream>
#include"move.h"
using namespace std;
int main() {
	Move point1;
	point1.ShowMove();
	Move point2(1.1, 2.2);
	point2.ShowMove();
	Move point3(1.3, 2.1);
	point3.ShowMove();
	point2=point2.add(point3);
	point2.ShowMove();
	point2.reset(1, 1);
	point2.ShowMove();
	return 0;
}
