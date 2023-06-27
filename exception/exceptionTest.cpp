//
// Created by nick on 2023/6/27.
//

#include "iostream"
#include "exception"

using namespace std;

/**
 * 自定义异常类，继承exception并重写what方法
 */
struct MyException: public exception{

    const char * what() const noexcept override{
        return "C++ exception";
    }

};

int dvi(int a ,int b){
    if (b==0){
        throw "b cannot 0";
    }
    return a/b;
}

int dvi2(int a ,int b){
    if (b==0){
        throw MyException();
    }
    return a/b;
}

void exceptionTest(){
    try {
        int c = dvi(1,0);
        cout << c << endl;
    }catch (const char *e){
        cout << e <<endl;
    }
}

void exceptionTest2(){
    try {
        int c = dvi2(1,0);
        cout << c << endl;
    }catch (const char *e){
        cout << e <<endl;
    }
}