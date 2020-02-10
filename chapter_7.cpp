#include<iostream>
#include<vector>
#include<cctype>
#include<string>
#include<cstring>
using namespace std;
void h_mean();
//习题2
vector<double> input();
void show(vector<double>);
void show_avg(vector<double>);
/***************************************************************************************/
//习题3
struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;

};
void show_box_value(box box_1);
void show_box_ref(box *box_1);
/***************************************************************************************/
//习题4
void lottery();
/***************************************************************************************/
//习题5
int step(int);
/***************************************************************************************/
//习题6
int Fill_array(double arr[], int len);
void Show_array(const double arr[], int len);
void Reverse_array(double arr[], int len);
/***************************************************************************************/
//习题7
double* Fill_array_pt(double* begin, double* end);
void Show_array_pt(double arr[], double* end);
void Reverse_array_pt(double arr[], double* end);
/***************************************************************************************/
//习题8
const vector<string> season = { "Spring","Summer","Fall","Winter" };
void Fill_season(vector<double> *pa);
void Show_season(vector<double> da);
/***************************************************************************************/
//习题9
struct student {
	char Fullname[30];
	char hobby[30];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student pa);
void display2(const student* pa);
void display3(const student pa[], int n);
/***************************************************************************************/
//习题10
double my_add(double, double);
double caculate(double, double, double (*pf)(double, double));
double caculate2(double, double, double fun(double,double));
int main() {
	cout << "输入两个值：\n";
	double a, b;
	cin >> a >> b;
	cout << endl << caculate(a, b, my_add)<<endl;
	cout << caculate2(a, b, my_add);
	return 0;
}




void h_mean() {
	//习题1
	double x, y,res=0;
	cout << "输入两个数，计算调和平均值：\n";
	while (cin>>x>>y) {
		if (x == 0 || y == 0)
			break;
		res = 2.0 * x * y / (x + y);
		cout << "调和平均值为：" << res << endl;
		cout << "输入两个数，计算调和平均值：\n";
	}
}
/***************************************************************************************/
//习题2
vector<double> input() {
	vector<double> res;
	cout << "输入成绩(最多10组)\n";
	double temp;
	int count = 0;
	while (cin >> temp) {
		if (count >= 10) {
			return res;
			break;
		}
		res.push_back(temp);
		count++;
	}
	return res;
}
void show(vector<double> res) {
	cout << "所有成绩为：\n";
	for (double x : res)
		cout << x << "	";
}
void show_avg(vector<double> res) {
	double avg = 0;
	int len = res.size();
	for (double x : res)
		avg += x;
	cout << "平均值为：" << avg / len;
}
/***************************************************************************************/
//习题3
void show_box_value(box box_1) {
	cout << "制造商为：" << box_1.maker << endl;
	cout << "长宽高分别为：" << box_1.length << " " << box_1.width << " " << box_1.height << endl;
	cout << "体积为：" << box_1.volume << endl;
}
void show_box_ref(box* box_1) {
	cout << "制造商为：" << box_1->maker << endl;
	cout << "长宽高分别为：" << box_1->length << " " << box_1->width << " " << box_1->height << endl;
	box_1->volume = box_1->height * box_1->length * box_1->width;
	cout << "体积为：" << box_1->volume << endl;
}
/***************************************************************************************/
//习题4,47选5 * 27选1
void lottery() {
	long double res = 1.0;
	int picks = 5;
	int n = 47;
	for (; picks > 0; n--, picks--) {
		res = res * n / picks;
	}
	res *= 27;
	res = 1 / res;
	cout << "中奖概率为" << res;
}
/***************************************************************************************/
//习题5阶乘
int step(int x) {
	if (x <= 0)
		return 1;
	return x * step(x - 1);
}
/***************************************************************************************/
//习题6
int Fill_array(double arr[], int len) {
	cout << "输入数字：\n";
	double temp;
	int count = 0;
	while (cin >> temp && count<len) {
		arr[count] = temp;
		count++;
	}
	return count;
}

void Show_array(const double arr[], int len) {
	for (int i = 0; i < len; i++)
		cout << arr[i] << "  ";
}
void Reverse_array(double arr[], int len) {
	int l = 0, r = len - 1;
	while (l < r) {
		arr[l] += arr[r];
		arr[r] = arr[l] - arr[r];
		arr[l] = arr[l] - arr[r];
		l++;
		r--;
	}
	for (auto i = 0; i < len; i++)
		cout << arr[i] << "  ";
}
/***************************************************************************************/
//习题7，题目描述真的是非常不清晰，就按照自己的理解来写了。。
double* Fill_array_pt(double* begin, double* end) {
	cout << "输入数字：\n";
	double* pt;
	double temp;
	for (pt = begin; pt != end && cin>>temp; pt++) {
		*pt = temp;
	}
	return pt;
}
void Show_array_pt(double arr[], double* end) {
	double* pt = arr;
	while (pt != end) {
		cout << *pt << "  ";
		pt++;
	}
}
void Reverse_array_pt(double arr[], double* end) {
	double* l = arr;
	double* r = end - 1;
	while (l < r) {
		double temp = *l;
		*l = *r;
		*r = temp;
		l++;
		r--;
	}
	double* pt = arr;
	while (pt != end) {
		cout << *pt << "  ";
		pt++;
	}
}
/***************************************************************************************/
//习题8，不使用array类，可以考虑用vector或数组，此处为了简单，用vector重写.
void Fill_season(vector<double>* pa) {
	for (auto i = 0; i < season.size(); i++) {
		cout << "Enter " << season[i] << "'s expense: ";
		double temp;
		cin >> temp;
		pa->push_back(temp);
	}
}
void Show_season(vector<double> da) {
	for (auto i = 0; i < season.size(); i++) {
		cout << season[i] << "'s expense is: " << da[i] << endl;
	}
}
/***************************************************************************************/
//习题9
int getinfo(student pa[], int n) {
	//输入结构信息，返回计数值
	cout << "输入至多" << n << "个学生的信息:\n";
	int count=0;
	for (int i = 0; i < n; i++) {
		cout << "输入学生姓名：";
		cin.getline(pa[i].Fullname, 30);
		cout << "输入爱好：";
		cin.getline(pa[i].hobby, 30);
		cout << "输入等级：";
		cin >> pa[i].ooplevel;
		cin.ignore();
		count++;
	}
	cout << "number is" << count;
	return count;
}

void display1(student pa) {
	cout << "姓名：" << pa.Fullname << "  爱好：" << pa.hobby << "  等级：" << pa.ooplevel << endl;
}
void display2(const student* pa) {
	cout << "姓名：" << pa->Fullname << "  爱好：" << pa->hobby << "  等级：" << pa->ooplevel << endl;
}
void display3(const student pa[], int n) {
	for (auto i = 0; i < n; i++) {
		cout << "姓名：" << pa[i].Fullname << "  爱好：" << pa[i].hobby << "  等级：" << pa[i].ooplevel << endl;
	}
}

/***************************************************************************************/
//习题10
double my_add(double x, double y) {
	return x + y;
}
double caculate(double a, double b, double (*pf)(double, double)) {
	//a和b传递给pf函数，返回和
	double temp = (*pf)(a, b);
	return temp;
}
double caculate2(double a, double b, double fun(double, double)) {
	double temp = fun(a, b);
	return temp;
}