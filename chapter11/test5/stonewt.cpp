#include"stonewt.h"
#include<iostream>
Stonewt::Stonewt(int stn, double lbs, Mode mod) {
	mode = mod;
	if (mode == dpounds) {
		stone = int(lbs) / Lbs_per_stn;
		pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
		pounds = lbs;
		pounds_int = int(lbs);
	}
	else if (mode == ipounds) {
		pounds_int = int(lbs);
		pounds = lbs;
		stone = int(lbs) / Lbs_per_stn;
		pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	}
	else if (mode == stones) {
		stone = stn;
		pds_left = lbs;
		pounds = stone * Lbs_per_stn + lbs;
		pounds_int = int(pounds);
	}
	else std::cout << "Wrong Mode! \n";
}
Stonewt::Stonewt() {
	stone = pds_left = pounds = pounds_int = 0;
	mode = stones;
}
Stonewt::~Stonewt() {}
void Stonewt::stone_mode() {
	mode = stones;
}
void Stonewt::ipounds_mode() {
	mode = ipounds;
}
void Stonewt::dpounds_mode() {
	mode = dpounds;
}
Stonewt Stonewt::operator+(const Stonewt& s) const {
	Stonewt sum;
	sum.pounds = pounds + s.pounds;
	sum.pounds_int = int(sum.pounds);
	sum.stone = sum.pounds_int / Lbs_per_stn;
	sum.pds_left = sum.pounds_int % Lbs_per_stn - sum.pounds_int;
	sum.mode = mode;
	return sum;
}
Stonewt Stonewt::operator-(const Stonewt& s) const {
	Stonewt diff;
	diff.pounds = pounds - s.pounds;
	diff.pounds_int = int(diff.pounds);
	diff.stone = diff.pounds_int / Lbs_per_stn;
	diff.pds_left = diff.pounds_int % Lbs_per_stn - diff.pounds - diff.pounds_int;
	diff.mode = mode;
	return diff;
}
Stonewt Stonewt::operator*(const double n) const {
	Stonewt mult;
	mult.pounds = n * pounds;
	mult.pounds_int = int(mult.pounds);
	mult.stone = mult.pounds_int / Lbs_per_stn;
	mult.pds_left = mult.pounds_int % Lbs_per_stn - mult.pounds_int;
	mult.mode = mode;
	return mult;
}
Stonewt operator*(double n, const Stonewt& s) {
	return s * n;
}
std::ostream& operator<<(std::ostream& os, const Stonewt& st) {
	if (st.mode == Stonewt::stones) {
		os << st.stone << " Stone, " << st.pds_left << " Pounds\n";
	}
	else if (st.mode == Stonewt::dpounds) {
		os << "Pounds(float): " << st.pounds << std::endl;
	}
	else {
		os << "Pounds(int): " << st.pounds_int << std::endl;
	}
	return os;
}
