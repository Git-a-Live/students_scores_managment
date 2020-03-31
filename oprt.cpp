#include <iostream>
#include <fstream>
#include "basic.h"
#include "student.h"

void oprt(int op) {
	switch (op) {
	case 1:cout << "请输入学号: "; int id; cin >> id; add(id); break;
	case 2:disp(); break; 
	case 3: {
		student stud;
		cout << "请输入要修改信息的学生学号: ";
		int flag;
		int id;
		back: cin >> id;
		flag = src(2, id);
		while(flag != 1) {
			cout << "学号不存在，请重新输入！\n";
			goto back;
		}
		src(1, id);
		cout << "\n请输入修改的项目号: \n"
			<< "[1]学号 " << "[2]姓名 " << "[3]高等数学 "
			<< "[4]C++ " << "[5]数据结构 " << "[6]计算机网络\n";
		int item;
		cin >> item;
		modify(item, id); 
		break;
	}
	case 4: {
		cout << "请输入要查找的学号: ";
		int id; cin >> id; src(1,id);
		break; }
	case 5: {
		cout << "此为危险操作，确定要进行吗？ Y/N: ";
		char yn;
		cin >> yn;
		if (yn == 'Y' || yn == 'y') {
			cout << "请输入待删除学生的学号: ";
			int id;
			cin >> id;
			src(3,id);
		}
		else {
			cout << "操作已取消！\n";
		}
		break; }
	default:cout << "没有此操作！请重新输入\n"; cin >> op; oprt(op); break;
	}
}
void oprt(int lgn, int ID, int op) {
		switch (op) {
		case 1:disp(); break;
		case 2: {
			cout << "请输入要查找的学号: ";
			int id; cin >> id; src(1,id);
			break; }
		default:cout << "没有此操作！请重新输入\n"; cin >> op; oprt(lgn, ID, op); break;
		}
}