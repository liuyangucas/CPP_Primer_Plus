#pragma once
#ifndef _SALES_H_
#define _SALES_H_
namespace SALES {
	class Sales {
	private:
		static const int QUATERS = 4;
		double sales[QUATERS];
		double average;
		double min;
		double max;
	public:
		Sales(const double arr[], int n);
		Sales();
		void Show();
	};
}
#endif // !_SALES_H_
