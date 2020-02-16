#include<iostream>
#include<string>
#include"bank.h"
using namespace std;
int main() {
	bank_acount MyAccount("Name", "IDONTKNOW", 1000.032);
	MyAccount.Show();
	MyAccount.long_money();
	MyAccount.Show();
	MyAccount.short_money();
	MyAccount.Show();
	return 0;
}