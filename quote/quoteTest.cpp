//
// Created by nick on 2023/6/19.
//
#include "iostream"

using namespace std;
/**
* 引用测试
*/

void quoteTest(){
    int a;
    int b;

    //声明引用变量
    int& qa = a;
    int& qb = b;

    a = 10;
    b = 12;
    cout<< "a:" << a <<endl;
    cout<< "qa:" << qa << endl;
    cout<< "b:" << b << endl;
    cout<< "qb:" << qb << endl;

}