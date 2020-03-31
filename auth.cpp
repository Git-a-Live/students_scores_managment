#include <iostream>
#include "basic.h"
using namespace std;

int auth(int ID, int pswd) {
	if (ID == 202001 && pswd == 123456) {
		cout << "\n====== 欢迎教师 "
			<< ID << " 登入! ======\n";
		return 0;
	}
	else if (ID == 202002 && pswd == 123456) {
		cout << "\n====== 欢迎学生 "
			<< ID << " 登入! ======\n";
		return 0;
	}
	else {
		cout << "账户或密码有误，请重新输入！\n";
		return -1;
	}
}