#include<iostream>
#include"golf.h"
using namespace std;
int main() {
	golf ann;
	int hc;
	setgolf(ann, "Ann BirdFree", 24);
	cout << "չʾAnn����Ϣ��\n";
	showgolf(ann);
	cout << "��������Ann��Handicap��ֵ��";
	cin >> hc;
	cin.ignore();
	handicap(ann, hc);
	cout << "���ú�Ann����ϢΪ��\n";
	showgolf(ann);
	const int num = 3;//���ýṹ�����鳤��
	golf* anndy = new golf[num];
	int i = 0;
	for (; i < num; i++) {
		cout << "�����" << i + 1 << "����Ϣ��\n";
		int temp=setgolf(anndy[i]);
		if (temp == 0)
			break;
	}
	for (auto j = 0; j < i; j++) {
		showgolf(anndy[j]);
	}
	return 0;
}