//
// Created by nick on 2023/6/16.
//
#include "iostream"
#include "string"

//常量定义
#define PLAY "play"
#define PAUSE "pause"

using namespace std;

void varTest(){
    bool    b;
    int    i, j, k;
    char   c, ch;
    float  f, salary;
    double d;
}

class Usb{
public: static int id;
};

int Usb::id = 30;//需要在外部初始化，和java有很大区别

void staticVarTest(){
    cout << Usb::id << endl;
}

void stringTest(){
    string str = "123";
    cout << str << PLAY;

    //常量定义
    const int i =1;
    const string name = "name";
    const char c = '\n';
}