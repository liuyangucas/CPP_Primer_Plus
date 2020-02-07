#include<iostream>
#include<cmath>
using namespace std;

void convert_height(double);
double BMI(int, int, double);
double convert(int, int, int);
void second_to_day(long long);
double portion(long long);
double oil(double);
int main() {
	double mpg;
	cout << "输入百公里油耗：";
	cin >> mpg;
	double res = oil(mpg);
	cout << "油耗为" << res << "英里每加仑" << endl;
	return 0;
}

void convert_height(double h) {
	//输入身高（英寸），输出身高(x英尺y英尺)
	int inch = int(h) / 12;
	int incun = int(h) % 12;
	cout << "身高为" << inch << "英尺" << incun << "英寸" << endl;
}
double BMI(int inch, int incun, double weight) {
	//bmi 体重除以身高的平方
	const double incun_to_meter = 0.0254;
	const double pound_to_kg = 1.0 / 2.2;
	double h = 12.0 * inch + incun;
	h = h * incun_to_meter;
	weight = weight * pound_to_kg;
	double bmi = weight / (h*h);
	return bmi;
}

double convert(int degree, int minute, int second) {
	//度分秒转换为度数
	const double unit = 60;
	const double unit2 = 3600;
	double res = double(degree) + double(minute) / unit + double(second) / unit2;
	return res;
}

void second_to_day(long long second) {
	//输入秒数，转换为x天y小时z分s秒
	const int second2day = 60 * 60 * 24;
	const int second2minute = 60;
	const int second2hour = 60 * 60;
	int day = second / second2day;
	second = second % second2day;
	int hour = second / second2hour;
	second = second % second2hour;
	int minute = second / second2minute;
	second = second % second2minute;
	cout << day << "天" << hour << "小时" << minute << "分钟" << second << "秒" << endl;
}

double portion(long long population) {
	const long long total_pop = 6898758899;
	double res = double(population) / double(total_pop) * 100;
	return res;
}

double oil(double x) {
	//计算油耗，输入为百公里耗油量,输出为美式风格的一加仑油走多少公里；
	const double mile = 62.14;
	const double conv = 3.875;//1加仑等于3.875升
	double gas = x / 3.875;
	return mile / gas;
}
