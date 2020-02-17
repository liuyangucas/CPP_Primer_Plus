#pragma once
#ifndef _PLORG_H_
#define _PLORG_H_
class Plorg {
private:
	char name[20];
	int CI;
public:
	Plorg();
	void Show() const;
	void SetCI(int ci);
	void NewPLG(const char* p);

};
#endif // !_PLORG_H_
