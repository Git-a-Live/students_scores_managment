#include <iostream>
#include "basic.h"
#include "student.h"
using namespace std;

void login(int lgn) {
	int ID;
	int pswd;
	int op;
	int flag;
	switch (lgn) {
	case 1: {back1: cout << "\n请输入教师职工号: ";
		cin >> ID;
		cout << "\n请输入教师账户密码: ";
		cin >> pswd;
		flag = auth(ID, pswd);
		while (flag == -1) {
			goto back1;
		}
		while(true){
			back3:cout << "\n请选择您要进行的操作： \n"
				<< "[1]添加 " << "[2]显示 " << "[3]修改 " << "[4]查找 " << "[5]删除\n\n";
			cin >> op;
			oprt(op);
			break;
		}
		goto back3;
	}
	case 2: {
	back2: cout << "\n请输入学生学号: ";
		cin >> ID;
		cout << "\n请输入学生账户密码: ";
		cin >> pswd;
		flag = auth(ID, pswd);
		while (flag == -1) {
			goto back2;
		}
		while(true){
			back4:cout << "\n请选择您要进行的操作： \n"
				<< "[1]显示 " << "[2]查找 \n";
			cin >> op;
			oprt(lgn, ID, op);
			break;
		}
		goto back4;
	}
	default: {cout << "\n无此登录身份，请重新输入！\n\n"
				<< "请选择您的登录身份：[1]教师 / [2]学生 ";
				cin >> lgn;
				login(lgn); break;}
	}
}