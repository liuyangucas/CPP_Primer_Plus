#pragma once
#ifndef _GOLF_H_
#define _GOLF_H_
class Golf {
private:
	static const int len = 40;
	char fullname[len];
	int handicap;
public:
	Golf(const char* fn, int hd);
	Golf();
	~Golf();
	void gethandicap(int hc);
	void Show();
};
#endif // !_GOLF_H_
