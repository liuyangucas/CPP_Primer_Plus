#include<iostream>
#include"list.h"
using namespace std;
List::List() {
	top = 0;
}
bool List::isempty() const{
	return top == 0;
}
bool List::isfull() const{
	return top == MAX;
}
bool List::add(const Item& item) {
	if (top < MAX) {
		items[top++] = item;
		return true;
	}
	else return false;
}
void List::visit(void(*pf)(Item& item)) {
	for (auto i = 0; i < top; i++) {
		pf(items[i]);
	}
}
void List::show() const {
	for (auto i = 0; i < top; i++)
		cout << items[i] << " ";
	cout << endl;
}
void minus1(Item& item) {
	item -= 1;
}