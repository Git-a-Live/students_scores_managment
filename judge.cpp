#include <iostream>
#include "basic.h"
#include "student.h"
using namespace std;

void judge(student stud, char jdg) {
	if (jdg == 'N' || jdg == 'n') {
		cout << "��Ϣ�ѱ��棡\n";
	}
	else if (jdg == 'Y' || jdg == 'y') {
		cout << "�������޸ĵ���Ŀ��: \n"
			<< "[1]ѧ�� " << "[2]���� " << "[3]�ߵ���ѧ "
			<< "[4]C++ " << "[5]���ݽṹ " << "[6]���������\n";
		int item;
		cin >> item;
		modify(stud, item);
	}
	else {
		cout << "δ֪�������������!\n";
		char jdg;
		cin >> jdg;
		judge(stud, jdg);
	}
}