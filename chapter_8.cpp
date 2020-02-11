#include<iostream>
#include<string>
#include<cstring>
using namespace std;
//ϰ��1
void fun1(char *p, int count = 0);
//ϰ��2
struct CandyBar {
	char brand[50];
	double weight;
	int heat;
};
void ShowCandyBar(CandyBar& candy, const char* p = "Millennium Munch", double w = 2.85, int h = 350);
//ϰ��3
void TOUPPER(string& s);
//ϰ��4
struct stringy {
	char* str;
	int ct;
};
void set(stringy& s, char* s1);
void show(const stringy& s, int count = 1);
void show(const char* s, int count = 1);
//ϰ��5
template<typename T> 
T MAX5(T list[5]);
//ϰ��6
template<typename T>
T Maxn(T list[], int);
template<> char* Maxn(char* p[], int n);//���ָ�����飬��ʾ���廯��
//ϰ��7
template<typename T>
T SumArray(T list[], int);
template<typename T>
T SumArray(T* list[], int n);
struct debts {
	char name[50];
	double amount;
};
int main() {
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double* pd[3];
	for (auto i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	cout << "Things_sum is : " << SumArray(things, 6) << endl;
	cout << "Debts_sum is : " << SumArray(pd, 3) << endl;
	return 0;
}
/**************************************************************************************************/
//ϰ��1
void fun1(char *p, int count) {
	static int t = 0;
	if (count > 0) {
		for (auto i = 0; i < t; i++)
			cout << p<<" ";
		cout << endl;
	}
	else cout << "�������" << endl;
	t++;
}
/**************************************************************************************************/
//ϰ��2
void ShowCandyBar(CandyBar& candy, const char* p, double w, int h) {
	strcpy_s(candy.brand, p);
	candy.weight = w;
	candy.heat = h;
	cout << "Brand: " << candy.brand << endl;
	cout << "Weight: " << candy.weight << endl;
	cout << "Heat: " << candy.heat << endl;
}
/**************************************************************************************************/
//ϰ��3
void TOUPPER(string& s) {
	for (auto i = 0; i < s.size(); i++)
		s[i] = toupper(s[i]);
}
/**************************************************************************************************/
//ϰ��4
void set(stringy& s, char* s1) {
	s.ct = strlen(s1);
	s.str = new char[s.ct + 1];
	strcpy_s(s.str, strlen(s1)+1,s1);//strcpy�������ܻᵼ���ڴ�й¶������Ƽ�ʹ��strcpy_s,��������������str,len,str2��;
}
void show(const stringy& s, int count) {
	for (auto i = 0; i < count; i++)
		cout << s.str << endl;
}
void show(const char* s, int count) {
	for (auto i = 0; i < count; i++)
		cout << s << endl;
}
/**************************************************************************************************/
//ϰ��5
template<typename T>
T MAX5(T list[5]) {
	T res = list[0];
	for (int i = 1; i < 5; i++) {
		if (res < list[i])
			res = list[i];
	}
	return res;
}
/**************************************************************************************************/
//ϰ��6
template<typename T>
T Maxn(T list[], int n) {
	T res = list[0];
	for (auto i = 1; i < n; i++) {
		if (res < list[i])
			res = list[i];
	}
	return res;
}
template<> char* Maxn(char* p[], int n) {
	int res = 0;
	char* temp = p[0];
	for (auto i = 0; i < n; i++) {
		if (strlen(p[i]) > res) {
			res = strlen(p[i]);
			temp = p[i];
		}
	}
	return temp;
}
/**************************************************************************************************/
//ϰ��7
template<typename T>
T SumArray(T list[], int n) {
	T res = list[0];
	for (auto i = 1; i < n; i++)
		res += list[i];
	return res;

}
template<typename T>
T SumArray(T* list[], int n) {
	T res = *list[0];
	for (auto i = 1; i < n; i++)
		res += *list[i];
	return res;
}