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
extern void commaOperator();
extern void arrowOperator();
extern void dotOperator();
extern void quoteTest();
extern void timeTest();
extern void tmTest();
extern void inOutTest();
extern void cerrorTest();
extern void structTest();
extern void classTest();
extern void overrideTest();
extern void polymorphismTest();
extern void readFile();
extern void writeFile();
extern void readAndWriteFile();
extern void exceptionTest();
extern void exceptionTest2();
extern void newMemoryTest();
extern void newCharTest();
extern void twoDimensionalArray();
extern void namespaceTest();


int main() {
    namespaceTest();
//    twoDimensionalArray();
//    newCharTest();
//    newMemoryTest();
//    exceptionTest2();
//    exceptionTest();
//    readAndWriteFile();
//    writeFile();
//    readFile();
//    polymorphismTest();
//    overrideTest();
//    classTest();
//    structTest();
//    cerrorTest();
//    inOutTest();
//    tmTest();
//    timeTest();
//    quoteTest();
//    dotOperator();
//    arrowOperator();
//    commaOperator();
//    stringTest();
//    staticVarTest();
//    reinterpretCast();
//    constCastTest();
//    staticCastTest();
//    std::cout << "Hello, World!" << std::endl;
//    helloWord();

    return 0;
}


