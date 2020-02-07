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
	//习题1，计算两数之间所有数字的和
	int min_num, max_num,res=0;
	cout << "按大小顺序输入两个数\n";
	cout << "输入较小的数字：";
	cin >> min_num;
	cout << "输入较大的数字：";
	cin >> max_num;
	for (int i = min_num; i <= max_num; i++)
		res += i;
	cout << "和为：" << res;
}

void step_times() {
	//习题2，计算100！,使用array类和long double,100!等于9.3326215443944e+157
	const int len = 101;
	array<long double, len> res;
	res[0] = res[1] = 1;
	for (int i = 2; i < len; i++)
		res[i] = i * res[i - 1];
	cout << res.back() << endl;
}

void sum_now() {
	//习题3，每输入一个数字，计算到目前为止的数字和，输入0或非数字时停止。
	int num,res=0;
	const int qt_num = 0;
	cout << "输入一个数字，输入为0时停止：";
	cin>>num;
	while (num != qt_num) {
		res += num;
		cout << "输入一个数字，输入为0时停止：";
		cin>>num;
	}
	cout << "数字和为：" << res << endl;
}

void total_reward() {
	//习题4，比较单利和复利，单利为10%，复利为5%，基础投资为100;
	const double dl = 0.1;
	const double fl = 0.05;
	double Daphne = 100, Cleo = 100,base=100;
	int year = 0;
	do {
		Daphne = Daphne + base * dl;
		Cleo = Cleo + Cleo * fl;
		year++;
	} while (Cleo <= Daphne);
	cout << "需要" << year << "年复利收益超过单利\n";
	cout << "此时复利的资产为：" << Cleo << "   单利的资产为：" << Daphne << endl;
}

void sales() {
	//习题5
	const int len = 12;
	string Month[len] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aut","Sep","Oct","Nov","Dec" };
	int sale[len];
	int res = 0;
	cout << "输入每个月的销量\n";
	for (auto i = 0; i < len; i++) {
		cout << "输入" << Month[i] << "的销量：";
		cin >> sale[i];
		res += sale[i];
	}
	cout << "全年总销量为：" << res;
}

void sales_2() {
	//习题6
	const int len = 12;
	const int year = 3;
	string Month[len] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aut","Sep","Oct","Nov","Dec" };
	int sale[year][len];
	int res[year] = {0,0,0};
	int total = 0;
	cout << "输入每个月的销量\n";
	for (auto i = 0; i < year; i++) {
		cout << "现在输入第" << i + 1 << "年的销量：\n";
		for (auto j = 0; j < len; j++) {
			cout << "输入" << Month[j] << "的销量：";
			cin >> sale[i][j];
			res[i] += sale[i][j];
		}
		total += res[i];
		cout << "第" << i + 1 << "年的总销量为：" << res[i] << endl;
	}
	cout << "三年总销量为：" << total;
}

void car() {
	//习题7,先建立结构体，内容为生产商和生产年份
	struct car {
		string brand;
		int year;
	};
	int num;
	cout << "需要记录多少辆车？";
	cin >> num;
	car* p = new car[num];
	for (auto i = 0; i < num; i++) {
		cout << "输入第" << i + 1 << "辆车的信息：\n";
		cout << "车的品牌为：";
		cin.ignore();//上一个cin操作保存了一个回车符，getline函数会读取该回车符，因此需要用cin.ignore()清除缓存。
		getline(cin,p[i].brand);
		cout << "车的生产年份为：";
		cin >> p[i].year;
	}
	cout << "以下为车辆信息：\n";
	for (auto i = 0; i < num; i++) {
		cout << p[i].year << "		" << p[i].brand<<endl;
	}
	delete[] p;
}

void str_cmp() {
	//习题8，输入单词，若输入为done则停止；使用char[]和strcmp()方法
	const int len = 100;
	int count = 0;
	char str[len];
	cout << "请输入单词，输入done退出\n";
	cin >> str;
	while (strcmp(str, "done")) {
		count++;
		cin >> str;
	}
	cout << "总共输入了" << count << "个单词" << endl;
}

void str_cmp2() {
	//习题9，输入单词，若输入为done则停止；string方法
	int count = 0;
	const string eof = "done";
	string str;
	cout << "请输入单词，输入done退出\n";
	cin >> str;
	while (str != eof) {
		count++;
		cin >> str;
	}
	cout << "总共输入了" << count << "个单词" << endl;
}

void star() {
	//习题10
	int num;
	cout << "请输入行数：";
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