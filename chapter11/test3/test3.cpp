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
	int times;
	unsigned long max_steps = 0, min_steps = ULONG_MAX, avg_steps = 0;
	cout << "Enter the target distance, enter 'q' to quit:  ";
	while (cin >> target) {
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;
		outFile << "Target Distance: " << target << ",  " << "Step Size: " << dstep << endl;
		cout << "Enter the test times: ";
		cin >> times;
		for (auto i = 0; i < times; i++) {
			while (result.magval() < target) {
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}
			if (steps > max_steps)
				max_steps = steps;
			if (steps < min_steps)
				min_steps = steps;
			avg_steps += steps;
			cout << "After " << steps << " steps, the subject has the following location: \n";
			cout << result << endl;
			result.polar_mode();
			cout << " or\n" << result << endl;
			steps = 0;
			result.reset(0.0, 0.0);
		}
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter the target distance, enter 'q' to quit:  ";
	}
	cout << "Max steps is: " << max_steps << endl;
	cout << "Min steps is: " << min_steps << endl;
	cout << "Average steps is: " << avg_steps / times << endl;
	cout << "Bye! \n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}
