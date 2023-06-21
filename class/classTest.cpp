//
// Created by nick on 2023/6/21.
//
#include "iostream"

using namespace std;
/**
 * 类&对象
 */
class Box{
public:
    double mlength; //长度
    double breath; //宽度
    double height; //高度
    double getLength(){
        return mlength;
    };
    void setLength(double length){
        mlength = length;
    }
};

class Usb{
public:
    int mId;
    string name;
    //仅仅只是声明
    int getId();
    void setId(int id);
};

//外部实现
int Usb::getId() {
    return mId;
}

void Usb::setId(int id) {
    mId = id;
}



