#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include "basic.h"
#include "student.h"
using namespace std;

void modify(int item, int ID) {
	ifstream fin;
	fin.open("student_information.txt");
	string str;
	map<int, string> mapStudent;
	int i = 0;
	while (fin.good() && !fin.eof()) {
		getline(fin, str);
		mapStudent[i] = str;
		i++;
	}
	string xh = "ѧ��: ";
	string sID = xh.append(to_string(ID));
	for (int j = 0; j < i; j++) {
		if (mapStudent[j] == sID)
		{
			string tmp;
			switch (item)
			{
			case 1: cout << "�����޸�Ϊ�� "; cin >> tmp; tmp = "ѧ��: " + tmp; break;
			case 2: cout << "�����޸�Ϊ�� "; cin >> tmp; tmp = "����: " + tmp; break;
			case 3: cout << "�����޸�Ϊ�� "; cin >> tmp; tmp = "�ߵ���ѧ: " + tmp; break;
			case 4: cout << "�����޸�Ϊ�� "; cin >> tmp; tmp = "C++: " + tmp; break;
			case 5: cout << "�����޸�Ϊ�� "; cin >> tmp; tmp = "���ݽṹ: " + tmp; break;
			case 6: cout << "�����޸�Ϊ�� "; cin >> tmp; tmp = "���������: " + tmp; break;
			default:cout << "û�д������������: "; cin >> item; break;
			}
			mapStudent[j + item - 1] = tmp;
			
		}
	}
	ofstream fout;
	fout.open("student_information.txt");
	map<int, string>::iterator iter = mapStudent.begin();
	for (; iter != mapStudent.end(); iter++) {
		fout << iter->second << endl;
	}
	i = 0;
	cout << "\n��Ϣ���޸ģ�\n";
}

void modify(student stud, int item) {
	switch (item)
	{
	case 1: cout << "�����޸�Ϊ�� "; cin >> stud.ID; break;
	case 2: cout << "�����޸�Ϊ�� "; cin >> stud.name; break;
	case 3: cout << "�����޸�Ϊ�� "; cin >> stud.sc_math; break;
	case 4: cout << "�����޸�Ϊ�� "; cin >> stud.sc_cpp; break;
	case 5: cout << "�����޸�Ϊ�� "; cin >> stud.sc_ds; break;
	case 6: cout << "�����޸�Ϊ�� "; cin >> stud.sc_net; break;
	default:cout << "û�д������������: "; cin >> item; modify(stud, item); break;
	}
	chk(stud);
}