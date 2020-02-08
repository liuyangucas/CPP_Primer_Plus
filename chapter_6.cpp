#include<iostream>
#include<vector>
#include<cctype>
#include<string>
#include<fstream>
using namespace std;

void show_char();
void donation();
void menu();
void BOP();
void tax();
void patron();
void word();
void read_txt();
void patron_list();
int main() {
	patron_list();
	return 0;
}

void show_char() {
	//ϰ��1,�����ַ�������@�˳���������ĸ��Сд��ת
	const char eof = '@';
	const int len = 100;
	char res[len] = "";
	char ch;
	for (int i = 0; i < len; i++) {
		cout << "����һ���ַ�������@�˳���";
		cin >> ch;
		if (ch == eof)
			break;
		if (isalpha(ch)) {
			if (islower(ch))
				ch = toupper(ch);
			else
				ch = tolower(ch);
		}
		res[i] = ch;
	}
	cout << "�ַ���Ϊ��" << res << endl;
}

void donation() {
	//ϰ��2
	const int len = 10;
	vector<int> res;
	int temp,count=0;
	double avg = 0;
	for (int i = 0; i < len; i++) {
		cout << "������ֵ��";
		cin >> temp;
		if (!cin) {
			avg /= (i * 1.0);
			cin.clear();
			break;
		}
		res.push_back(temp);
		avg += temp;
	}
	for (auto x : res) {
		if (x > avg)
			count++;
	}
	cout << "ƽ��ֵΪ:" << avg << ",����ƽ��ֵ������:" << count << "��" << endl;
}

void menu() {
	//ϰ��4switch���
	cout << "Please enter one of the following choice:\n";
	cout << "a) carnivore		b) pianist\nc) tree			d)game\n";
	char ch;
	cout << "input a choise,input q to quit\n";
	cin >> ch;
	while (ch!='q') {
		switch (ch) {
		case 'a':cout << "the label is carnivore\n";
			break;
		case 'b':cout << "the label is pianist\n";
			break;
		case 'c':cout << "the label is tree\n";
			break;
		case 'd':cout << "the label is game\n";
			break;
		default: cout<<"invalid input\n";
			break;
		}
		cin >> ch;
	}
}

void BOP() {
	//ϰ��4,�񷳵���Ŀ���ֳ��ֳ�
	struct bop {
		char fullname[20];
		char title[20];
		char bopname[20];
		int preference;
	};
	bop list[3] = { { "Lipman","doctor","danm",0 }, { "Hinto","PROF.","deeeep",2 }, {"yoshua","STUDENT","fool",1} };
	cout << "a) display by fullname	b) display by title\nc) display by bopname	d) display by bopname\nq) quit\n";
	char choice;
	cout << "enter a choice\n";
	cin >> choice;
	int num= sizeof(list) / sizeof(list[0]);
	while (choice != 'q') {
		if (choice == 'a') {
			for (int i = 0; i < num; i++)
				cout << list[i].fullname << endl;
		}
		else if (choice == 'b') {
			for (int i = 0; i < num; i++)
				cout << list[i].title << endl;
		}
		else if (choice == 'c') {
			for (int i = 0; i < num; i++)
				cout << list[i].bopname << endl;
		}
		else if (choice == 'd') {
			for (int i = 0; i < num; i++) {
				int pref = list[i].preference;
				switch (pref) {
				case 0:cout << list[i].fullname<<endl;
					break;
				case 1:cout << list[i].title<<endl;
					break;
				case 2:cout << list[i].bopname<<endl;
					break;
				}
			}
		}
		else cout << "invalid input\n";
		cin >> choice;
	}
}

void tax() {
	//ϰ��5
	double income;
	cout << "input the income: ";
	while (cin >> income) {
		double res = 0;
		if (income < 0)
			break;
		else if (income <= 5000) {
			res = 0;
			cout << "the tax is " << res << endl;
		}
		else if (income <= 15000) {
			res = (income - 5000) * 0.1;
			cout << "the tax is " << res << endl;
		}
		else if (income <= 35000) {
			res = 10000 * 0.1 + (income - 15000) * 0.15;
			cout << "the tax is " << res << endl;
		}
		else {
			res = 10000 * 0.1 + 20000 * 0.15 + (income - 35000) * 0.2;
			cout << "the tax is " << res << endl;
		}
	}
}

void patron() {
	struct patrons {
		string name;
		double num;
	};
	int len;
	cout << "���������������";
	cin >> len;
	cin.ignore();
	patrons* p = new patrons[len];
	for (auto i = 0; i < len; i++) {
		cout << "���������" << i + 1 << "��������";
		getline(cin, p[i].name);
		cout << "������������";
		cin >> p[i].num;
		cin.ignore();
	}
	int count = 0;
	cout <<endl<< "����Ϊ��Ҫ������:\n";
	for (auto i = 0; i < len; i++) {
		if (p[i].num > 10000) {
			count++;
			cout << "������" << p[i].name << "	���" << p[i].num << endl;
		}
	}
	if (count == 0)
		cout << "None";
	count = 0;
	cout <<endl<< "����Ϊ������:\n";
	for (auto i = 0; i < len; i++) {
		if (p[i].num <= 10000) {
			count++;
			cout << "������" << p[i].name << "	���" << p[i].num << endl;
		}
	}
	if (count == 0)
		cout << "None";
}

void word() {
	//ϰ��7
	string eof = "q";
	vector<string> list;
	string input;
	cout << "���뵥�ʣ�\n";
	cin >> input;
	while (input != eof) {
		list.push_back(input);
		cin >> input;
	}
	int vowel = 0, consonant = 0, other = 0;
	for (auto wd : list) {
		if (isalpha(wd[0])) {
			switch (tolower(wd[0])) {
			case ('a'):vowel++;
				break;
			case ('e'):vowel++;
				break;
			case ('i'):vowel++;
				break;
			case ('o'):vowel++;
				break;
			case ('u'):vowel++;
				break;
			default:consonant++;
				break;
			}
		}
		else other++;
	}
	cout << "����" << list.size() << "�����ʣ�����\n";
	cout << "Ԫ����ͷ����" << vowel << "��\n";
	cout << "������ͷ����" << consonant << "��\n";
	cout << "��Ӣ�ĵ�����" << other << "��\n";
}

void read_txt() {
	//ϰ��8
	string path = "./sample.txt";
	ifstream infile;
	infile.open(path);
	if (!infile.is_open()) {
		cout << "�޷����ļ��������ļ�·��" << endl;
		exit(EXIT_FAILURE);
	}
	int count = 0;
	char value;
	infile >> value;
	while (infile.good()) {
		count++;
		infile >> value;
	}
	cout << "�ļ��й���" << count << "���ַ�\n";
	infile.close();
}

void patron_list() {
	//ϰ��9�������ˣ�ע���ļ�����д��ʱ��Ҳ��Ҫ��infile.ignore()�����������
	struct patrons {
		string name;
		double num;
	};
	string path = "./patron_list.txt";
	ifstream infile;
	infile.open(path);
	if (!infile.is_open()) {
		cout << "�޷����ļ��������ļ�·��" << endl;
		exit(EXIT_FAILURE);
	}
	int len;
	infile >> len;
	infile.ignore();
	patrons* p = new patrons[len];
	for (auto i = 0; i < len; i++) {
		if (!infile.good())
			break;
		string d_name;
		getline(infile, d_name);
		double d_num;
		infile >> d_num;
		infile.ignore();
		p[i].name = d_name;
		p[i].num = d_num;
	}
	infile.close();
	int count = 0;
	cout << endl << "����Ϊ��Ҫ������:\n";
	for (auto i = 0; i < len; i++) {
		if (p[i].num > 10000) {
			count++;
			cout << "������" << p[i].name << "	���" << p[i].num << endl;
		}
	}
	if (count == 0)
		cout << "None";
	count = 0;
	cout << endl << "����Ϊ������:\n";
	for (auto i = 0; i < len; i++) {
		if (p[i].num <= 10000) {
			count++;
			cout << "������" << p[i].name << "	���" << p[i].num << endl;
		}
	}
	if (count == 0)
		cout << "None";

}