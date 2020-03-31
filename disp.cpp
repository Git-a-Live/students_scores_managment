#include <iostream>
#include <fstream>
#include <string>
#include "student.h"
using namespace std;

void disp() {
	ifstream fin;
	fin.open("student_information.txt");
	string str;
	while (fin.good()) {
		getline(fin, str);
		cout << str << endl;
	}
}