#include<iostream>
#include<string>
#include"person.h"
using namespace std;
int main() {
	Person One;
	Person Two("Smy");
	Person Three("Dimwwidy", "Sam");
	Two.Show();
	Three.FormalShow();
	return 0;
}