#include <iostream>
#include <fstream>
#include "basic.h"
#include "student.h"

void oprt(int op) {
	switch (op) {
	case 1:cout << "������ѧ��: "; int id; cin >> id; add(id); break;
	case 2:disp(); break; 
	case 3: {
		student stud;
		cout << "������Ҫ�޸���Ϣ��ѧ��ѧ��: ";
		int flag;
		int id;
		back: cin >> id;
		flag = src(2, id);
		while(flag != 1) {
			cout << "ѧ�Ų����ڣ����������룡\n";
			goto back;
		}
		src(1, id);
		cout << "\n�������޸ĵ���Ŀ��: \n"
			<< "[1]ѧ�� " << "[2]���� " << "[3]�ߵ���ѧ "
			<< "[4]C++ " << "[5]���ݽṹ " << "[6]���������\n";
		int item;
		cin >> item;
		modify(item, id); 
		break;
	}
	case 4: {
		cout << "������Ҫ���ҵ�ѧ��: ";
		int id; cin >> id; src(1,id);
		break; }
	case 5: {
		cout << "��ΪΣ�ղ�����ȷ��Ҫ������ Y/N: ";
		char yn;
		cin >> yn;
		if (yn == 'Y' || yn == 'y') {
			cout << "�������ɾ��ѧ����ѧ��: ";
			int id;
			cin >> id;
			src(3,id);
		}
		else {
			cout << "������ȡ����\n";
		}
		break; }
	default:cout << "û�д˲���������������\n"; cin >> op; oprt(op); break;
	}
}
void oprt(int lgn, int ID, int op) {
		switch (op) {
		case 1:disp(); break;
		case 2: {
			cout << "������Ҫ���ҵ�ѧ��: ";
			int id; cin >> id; src(1,id);
			break; }
		default:cout << "û�д˲���������������\n"; cin >> op; oprt(lgn, ID, op); break;
		}
}