#include <iostream>
#include <fstream>
#include "basic.h"
#include "student.h"
using namespace std;

void add(int ID) {
	int flag;
	int id;
	flag = src(2,ID);
	if (flag == 1) {
		cout << "学号已存在，请重新输入！\n";
		cin >> id;
		flag = src(2,id);
	}
	else {
		id = ID;
	}
	student* pt = new student[1000];
	ofstream fout("student_information.txt", ios::out | ios_base::app);
	for (int i = 0; i < 1000; i++) {
		string ch;
		cout << "请输入姓名<输入 @ 终止操作>: ";
		cin >> ch;
		if (ch != "@") {
			pt[i].ID = id;
			pt[i].name = ch;
			cout << "高等数学成绩: ";
			cin >> pt[i].sc_math;
			cout << "C++成绩: ";
			cin >> pt[i].sc_cpp;
			cout << "数据结构: ";
			cin >> pt[i].sc_ds;
			cout << "计算机网络: ";
			cin >> pt[i].sc_net;
			chk(pt[i]);
		}
		else {
			for (int j = 0; j < i; j++) {
				fout << "学号: " << pt[j].ID << endl;
				fout << "姓名: " << pt[j].name << endl;
				fout << "高等数学: " << pt[j].sc_math << endl;
				fout << "C++: " << pt[j].sc_cpp << endl;
				fout << "数据结构: " << pt[j].sc_ds << endl;
				fout << "计算机网络: " << pt[j].sc_net << endl;
				fout << "====================================" << endl;
			}
			break;
		}
	}
	fout.close();
	delete[] pt;
}