#include"golf.h"
#include<iostream>
#include<cstring>
void setgolf(golf& g, const char* name, int hc) {
	//将结构体g的内容设置为随后的几个变量
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}
int setgolf(golf& g) {
	using namespace std;
	cout << "输入姓名：";
	cin.getline(g.fullname, len);
	cout << "输入负重：";
	cin >> g.handicap;
	cin.ignore();
	if (g.fullname[0] == '\0')
		return 0;
	else return 1;
}
void handicap(golf& g, int hc) {
	g.handicap = hc;
}
void showgolf(const golf& g) {
	using namespace std;
	cout << "姓名为：" << g.fullname << "   负重为：" << g.handicap << endl;
}