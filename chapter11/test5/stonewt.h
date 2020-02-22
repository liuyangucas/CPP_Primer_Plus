#pragma once
#ifndef _STONEWT_H_
#define _STONEWT_H_
#include<iostream>
class Stonewt {
public:
	enum Mode{stones,ipounds,dpounds};
private:
	enum{Lbs_per_stn=14};
	int stone;
	double pds_left;
	double pounds;
	int pounds_int;
	Mode mode;
public:
	Stonewt(int stn, double lbs,Mode mod=dpounds);
	Stonewt();
	~Stonewt();
	void stone_mode();
	void ipounds_mode();
	void dpounds_mode();
	friend std::ostream& operator<<(std::ostream& os, const Stonewt& st);
	Stonewt operator+(const Stonewt& s) const;
	Stonewt operator-(const Stonewt& s) const;
	Stonewt operator*(const double n) const;
	friend Stonewt operator*(double n, Stonewt& s);
};
#endif // !_STONEWT_H_
