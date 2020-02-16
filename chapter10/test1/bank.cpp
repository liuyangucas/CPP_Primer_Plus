#include<iostream>
#include<string>
#include"bank.h"
using namespace std;
/*
bank_acount::bank_acount() {
	_name = "USER";
	_account = "NONE";
	_num = 0.0;
}
*/
bank_acount::bank_acount(string name, string account, double num) {
	_name = name;
	_account = account;
	_num = num;
}

bank_acount::~bank_acount() {
	cout << "release memory" << endl;
}
void bank_acount::Show() {
	cout << "Name: " << _name << endl;
	cout << "Account: " << _account << endl;
	cout << "Deposit: " << _num << endl;
}
void bank_acount::long_money() {
	double temp;
	cout << "Enter the long money: ";
	cin >> temp;
	_num += temp;
}
void bank_acount::short_money() {
	double temp;
	cout << "Enter the short money: ";
	cin >> temp;
	_num -= temp;
}