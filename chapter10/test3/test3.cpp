#include<iostream>
#include"golf.h"
using namespace std;
int main() {
	Golf mygolf;
	mygolf.Show();
	mygolf.gethandicap(100);
	mygolf.Show();
	Golf mygolf2("USER", 20);
	mygolf2.Show();
	return 0;
}
