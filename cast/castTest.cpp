//
// Created by nick on 2023/6/16.
//

#include "iostream"

using namespace std;

void staticCastTest(){
    long a = 99;
    int b;
    b = static_cast<int>(a);
    cout << b << endl;
}

void dynamicCastTest(){
    class Interface{
    };
    class Usb : public Interface{};
    Interface *i = new Usb;
    //不知道为什么无法动态类型转换
//    Usb *usb = dynamic_cast<Usb*>(i);
}

/**
 * 常量类型转换
 */
void constCastTest(){
    const int i = 10;
    //将const int 转换为 int
    int& a = const_cast<int&>(i);
    cout << a << endl;
}

/**
 * 重新解释转换
 * 将一个数据类型的值重新解释为另一个数据类型的值，通常用于在不同的数据类型之间进行转换。重新解释转换不进行任何类型检查，因此可能会导致未定义的行为。
 */
void reinterpretCast(){
    int i = 2;
    float b = reinterpret_cast<float&>(i);// 重新解释将int类型转换为float类型
    cout << b << endl;
}