#pragma once
#ifndef _BANK_H_
#define _BANK_H_
#include<string>
using std::string;
class bank_acount {
private:
	string _name;
	string _account;
	double _num;
public:
	//bank_acount();//无参默认构造函数
	bank_acount(string name="USER", string account="******", double num=0.0);//带默认参数的构造函数
	~bank_acount();
	void Show();
	void long_money();
	void short_money();
};

#endif // 
