#include"golf.h"
#include<iostream>
#include<cstring>
void setgolf(golf& g, const char* name, int hc) {
	//���ṹ��g����������Ϊ���ļ�������
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}
int setgolf(golf& g) {
	using namespace std;
	cout << "����������";
	cin.getline(g.fullname, len);
	cout << "���븺�أ�";
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
	cout << "����Ϊ��" << g.fullname << "   ����Ϊ��" << g.handicap << endl;
}