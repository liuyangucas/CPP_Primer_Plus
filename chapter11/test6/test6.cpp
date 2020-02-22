#include<iostream>
#include"stonewt.h"
int main() {
	using std::cout;
	using std::cin;
	using std::endl;
	Stonewt temp(11, 0, Stonewt::stones);
	Stonewt s[6] = {
		Stonewt(0,275),
		Stonewt(0,260),
		Stonewt(0,150.5)
	};
	double p;
	cout << "enter 3 stonewt: \n";
	for (auto i = 0; i < 3; i++) {
		cout << i + 1 << ": ";
		cin >> p;
		s[3 + i] = Stonewt(0, p);
	}
	int count = 0;
	Stonewt max, min;
	max = min = s[0];
	for (auto i = 0; i < 6; i++) {
		if (s[i] > max)
			max = s[i];
		if (s[i] < min)
			min = s[i];
		if (s[i] >= temp)
			count += 1;
	}
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	cout << "No less than 11 stone: " << count << endl;
	return 0;
}
