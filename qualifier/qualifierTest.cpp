//
// Created by nick on 2023/6/19.
//

/**
* 修饰符学习
*/
#include <vector>
#include "iostream"
#include "string"

using namespace std;
/**
 * short：表示变量的范围比 int 更小。short int 可以缩写为 short。

    long：表示变量的范围比 int 更大。long int 可以缩写为 long。
    wchar_t：表示宽字符类型，可以存储 Unicode 字符。
 */
void qualifierTest(){
    signed int num1 = -10; // 定义有符号整型变量 num1，初始值为 -10
    unsigned int num2 = 20; // 定义无符号整型变量 num2，初始值为 20

    short int si = 10; // 定义短整型变量 num1，初始值为 10
    long int li = 100000; // 定义长整型变量 num2，初始值为 100000

    long long int lli = 10000000000; // 定义长长整型变量 num1，初始值为 10000000000

    float f = 3.14f; // 定义单精度浮点数变量 num1，初始值为 3.14
    double d = 2.71828; // 定义双精度浮点数变量 num2，初始值为 2.71828

    bool flag = true; // 定义布尔类型变量 flag，初始值为 true

    char ch1 = 'a'; // 定义字符类型变量 ch1，初始值为 'a'
    wchar_t ch2 = L'你'; // 定义宽字符类型变量 ch2，初始值为 '你'
}

/**
 * 限定符
 *
 * const	const 定义常量，表示该变量的值不能被修改。。
    volatile	修饰符 volatile 告诉该变量的值可能会被程序以外的因素改变，如硬件或其他线程。。
    restrict	由 restrict 修饰的指针是唯一一种访问它所指向的对象的方式。只有 C99 增加了新的类型限定符 restrict。
    mutable	表示类中的成员变量可以在 const 成员函数中被修改。
    static	用于定义静态变量，表示该变量的作用域仅限于当前文件或当前函数内，不会被其他文件或函数访问。
    register	用于定义寄存器变量，表示该变量被频繁使用，可以存储在CPU的寄存器中，以提高程序的运行效率。
 */
void limitSymbolTest(){
    const int NUM = 0;//定义常量
    const int* ptr = &NUM;//定义指向常量的指针
    int const* ptr2 = &NUM;//和上面一样等价


    volatile int vN = 12;//其值可能会在未知的时间被改变
}

/**
 * mutable
 */
class Example{
    public:
        int getValue() const{
            return _value; //const关键字表示该成员函数不会修改对象的数据成员
        }

        void setValue(int v)const {
            _value = v; //mutable 关键字允许在const成员函数中修改成员变量
        }

    private:
        mutable int _value;
};

/**
 * static
 */
void staticTest(){
    static int a = 1; //static关键字使变量a存储在程序生命周期内都存在
    a++;
}

/**
 * register
 */
void registerTest(){
//    register int a = 1; c++17不给用啦
}

/**
 * 使用thread_local说明符声明的变量仅可在它在其创建的线程上访问，变量在创建线程时创建，在销毁线程时销毁，每个线程都有自己的变量副本
 * thread_local说明符可以与static或extern合并
 * 可以将thread_local仅用于数据声明和定义；thread_local不能用于函数声明和定义
 *
 * 以下演示可以被声明为thread_local的变量
 */
thread_local int x;
class X{
    static thread_local std::string s;//类的static成员变量
};

thread_local std::string X::s;//X::s是需要定义的

void foo(){
    thread_local std::vector<int> v;
}
