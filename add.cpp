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
		cout << "ѧ���Ѵ��ڣ����������룡\n";
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
		cout << "����������<���� @ ��ֹ����>: ";
		cin >> ch;
		if (ch != "@") {
			pt[i].ID = id;
			pt[i].name = ch;
			cout << "�ߵ���ѧ�ɼ�: ";
			cin >> pt[i].sc_math;
			cout << "C++�ɼ�: ";
			cin >> pt[i].sc_cpp;
			cout << "���ݽṹ: ";
			cin >> pt[i].sc_ds;
			cout << "���������: ";
			cin >> pt[i].sc_net;
			chk(pt[i]);
		}
		else {
			for (int j = 0; j < i; j++) {
				fout << "ѧ��: " << pt[j].ID << endl;
				fout << "����: " << pt[j].name << endl;
				fout << "�ߵ���ѧ: " << pt[j].sc_math << endl;
				fout << "C++: " << pt[j].sc_cpp << endl;
				fout << "���ݽṹ: " << pt[j].sc_ds << endl;
				fout << "���������: " << pt[j].sc_net << endl;
				fout << "====================================" << endl;
			}
			break;
		}
	}
	fout.close();
	delete[] pt;
}