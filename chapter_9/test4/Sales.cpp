#include<iostream>
#include"sales.h"
namespace SALES {
	using std::cout;
	using std::cin;
	using std::endl;
	void SetSale(Sales& s, const double arr[], int n) {
		s.min = arr[0];
		s.max = arr[0];
		s.average = 0;
		for (auto i = 0; i < n; i++) {
			s.sales[i] = arr[i];
			s.average += arr[i];
			if (s.max < arr[i])
				s.max = arr[i];
			if (s.min > arr[i])
				s.min = arr[i];
		}
		s.average = s.average / n;
	}
	void SetSale(Sales& s) {
		cout << "�����ĸ����ȵ�������" << endl;
		s.average = 0;
		s.min = DBL_MAX;
		s.max = DBL_MIN;
		for (auto i = 0; i < 4; i++) {
			cout << "�����" << i + 1 << "���ȵ�������";
			cin >> s.sales[i];
			s.average += s.sales[i];
			if (s.min > s.sales[i])
				s.min = s.sales[i];
			if (s.max < s.sales[i])
				s.max = s.sales[i];
		}
		s.average = s.average / 4.0;
	}
	void ShowSale(const Sales& s) {
		for (auto i = 0; i < 4; i++) {
			cout << "��" << i + 1 << "���ȵ�����Ϊ��" << s.sales[i] << endl;
		}
		cout << "ƽ������Ϊ��" << s.average << endl;
		cout << "�������Ϊ��" << s.max << endl;
		cout << "�������Ϊ��" << s.min << endl;
	}
}