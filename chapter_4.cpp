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
	//ϰ��1
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
	//ϰ��2ʹ��string
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
	//ϰ��3��ƴ���ַ���
	//ע�⣬c++11�Ժ�İ汾�У�Ϊ��ֹ�ڴ������ʹ��strcat_sȡ��strcat
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
	//ϰ��5�ṹ�壬��ʼ���붨��ṹ��ͬʱ����
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
	//ϰ��6�ṹ������
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
	//ϰ��7
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
	//ϰ��8ʹ�ö�̬�ڴ����
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
	//ϰ��9��̬����ṹ������
	const int num = 3;
	struct CandyBar {
		string brand;
		double weight;
		int heat;
	};
	CandyBar* p = new CandyBar[num];
	//���ַ�ʽ��ֵ��ע�⣬ָ�붨λ�±�
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
	cout << endl << "�ͷ��ڴ�\n";
}

void race() {
	//ϰ��10��vector��array
	const int len = 3;
	vector<double> vi(len);
	double res = 0;
	cout << "����3�γɼ���" << endl;
	for (auto i = 0; i < len; i++) {
		cin >> vi.at(i);
		res += vi[i];
	}
	cout << "ƽ���ɼ�Ϊ��" << res / 3.0 << endl;
}

void race_new() {
	//ʹ�ö�̬�ڴ����
	vector<double>* vi = new vector<double>(3);
	double res = 0;
	for (auto i = 0; i < 3; i++) {
		cin >> (*vi)[i];
		res += (*vi)[i];
	}
	cout << res / 3.0 << endl;
	
}
