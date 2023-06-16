#include <iostream>
#include "limits"

using namespace std;

void helloWord(){
    cout << "基本数据int\t\t" ;
    cout << "\t最大值是 " << (numeric_limits<int>::max)();
    cout << "\t最小值是 " << (numeric_limits<int>::min)();

}


extern void staticCastTest();
extern void constCastTest();
extern void reinterpretCast();
extern void staticVarTest();
extern void stringTest();

int main() {
    stringTest();
//    staticVarTest();
//    reinterpretCast();
//    constCastTest();
//    staticCastTest();
//    std::cout << "Hello, World!" << std::endl;
//    helloWord();

    return 0;
}


