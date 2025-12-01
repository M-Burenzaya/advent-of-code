// day01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    cout << "Day 1 task\n";

	int dail_current = 50;
	int password = 0;

	cout << "Initial\t" << dail_current << "\n";

	ifstream file("input_task.txt");

	string line;

	while (file >> line)
	{
		char dir = line[0];
		string trimmed = line.substr(1);
		int distance = stoi(trimmed);


		if (dir == 'L') {
			dail_current -= distance;
			//cout << "LEFT TURN " << "\t" << trimmed << "\n";
		}
		else if (dir == 'R') {
			dail_current += distance;
			//cout << "RIGHT TURN " << "\t" << trimmed << "\n";
		}

		dail_current %= 100;

		if (dail_current < 0) {
			dail_current += 100;
		}

		if (dail_current == 0) {
			password++;
		}

		cout << dail_current << "\t" << distance << "\n";
	}

	cout << "\n\nPassword:\t" << password;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
