#include<iostream>
#include"plorg.h"
using namespace std;
Plorg::Plorg() {
	strcpy_s(name, "Plorga");
	CI = 0;
}
void Plorg::Show() const{
	cout << "Name: " << name << "   CI: " << CI << endl;
}
void Plorg::SetCI(int ci) {
	CI = ci;
}
void Plorg::NewPLG(const char* p) {
	strcpy_s(name, p);
	CI = 50;
}