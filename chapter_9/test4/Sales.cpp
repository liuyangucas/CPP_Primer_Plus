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
		cout << "输入四个季度的销量：" << endl;
		s.average = 0;
		s.min = DBL_MAX;
		s.max = DBL_MIN;
		for (auto i = 0; i < 4; i++) {
			cout << "输入第" << i + 1 << "季度的销量：";
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
			cout << "第" << i + 1 << "季度的销量为：" << s.sales[i] << endl;
		}
		cout << "平均销量为：" << s.average << endl;
		cout << "最大销量为：" << s.max << endl;
		cout << "最低销量为：" << s.min << endl;
	}
}