#pragma once
#ifndef BASIC_H
#define BASIC_H
#include <iostream>
#include <string>
#include <fstream>
#include "student.h"
int src(int flg, int ID);
void modify(int item, int ID);
void modify(student stud, int item);
void login(int lgn);
void judge(student stud, char jdg);
void init();
void chk(student stud);
void add(int ID);
void oprt(int op);
void oprt(int lgn, int ID, int op);
void disp();
int auth(int ID, int pswd);
#endif
