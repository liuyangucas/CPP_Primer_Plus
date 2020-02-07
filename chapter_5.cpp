#include<iostream>
#include<array>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

void sim_sum();
void step_times();
void sum_now();
void total_reward();
void sales();
void sales_2();
void car();
void str_cmp();
void str_cmp2();
void star();
int main() {
	star();
	return 0;
}

void sim_sum(){
	//ϰ��1����������֮���������ֵĺ�
	int min_num, max_num,res=0;
	cout << "����С˳������������\n";
	cout << "�����С�����֣�";
	cin >> min_num;
	cout << "����ϴ�����֣�";
	cin >> max_num;
	for (int i = min_num; i <= max_num; i++)
		res += i;
	cout << "��Ϊ��" << res;
}

void step_times() {
	//ϰ��2������100��,ʹ��array���long double,100!����9.3326215443944e+157
	const int len = 101;
	array<long double, len> res;
	res[0] = res[1] = 1;
	for (int i = 2; i < len; i++)
		res[i] = i * res[i - 1];
	cout << res.back() << endl;
}

void sum_now() {
	//ϰ��3��ÿ����һ�����֣����㵽ĿǰΪֹ�����ֺͣ�����0�������ʱֹͣ��
	int num,res=0;
	const int qt_num = 0;
	cout << "����һ�����֣�����Ϊ0ʱֹͣ��";
	cin>>num;
	while (num != qt_num) {
		res += num;
		cout << "����һ�����֣�����Ϊ0ʱֹͣ��";
		cin>>num;
	}
	cout << "���ֺ�Ϊ��" << res << endl;
}

void total_reward() {
	//ϰ��4���Ƚϵ����͸���������Ϊ10%������Ϊ5%������Ͷ��Ϊ100;
	const double dl = 0.1;
	const double fl = 0.05;
	double Daphne = 100, Cleo = 100,base=100;
	int year = 0;
	do {
		Daphne = Daphne + base * dl;
		Cleo = Cleo + Cleo * fl;
		year++;
	} while (Cleo <= Daphne);
	cout << "��Ҫ" << year << "�긴�����泬������\n";
	cout << "��ʱ�������ʲ�Ϊ��" << Cleo << "   �������ʲ�Ϊ��" << Daphne << endl;
}

void sales() {
	//ϰ��5
	const int len = 12;
	string Month[len] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aut","Sep","Oct","Nov","Dec" };
	int sale[len];
	int res = 0;
	cout << "����ÿ���µ�����\n";
	for (auto i = 0; i < len; i++) {
		cout << "����" << Month[i] << "��������";
		cin >> sale[i];
		res += sale[i];
	}
	cout << "ȫ��������Ϊ��" << res;
}

void sales_2() {
	//ϰ��6
	const int len = 12;
	const int year = 3;
	string Month[len] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aut","Sep","Oct","Nov","Dec" };
	int sale[year][len];
	int res[year] = {0,0,0};
	int total = 0;
	cout << "����ÿ���µ�����\n";
	for (auto i = 0; i < year; i++) {
		cout << "���������" << i + 1 << "���������\n";
		for (auto j = 0; j < len; j++) {
			cout << "����" << Month[j] << "��������";
			cin >> sale[i][j];
			res[i] += sale[i][j];
		}
		total += res[i];
		cout << "��" << i + 1 << "���������Ϊ��" << res[i] << endl;
	}
	cout << "����������Ϊ��" << total;
}

void car() {
	//ϰ��7,�Ƚ����ṹ�壬����Ϊ�����̺��������
	struct car {
		string brand;
		int year;
	};
	int num;
	cout << "��Ҫ��¼����������";
	cin >> num;
	car* p = new car[num];
	for (auto i = 0; i < num; i++) {
		cout << "�����" << i + 1 << "��������Ϣ��\n";
		cout << "����Ʒ��Ϊ��";
		cin.ignore();//��һ��cin����������һ���س�����getline�������ȡ�ûس����������Ҫ��cin.ignore()������档
		getline(cin,p[i].brand);
		cout << "�����������Ϊ��";
		cin >> p[i].year;
	}
	cout << "����Ϊ������Ϣ��\n";
	for (auto i = 0; i < num; i++) {
		cout << p[i].year << "		" << p[i].brand<<endl;
	}
	delete[] p;
}

void str_cmp() {
	//ϰ��8�����뵥�ʣ�������Ϊdone��ֹͣ��ʹ��char[]��strcmp()����
	const int len = 100;
	int count = 0;
	char str[len];
	cout << "�����뵥�ʣ�����done�˳�\n";
	cin >> str;
	while (strcmp(str, "done")) {
		count++;
		cin >> str;
	}
	cout << "�ܹ�������" << count << "������" << endl;
}

void str_cmp2() {
	//ϰ��9�����뵥�ʣ�������Ϊdone��ֹͣ��string����
	int count = 0;
	const string eof = "done";
	string str;
	cout << "�����뵥�ʣ�����done�˳�\n";
	cin >> str;
	while (str != eof) {
		count++;
		cin >> str;
	}
	cout << "�ܹ�������" << count << "������" << endl;
}

void star() {
	//ϰ��10
	int num;
	cout << "������������";
	cin >> num;
	for (auto i = 0; i < num; i++) {
		for (auto j = num-1; j >=0; j--) {
			if (j > i)
				cout << ".";
			else
				cout << "*";
		}
		cout << endl;
	}
}