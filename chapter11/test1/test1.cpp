#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<ctime>
#include"vector.h"
int main() {
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	ofstream outFile;
	string path = "./random_walk.txt";
	outFile.open(path);

	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter the target distance, enter 'q' to quit:  ";
	while (cin >> target) {
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;
		outFile << "Target Distance: " << target << ",  " << "Step Size: " << dstep << endl;
		while (result.magval() < target) {
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
			outFile << steps << ": " << result << endl;
		}
		cout << "After " << steps << " steps, the subject has the following location: \n";
		cout << result << endl;

		outFile<<"After " << steps << " steps, the subject has the following location: \n";
		outFile << result << endl;

		result.polar_mode();
		cout << " or\n" << result << endl;
		outFile << " or\n" << result << endl;

		cout << "Average outward distance per step = " << result.magval() / steps << endl;
		outFile << "Average outward distance per step = " << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter the target distance, enter 'q' to quit:  ";
	}
	cout << "Bye! \n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}