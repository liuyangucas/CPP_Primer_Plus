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
	//习题1,输入字符，遇到@退出，并将字母大小写翻转
	const char eof = '@';
	const int len = 100;
	char res[len] = "";
	char ch;
	for (int i = 0; i < len; i++) {
		cout << "输入一个字符，输入@退出：";
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
	cout << "字符串为：" << res << endl;
}

void donation() {
	//习题2
	const int len = 10;
	vector<int> res;
	int temp,count=0;
	double avg = 0;
	for (int i = 0; i < len; i++) {
		cout << "输入数值：";
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
	cout << "平均值为:" << avg << ",大于平均值的数有:" << count << "个" << endl;
}

void menu() {
	//习题4switch语句
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
	//习题4,神烦的题目，又臭又长
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
	//习题5
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
	cout << "输入捐赠者数量：";
	cin >> len;
	cin.ignore();
	patrons* p = new patrons[len];
	for (auto i = 0; i < len; i++) {
		cout << "输入捐赠者" << i + 1 << "的姓名：";
		getline(cin, p[i].name);
		cout << "输入捐赠的数额：";
		cin >> p[i].num;
		cin.ignore();
	}
	int count = 0;
	cout <<endl<< "以下为重要捐赠者:\n";
	for (auto i = 0; i < len; i++) {
		if (p[i].num > 10000) {
			count++;
			cout << "姓名：" << p[i].name << "	数额：" << p[i].num << endl;
		}
	}
	if (count == 0)
		cout << "None";
	count = 0;
	cout <<endl<< "以下为捐赠者:\n";
	for (auto i = 0; i < len; i++) {
		if (p[i].num <= 10000) {
			count++;
			cout << "姓名：" << p[i].name << "	数额：" << p[i].num << endl;
		}
	}
	if (count == 0)
		cout << "None";
}

void word() {
	//习题7
	string eof = "q";
	vector<string> list;
	string input;
	cout << "输入单词：\n";
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
	cout << "共有" << list.size() << "个单词，其中\n";
	cout << "元音开头的有" << vowel << "个\n";
	cout << "辅音开头的有" << consonant << "个\n";
	cout << "非英文单词有" << other << "个\n";
}

void read_txt() {
	//习题8
	string path = "./sample.txt";
	ifstream infile;
	infile.open(path);
	if (!infile.is_open()) {
		cout << "无法打开文件，请检查文件路径" << endl;
		exit(EXIT_FAILURE);
	}
	int count = 0;
	char value;
	infile >> value;
	while (infile.good()) {
		count++;
		infile >> value;
	}
	cout << "文件中共有" << count << "个字符\n";
	infile.close();
}

void patron_list() {
	//习题9，烦死了，注意文件流读写的时候，也需要用infile.ignore()方法清除缓存
	struct patrons {
		string name;
		double num;
	};
	string path = "./patron_list.txt";
	ifstream infile;
	infile.open(path);
	if (!infile.is_open()) {
		cout << "无法打开文件，请检查文件路径" << endl;
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
	cout << endl << "以下为重要捐赠者:\n";
	for (auto i = 0; i < len; i++) {
		if (p[i].num > 10000) {
			count++;
			cout << "姓名：" << p[i].name << "	数额：" << p[i].num << endl;
		}
	}
	if (count == 0)
		cout << "None";
	count = 0;
	cout << endl << "以下为捐赠者:\n";
	for (auto i = 0; i < len; i++) {
		if (p[i].num <= 10000) {
			count++;
			cout << "姓名：" << p[i].name << "	数额：" << p[i].num << endl;
		}
	}
	if (count == 0)
		cout << "None";

}