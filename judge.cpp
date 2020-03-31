#include <iostream>
#include "basic.h"
#include "student.h"
using namespace std;

void judge(student stud, char jdg) {
	if (jdg == 'N' || jdg == 'n') {
		cout << "信息已保存！\n";
	}
	else if (jdg == 'Y' || jdg == 'y') {
		cout << "请输入修改的项目号: \n"
			<< "[1]学号 " << "[2]姓名 " << "[3]高等数学 "
			<< "[4]C++ " << "[5]数据结构 " << "[6]计算机网络\n";
		int item;
		cin >> item;
		modify(stud, item);
	}
	else {
		cout << "未知命令，请重新输入!\n";
		char jdg;
		cin >> jdg;
		judge(stud, jdg);
	}
}