# Students'Scores Managment
### By Git-a-Live (Wechat: Git)
*This is a simple project for C++ learning*

Even this program is based on C++ but it seems based on C more likely, since I hardly used important features of C++. 
I did not design a GUI with MFC or Qt for it, so users have to type words or numbers according to the hints. XD

Well, I resist on pushing it into my repository though it looks like a **bullshit**, because I need to learn how to use Github,
and that will be the beinnning of my IT life.

****
This program contains two modules, one is for teachers(T-Module) and another one is for students(S-Module).
If the user who logs in the system is a teacher, then T-Module will be called, or S-Module will.
Identification is absolutely needed, so it is the first step to access, I wrote a function *login* to do that. Users must enter "1" or "2"
to choose their identity first(1 for teacher, 2 for student), then enter the ID number and password for authentication. After logging in, users can use functions of corresponding module.


## What can T-Module do:
1.*Add information of some student*;

2.*Check*;

3.*Search*;

4.*Modify*;

5.*Delete*.

## What can S-Module do:
1.*Check*;

2.*Seach*.

Almost features are organized in functions, and they can be called by main.cpp with corresponding headers.
