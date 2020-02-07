#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<array>
using namespace std;

void show_case();
void show_case2();
void str_cat();
void Snack();
void Snack2();
void Pizza();
void Pizza_new();
void Snack_new();
void race();
void race_new();

int main() {
	//race_new();
	return 0;
}

void show_case() {
	//习题1
	const int len = 20;
	cout << "what is your first name:\n";
	char first_name[len];
	cin.getline(first_name, len).get();
	cout << "what is your last name:\n";
	char last_name[len];
	cin.getline(last_name, len).get();
	cout << "what grade do you deserve:\n";
	char grade;
	cin.get(grade).get();
	grade = grade + 1;
	cout << "what is your age:\n";
	int age;
	cin >> age;
	cout << "Name: " << last_name << "," << first_name << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;
}

void show_case2() {
	//习题2使用string
	cout << "what is your first name:\n";
	string first_name;
	getline(cin, first_name);
	cout << "what is your last name:\n";
	string last_name;
	getline(cin, last_name);
	cout << "what grade do you deserve:\n";
	char grade;
	cin.get(grade).get();
	grade = grade + 1;
	cout << "what is your age:\n";
	int age;
	cin >> age;
	cout << "Name: " << last_name << "," << first_name << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;
}

void str_cat() {
	//习题3，拼接字符串
	//注意，c++11以后的版本中，为防止内存溢出，使用strcat_s取代strcat
	const int len = 20;
	char first_name[len], last_name[len];
	cout<<"Enter your first name: ";
	cin.getline(first_name, len);
	cout << "Enter your last name: ";
	cin.getline(last_name, len);
	strcat_s(last_name, ",");
	strcat_s(last_name, first_name);
	cout << "Here is your information: " << last_name << endl;
}

void Snack() {
	//习题5结构体，初始化与定义结构体同时进行
	struct CandyBar {
		string brand;
		double weight;
		int heat;
	} snack = { "Mocha Munch",2.3,350 };
	//CandyBar snack = { "Mocha Munch",2.3,350 };
	cout << "Brand: " << snack.brand << endl;
	cout << "Weight: " << snack.weight << endl;
	cout << "Heat: " << snack.heat << endl;
}

void Snack2() {
	//习题6结构体数组
	const int num = 3;
	struct CandyBar {
		string brand;
		double weight;
		int heat;
	};
	CandyBar snack[num] = { { "Mocha Munch",2.3,350 },{"Orio",3.0,500},{"Pink",0.2,100} };
	for (auto i = 0; i < num; i++) {
		cout << "Brand: " << snack[i].brand << endl;
		cout << "Weight: " << snack[i].weight << endl;
		cout << "Heat: " << snack[i].heat << endl;
		cout << endl;
	}
	
}

void Pizza() {
	//习题7
	struct info {
		string brand;
		double len;
		double weight;
	};
	info william;
	cout << "Enter the brand name: ";
	getline(cin, william.brand);
	cout << "Enter the len of pizza: ";
	cin >> william.len;
	cout << "Enter the weight: ";
	cin >> william.weight;
	cout << endl << "the brand info is as following: " << endl;
	cout << "Brand: " << william.brand << "  len: " << william.len << "  weight: " << william.weight;
}

void Pizza_new() {
	//习题8使用动态内存分配
	struct info {
		string brand;
		double len;
		double weight;
	};
	info *william = new info;
	cout << "Enter the brand name: ";
	getline(cin, william->brand);
	cout << "Enter the len of pizza: ";
	cin >> william->len;
	cout << "Enter the weight: ";
	cin >> william->weight;
	cout << endl << "the brand info is as following: " << endl;
	cout << "Brand: " << william->brand << "  len: " << william->len << "  weight: " << william->weight<<endl;
	delete william;
	cout << "release the memory";
}

void Snack_new() {
	//习题9动态分配结构体数组
	const int num = 3;
	struct CandyBar {
		string brand;
		double weight;
		int heat;
	};
	CandyBar* p = new CandyBar[num];
	//多种方式赋值，注意，指针定位下标
	*p = { "Mocha Munch",2.3,350 };
	*(p+1) = { "Orio",3.0,500 };
	p[2] = { "Pink",0.2,100 };
	for (auto i = 0; i < num; i++) {
		cout << "Brand: " << p[i].brand << endl;
		cout << "Weight: " << p[i].weight << endl;
		cout << "Heat: " << p[i].heat << endl;
		cout << endl;
	}
	delete[] p;
	cout << endl << "释放内存\n";
}

void race() {
	//习题10，vector和array
	const int len = 3;
	vector<double> vi(len);
	double res = 0;
	cout << "输入3次成绩：" << endl;
	for (auto i = 0; i < len; i++) {
		cin >> vi.at(i);
		res += vi[i];
	}
	cout << "平均成绩为：" << res / 3.0 << endl;
}

void race_new() {
	//使用动态内存管理
	vector<double>* vi = new vector<double>(3);
	double res = 0;
	for (auto i = 0; i < 3; i++) {
		cin >> (*vi)[i];
		res += (*vi)[i];
	}
	cout << res / 3.0 << endl;
	
}
