#pragma once
#ifndef _LIST_H_
#define _LIST_H_
//以浮点型为例
typedef double Item;
class List {
private:
	enum{MAX=10};
	Item items[MAX];
	int top = 0;
public:
	List();
	bool isempty() const;
	bool isfull() const;
	bool add(const Item& item);
	void visit(void(*pf)(Item& item));
	void show() const;
};
void minus1(Item& item);
#endif // !_LIST_H_
