#include <iostream>
#include <fstream>
#include <map>
#include "basic.h"
#include "student.h"
using namespace std;

int src(int flg, int ID) {
	ifstream fin;
	fin.open("student_information.txt");
	string str;
	map<int, string> mapStudent;
	int i = 0;
	int flag = 0;
	int j = 0;
	while (fin.good() && !fin.eof()) {
		getline(fin, str);
		mapStudent[i] = str;
		i++;
	}
	string xh = "学号: ";
	string sID = xh.append(to_string(ID));
	for (; j < i; j++) {
		if (mapStudent[j] == sID) {
			switch (flg)
			{
			case 1: {
				cout << "\n\n==========已查到结果如下==========\n\n";
				for (int k = 0; k < 6; k++) {
					cout << mapStudent[j + k] << endl;
				}
				cout << "==================================" << endl;
				return 0;
				break;
			}
			case 2: flag++; return flag; break;
			case 3: {
				map<int, string>::iterator iter = mapStudent.begin();
				for (; iter != mapStudent.end(); iter++) {
					if (iter->second == sID)
					{
						for (int k = 0; k < 7; k++) {
							mapStudent.erase(iter++);
						}
						break;
					}
				}
				ofstream fout;
				fout.open("student_information.txt");
				map<int, string>::iterator iter2 = mapStudent.begin();
				for (; iter2 != mapStudent.end(); iter2++) {
					fout << iter2->second << endl;
				}
				fout.close();
				cout << "该生成绩信息已删除！\n";
				break;
			}
			default: continue;
			}
		}
	}
	if (flag == 0) {
		switch (flg)
		{
		case 1: {
			cout << "无搜索结果，请重新输入学号！\n";
			i = j = 0;
			int id;
			cin >> id;
			src(flg, id);
		}
		case 2: return flag; break;
		default: break;
		}
		
	}
}