#include<iostream>
#include"golf.h"
using namespace std;
int main() {
	golf ann;
	int hc;
	setgolf(ann, "Ann BirdFree", 24);
	cout << "展示Ann的信息：\n";
	showgolf(ann);
	cout << "重新设置Ann的Handicap数值：";
	cin >> hc;
	cin.ignore();
	handicap(ann, hc);
	cout << "重置后Ann的信息为：\n";
	showgolf(ann);
	const int num = 3;//设置结构体数组长度
	golf* anndy = new golf[num];
	int i = 0;
	for (; i < num; i++) {
		cout << "输入第" << i + 1 << "个信息：\n";
		int temp=setgolf(anndy[i]);
		if (temp == 0)
			break;
	}
	for (auto j = 0; j < i; j++) {
		showgolf(anndy[j]);
	}
	return 0;
}