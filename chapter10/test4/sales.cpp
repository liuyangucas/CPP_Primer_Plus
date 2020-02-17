#include"sales.h"
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
namespace SALES {
	Sales::Sales(const double arr[], int n) {
		double temp = 0;
		max = DBL_MIN;
		min = DBL_MAX;
		for (auto i = 0; i < n; i++) {
			temp += arr[i];
			sales[i] = arr[i];
			if (max < arr[i])
				max = arr[i];
			if (min > arr[i])
				min = arr[i];
		}
		average = temp / 4;
	}
	Sales::Sales() {
		cout << "输入四个季度的销量：\n";
		this->average = 0;
		this->max = DBL_MIN;
		this->min = DBL_MAX;
		for (auto i = 0; i < QUATERS; i++) {
			cin >> sales[i];
			average += sales[i];
			if (max < sales[i])
				max = sales[i];
			if (min > sales[i])
				min = sales[i];
		}
		average = average / 4;
	}
	void Sales::Show() {
		for (auto i = 0; i < QUATERS; i++) {
			cout << "第" << i + 1 << "季度的销量为: " << sales[i] << endl;
		}
		cout << "平均销量为：" << average << endl;
		cout << "最大销量为：" << max << endl;
		cout << "最低销量为：" << min << endl;
	}
}