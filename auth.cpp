#include <iostream>
#include "basic.h"
using namespace std;

int auth(int ID, int pswd) {
	if (ID == 202001 && pswd == 123456) {
		cout << "\n====== ��ӭ��ʦ "
			<< ID << " ����! ======\n";
		return 0;
	}
	else if (ID == 202002 && pswd == 123456) {
		cout << "\n====== ��ӭѧ�� "
			<< ID << " ����! ======\n";
		return 0;
	}
	else {
		cout << "�˻��������������������룡\n";
		return -1;
	}
}