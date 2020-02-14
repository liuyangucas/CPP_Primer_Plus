#include<iostream>
#include"sales.h"
int main() {
	using SALES::ShowSale;
	using SALES::SetSale;
	using SALES::Sales;
	Sales noob;
	//交互式输入
	SetSale(noob);
	ShowSale(noob);
	std::cout << std::endl;
	//非交互式
	const double arr[] = { 100.1,2223.321,123,2323.4 };
	SetSale(noob, arr, 4);
	ShowSale(noob);
	return 0;
}