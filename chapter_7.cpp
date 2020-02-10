#include<iostream>
#include<vector>
#include<cctype>
#include<string>
#include<cstring>
using namespace std;
void h_mean();
//ϰ��2
vector<double> input();
void show(vector<double>);
void show_avg(vector<double>);
/***************************************************************************************/
//ϰ��3
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
//ϰ��4
void lottery();
/***************************************************************************************/
//ϰ��5
int step(int);
/***************************************************************************************/
//ϰ��6
int Fill_array(double arr[], int len);
void Show_array(const double arr[], int len);
void Reverse_array(double arr[], int len);
/***************************************************************************************/
//ϰ��7
double* Fill_array_pt(double* begin, double* end);
void Show_array_pt(double arr[], double* end);
void Reverse_array_pt(double arr[], double* end);
/***************************************************************************************/
//ϰ��8
const vector<string> season = { "Spring","Summer","Fall","Winter" };
void Fill_season(vector<double> *pa);
void Show_season(vector<double> da);
/***************************************************************************************/
//ϰ��9
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
//ϰ��10
double my_add(double, double);
double caculate(double, double, double (*pf)(double, double));
double caculate2(double, double, double fun(double,double));
int main() {
	cout << "��������ֵ��\n";
	double a, b;
	cin >> a >> b;
	cout << endl << caculate(a, b, my_add)<<endl;
	cout << caculate2(a, b, my_add);
	return 0;
}




void h_mean() {
	//ϰ��1
	double x, y,res=0;
	cout << "�������������������ƽ��ֵ��\n";
	while (cin>>x>>y) {
		if (x == 0 || y == 0)
			break;
		res = 2.0 * x * y / (x + y);
		cout << "����ƽ��ֵΪ��" << res << endl;
		cout << "�������������������ƽ��ֵ��\n";
	}
}
/***************************************************************************************/
//ϰ��2
vector<double> input() {
	vector<double> res;
	cout << "����ɼ�(���10��)\n";
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
	cout << "���гɼ�Ϊ��\n";
	for (double x : res)
		cout << x << "	";
}
void show_avg(vector<double> res) {
	double avg = 0;
	int len = res.size();
	for (double x : res)
		avg += x;
	cout << "ƽ��ֵΪ��" << avg / len;
}
/***************************************************************************************/
//ϰ��3
void show_box_value(box box_1) {
	cout << "������Ϊ��" << box_1.maker << endl;
	cout << "����߷ֱ�Ϊ��" << box_1.length << " " << box_1.width << " " << box_1.height << endl;
	cout << "���Ϊ��" << box_1.volume << endl;
}
void show_box_ref(box* box_1) {
	cout << "������Ϊ��" << box_1->maker << endl;
	cout << "����߷ֱ�Ϊ��" << box_1->length << " " << box_1->width << " " << box_1->height << endl;
	box_1->volume = box_1->height * box_1->length * box_1->width;
	cout << "���Ϊ��" << box_1->volume << endl;
}
/***************************************************************************************/
//ϰ��4,47ѡ5 * 27ѡ1
void lottery() {
	long double res = 1.0;
	int picks = 5;
	int n = 47;
	for (; picks > 0; n--, picks--) {
		res = res * n / picks;
	}
	res *= 27;
	res = 1 / res;
	cout << "�н�����Ϊ" << res;
}
/***************************************************************************************/
//ϰ��5�׳�
int step(int x) {
	if (x <= 0)
		return 1;
	return x * step(x - 1);
}
/***************************************************************************************/
//ϰ��6
int Fill_array(double arr[], int len) {
	cout << "�������֣�\n";
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
//ϰ��7����Ŀ��������Ƿǳ����������Ͱ����Լ��������д�ˡ���
double* Fill_array_pt(double* begin, double* end) {
	cout << "�������֣�\n";
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
//ϰ��8����ʹ��array�࣬���Կ�����vector�����飬�˴�Ϊ�˼򵥣���vector��д.
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
//ϰ��9
int getinfo(student pa[], int n) {
	//����ṹ��Ϣ�����ؼ���ֵ
	cout << "��������" << n << "��ѧ������Ϣ:\n";
	int count=0;
	for (int i = 0; i < n; i++) {
		cout << "����ѧ��������";
		cin.getline(pa[i].Fullname, 30);
		cout << "���밮�ã�";
		cin.getline(pa[i].hobby, 30);
		cout << "����ȼ���";
		cin >> pa[i].ooplevel;
		cin.ignore();
		count++;
	}
	cout << "number is" << count;
	return count;
}

void display1(student pa) {
	cout << "������" << pa.Fullname << "  ���ã�" << pa.hobby << "  �ȼ���" << pa.ooplevel << endl;
}
void display2(const student* pa) {
	cout << "������" << pa->Fullname << "  ���ã�" << pa->hobby << "  �ȼ���" << pa->ooplevel << endl;
}
void display3(const student pa[], int n) {
	for (auto i = 0; i < n; i++) {
		cout << "������" << pa[i].Fullname << "  ���ã�" << pa[i].hobby << "  �ȼ���" << pa[i].ooplevel << endl;
	}
}

/***************************************************************************************/
//ϰ��10
double my_add(double x, double y) {
	return x + y;
}
double caculate(double a, double b, double (*pf)(double, double)) {
	//a��b���ݸ�pf���������غ�
	double temp = (*pf)(a, b);
	return temp;
}
double caculate2(double a, double b, double fun(double, double)) {
	double temp = fun(a, b);
	return temp;
}