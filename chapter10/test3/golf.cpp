#include<iostream>
#include"golf.h"
using namespace std;
Golf::Golf(const char* fn, int hd) {
	strcpy_s(fullname, fn);
	handicap = hd;
}
Golf::Golf() {
	char name[len];
	int temp;
	cout << "Enter the fullname: ";
	cin.getline(name, len);
	cout << "Enter the handicap: ";
	cin >> temp;
	*this = Golf(name, temp);
}
void Golf::gethandicap(int hc) {
	handicap = hc;
}
void Golf::Show() {
	cout << "Fullname: " << fullname << "  Handicap: " << handicap << endl;
}
Golf::~Golf() {};