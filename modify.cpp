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
	string xh = "学号: ";
	string sID = xh.append(to_string(ID));
	for (int j = 0; j < i; j++) {
		if (mapStudent[j] == sID)
		{
			string tmp;
			switch (item)
			{
			case 1: cout << "此项修改为： "; cin >> tmp; tmp = "学号: " + tmp; break;
			case 2: cout << "此项修改为： "; cin >> tmp; tmp = "姓名: " + tmp; break;
			case 3: cout << "此项修改为： "; cin >> tmp; tmp = "高等数学: " + tmp; break;
			case 4: cout << "此项修改为： "; cin >> tmp; tmp = "C++: " + tmp; break;
			case 5: cout << "此项修改为： "; cin >> tmp; tmp = "数据结构: " + tmp; break;
			case 6: cout << "此项修改为： "; cin >> tmp; tmp = "计算机网络: " + tmp; break;
			default:cout << "没有此项，请重新输入: "; cin >> item; break;
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
	cout << "\n信息已修改！\n";
}

void modify(student stud, int item) {
	switch (item)
	{
	case 1: cout << "此项修改为： "; cin >> stud.ID; break;
	case 2: cout << "此项修改为： "; cin >> stud.name; break;
	case 3: cout << "此项修改为： "; cin >> stud.sc_math; break;
	case 4: cout << "此项修改为： "; cin >> stud.sc_cpp; break;
	case 5: cout << "此项修改为： "; cin >> stud.sc_ds; break;
	case 6: cout << "此项修改为： "; cin >> stud.sc_net; break;
	default:cout << "没有此项，请重新输入: "; cin >> item; modify(stud, item); break;
	}
	chk(stud);
}