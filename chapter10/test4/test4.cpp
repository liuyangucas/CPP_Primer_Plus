#include<iostream>
#include"sales.h"
using namespace SALES;
using std::cin;
using std::cout;
using std::endl;
int main() {
	Sales my;
	my.Show();
	const double temp[] = { 1,2,3,4 };
	Sales your(temp, 4);
	your.Show();
	return 0;
}
