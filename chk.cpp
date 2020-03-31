#include <iostream>
#include "basic.h"
#include "student.h"
using namespace std;

void chk(student stud) {
	cout << "\n======== 请核对信息 ========\n"
		<< "学号: " << stud.ID << endl
		<< "姓名: " << stud.name << endl
		<< "高等数学成绩: " << stud.sc_math << endl
		<< "C++程序设计成绩: " << stud.sc_cpp << endl
		<< "数据结构成绩: " << stud.sc_ds << endl
		<< "计算机网络成绩: " << stud.sc_net << endl;
	cout << "\n是否有误？ Y/N: ";
	char jdg;
	cin >> jdg;
	judge(stud, jdg);
}