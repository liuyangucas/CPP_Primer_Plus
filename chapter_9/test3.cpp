#include<iostream>
#include<cstring>
using namespace std;
struct chaff {
	char dross[20];
	int slag;
};
const int len = 2;
int main() {
	//常规new运算符分配内存空间
	/*
	chaff* p = new chaff[len];
	for (auto i = 0; i < len; i++) {
		cout << "enter the dross: ";
		char temp[20];
		cin.getline(temp, 20);
		strcpy_s(p[i].dross, temp);
		cout << "enter the slag: ";
		cin >> p[i].slag;
		cin.ignore();
	}
	*/
	//建立静态存储空间。
	chaff *p;
	char buffer1[5000];
	p = new(buffer1) chaff;
	for (auto i = 0; i < len; i++) {
		cout << "enter the dross: ";
		char temp[20];
		cin.getline(temp, 20);
		strcpy_s(p[i].dross, temp);
		cout << "enter the slag: ";
		cin >> p[i].slag;
		cin.ignore();
	}

	for (auto i = 0; i < len; i++) {
		cout << "dross: " << p[i].dross << "  slag: " << p[i].slag<<endl;
	}
	return 0;
}
