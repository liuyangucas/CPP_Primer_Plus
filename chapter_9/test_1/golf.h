#pragma once
#ifndef  GOLF_H_
#define GOLF_H_H
const int len = 40;

struct golf {
	char fullname[len];
	int handicap;
};

void setgolf(golf& g, const char* name, int hc);
int setgolf(golf& g);
void handicap(golf& g, int hc);
void showgolf(const golf& g);
#endif // ! GOLF_H_
