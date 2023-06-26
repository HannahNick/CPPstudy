//
// Created by nick on 2023/6/26.
//

#include "iostream"
#include "string"

using namespace std;

/**
 * 方法的重载
 */
class Printer{
public:
    void print(int i){
        cout << i << endl;
    }

    void print(float f){
        cout << f << endl;
    }

    void print(double d){
        cout << d << endl;
    }

    void setId(int id){
        mId = id;
    }

    int getId(){
        return mId;
    }

    /**
     * 操作符重载
     * @param p
     * @return
     */
    Printer operator+(const Printer& p){
        Printer printer;
        printer.mId = p.mId + this->mId;
        return printer;
    }

    Printer operator*(Printer p){
        Printer printer;
        printer.mId = p.getId() * this->mId;
        return printer;
    }

private:
    int mId;
};

/**
 * 这两个函数有着本质区别
 * @param printer
 */
void setParamsId(Printer printer){
    //这里更改，在外部是不能生效的
    printer.setId(66);
}
void setParamsId2(Printer& printer){
    //这里更改，在外部可以生效
    printer.setId(66);
}

void overrideTest(){
    int i = 1;
    float f = 1.2f;
    double d = 1.3;

    Printer printer;
    printer.print(i);
    printer.print(f);
    printer.print(d);

    Printer printer1;
    printer1.setId(3);
    Printer printer2;
    printer2.setId(4);
    cout << (printer1+printer2).getId() << endl;
    cout << (printer1*printer2).getId() << endl;

    setParamsId(printer1);
    cout << printer1.getId() << endl;

    setParamsId2(printer1);
    cout << printer1.getId() << endl;
}




