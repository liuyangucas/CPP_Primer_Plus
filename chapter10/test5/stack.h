#pragma once
#ifndef _STACK_H_
#define _STACK_H_
struct customer {
	char fullname[35];
	double payment;
};
typedef customer Item;
class Stack {
private:
	static const int MAX = 5;
	Item items[MAX];
	int top;
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item& item);
	bool pop(Item& item);
};
#endif // !_STACK_H_
