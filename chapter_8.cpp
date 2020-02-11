#include<iostream>
#include<string>
#include<cstring>
using namespace std;
//习题1
void fun1(char *p, int count = 0);
//习题2
struct CandyBar {
	char brand[50];
	double weight;
	int heat;
};
void ShowCandyBar(CandyBar& candy, const char* p = "Millennium Munch", double w = 2.85, int h = 350);
//习题3
void TOUPPER(string& s);
//习题4
struct stringy {
	char* str;
	int ct;
};
void set(stringy& s, char* s1);
void show(const stringy& s, int count = 1);
void show(const char* s, int count = 1);
//习题5
template<typename T> 
T MAX5(T list[5]);
//习题6
template<typename T>
T Maxn(T list[], int);
template<> char* Maxn(char* p[], int n);//针对指针数组，显示具体化；
//习题7
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
//习题1
void fun1(char *p, int count) {
	static int t = 0;
	if (count > 0) {
		for (auto i = 0; i < t; i++)
			cout << p<<" ";
		cout << endl;
	}
	else cout << "无需输出" << endl;
	t++;
}
/**************************************************************************************************/
//习题2
void ShowCandyBar(CandyBar& candy, const char* p, double w, int h) {
	strcpy_s(candy.brand, p);
	candy.weight = w;
	candy.heat = h;
	cout << "Brand: " << candy.brand << endl;
	cout << "Weight: " << candy.weight << endl;
	cout << "Heat: " << candy.heat << endl;
}
/**************************************************************************************************/
//习题3
void TOUPPER(string& s) {
	for (auto i = 0; i < s.size(); i++)
		s[i] = toupper(s[i]);
}
/**************************************************************************************************/
//习题4
void set(stringy& s, char* s1) {
	s.ct = strlen(s1);
	s.str = new char[s.ct + 1];
	strcpy_s(s.str, strlen(s1)+1,s1);//strcpy函数可能会导致内存泄露，因此推荐使用strcpy_s,包括三个参数（str,len,str2）;
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
//习题5
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
//习题6
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
//习题7
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