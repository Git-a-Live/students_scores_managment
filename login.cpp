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
	case 1: {back1: cout << "\n�������ʦְ����: ";
		cin >> ID;
		cout << "\n�������ʦ�˻�����: ";
		cin >> pswd;
		flag = auth(ID, pswd);
		while (flag == -1) {
			goto back1;
		}
		while(true){
			back3:cout << "\n��ѡ����Ҫ���еĲ����� \n"
				<< "[1]��� " << "[2]��ʾ " << "[3]�޸� " << "[4]���� " << "[5]ɾ��\n\n";
			cin >> op;
			oprt(op);
			break;
		}
		goto back3;
	}
	case 2: {
	back2: cout << "\n������ѧ��ѧ��: ";
		cin >> ID;
		cout << "\n������ѧ���˻�����: ";
		cin >> pswd;
		flag = auth(ID, pswd);
		while (flag == -1) {
			goto back2;
		}
		while(true){
			back4:cout << "\n��ѡ����Ҫ���еĲ����� \n"
				<< "[1]��ʾ " << "[2]���� \n";
			cin >> op;
			oprt(lgn, ID, op);
			break;
		}
		goto back4;
	}
	default: {cout << "\n�޴˵�¼��ݣ����������룡\n\n"
				<< "��ѡ�����ĵ�¼��ݣ�[1]��ʦ / [2]ѧ�� ";
				cin >> lgn;
				login(lgn); break;}
	}
}