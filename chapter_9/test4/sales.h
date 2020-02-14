#pragma once
#ifndef _SALES_H_
#define _SALES_H_
namespace SALES {
	const int QUATERS = 4;
	struct Sales {
		double sales[QUATERS];
		double average;
		double max;
		double min;
	};
	void SetSale(Sales& s, const double arr[], int n);
	void SetSale(Sales& s);
	void ShowSale(const Sales& s);
}
#endif // !_SALES_H_

