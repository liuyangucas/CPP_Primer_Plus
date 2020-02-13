#include<iostream>
#include<string>
using namespace std;
const int ArSize = 10;
void strcount(const string str);
int main() {
	string str;
	cout << "Enter a line:\n";
	getline(cin, str);
	while (cin) {
		if (str == "")
			break;
		strcount(str);
		cout << "Enter next line (empty line to quit): \n";
		getline(cin, str);
	}
	cout << "Bye\n";
	return 0;
}

void strcount(const string str) {
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\" contains ";
	for (auto i = 0; i < str.size(); i++) {
		if (str[i] == ' ')
			continue;
		count++;
	}
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}
