#include <iostream>
#include "basic.h"
#include "student.h"
using namespace std;

void chk(student stud) {
	cout << "\n======== ��˶���Ϣ ========\n"
		<< "ѧ��: " << stud.ID << endl
		<< "����: " << stud.name << endl
		<< "�ߵ���ѧ�ɼ�: " << stud.sc_math << endl
		<< "C++������Ƴɼ�: " << stud.sc_cpp << endl
		<< "���ݽṹ�ɼ�: " << stud.sc_ds << endl
		<< "���������ɼ�: " << stud.sc_net << endl;
	cout << "\n�Ƿ����� Y/N: ";
	char jdg;
	cin >> jdg;
	judge(stud, jdg);
}