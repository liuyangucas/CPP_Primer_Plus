#include<iostream>
#include"stonewt.h"
int main() {
	using std::cout;
	using std::endl;
	Stonewt wolfe(0,285.7);
	Stonewt taft(21, 8);
	Stonewt sum = wolfe + taft;
	Stonewt diff = wolfe - taft;
	Stonewt mult = taft * 2;
	cout << "wolfe: " << wolfe << endl;
	cout << "taft: " << taft << endl;
	cout << "wolfe + taft: " << sum << endl;
	cout << "wolfe - taft: " << diff << endl;
	cout << "taft * 2: " << mult << endl;
	sum.ipounds_mode();
	cout << "int Pound(wolfe+taft): " << sum << endl;
	diff.stone_mode();
	cout << "stone mode(wolfe-taft): " << diff << endl;
	return 0;
 }
