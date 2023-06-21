//
// Created by nick on 2023/6/21.
//

#include "iostream"

using namespace std;

/**
 * 输入输出
 */

/**
 * 输入
 */
void inOutTest(){
    char words[50];

    cout << "enter some words :" << endl;
    cin >> words;
    cout << "your enter:" << words <<endl;


    char name[20];
    char age[10];
    cin >> name >> age;
    //上面的代码等价于
    cin >> name;
    cin >> age;
}

/**
 * 错误输出流
 */
void cerrorTest(){
    char error[] = "Error message:";
    cerr << error << endl;

    clog << error << endl;
}
