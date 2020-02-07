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
	cout << "����ٹ����ͺģ�";
	cin >> mpg;
	double res = oil(mpg);
	cout << "�ͺ�Ϊ" << res << "Ӣ��ÿ����" << endl;
	return 0;
}

void convert_height(double h) {
	//������ߣ�Ӣ�磩��������(xӢ��yӢ��)
	int inch = int(h) / 12;
	int incun = int(h) % 12;
	cout << "���Ϊ" << inch << "Ӣ��" << incun << "Ӣ��" << endl;
}
double BMI(int inch, int incun, double weight) {
	//bmi ���س�����ߵ�ƽ��
	const double incun_to_meter = 0.0254;
	const double pound_to_kg = 1.0 / 2.2;
	double h = 12.0 * inch + incun;
	h = h * incun_to_meter;
	weight = weight * pound_to_kg;
	double bmi = weight / (h*h);
	return bmi;
}

double convert(int degree, int minute, int second) {
	//�ȷ���ת��Ϊ����
	const double unit = 60;
	const double unit2 = 3600;
	double res = double(degree) + double(minute) / unit + double(second) / unit2;
	return res;
}

void second_to_day(long long second) {
	//����������ת��Ϊx��yСʱz��s��
	const int second2day = 60 * 60 * 24;
	const int second2minute = 60;
	const int second2hour = 60 * 60;
	int day = second / second2day;
	second = second % second2day;
	int hour = second / second2hour;
	second = second % second2hour;
	int minute = second / second2minute;
	second = second % second2minute;
	cout << day << "��" << hour << "Сʱ" << minute << "����" << second << "��" << endl;
}

double portion(long long population) {
	const long long total_pop = 6898758899;
	double res = double(population) / double(total_pop) * 100;
	return res;
}

double oil(double x) {
	//�����ͺģ�����Ϊ�ٹ��������,���Ϊ��ʽ����һ�������߶��ٹ��
	const double mile = 62.14;
	const double conv = 3.875;//1���ص���3.875��
	double gas = x / 3.875;
	return mile / gas;
}
