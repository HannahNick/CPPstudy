//
// Created by nick on 2023/6/28.
//

#include "iostream"
#include "vector"
#include "stdexcept"

using namespace std;


/**
 * 泛型函数
 * @tparam T
 * @param a
 * @param b
 * @return
 */
template <typename T>
T const& Max(T const& a,T const& b){
    return a>b?a:b;
}

void genericsTest(){
    double c = Max(1.3,1.5);
    cout << c <<endl;

    int i = Max(1,4);
    cout <<i << endl;

    float f = Max(3.2,4.1);
    cout <<f << endl;

}

template <class T>
class Stack{
private:
   vector<T> v;

public:
        /**
         * 入栈
         * @param a
         */
        void push(T a){
            v.push_back(a);
        }
        /**
         * 出栈
         * @return
         */
        void pop(){
            if (v.empty()){
                throw out_of_range("Stack::pop is empty");
            }
            v.pop_back();//删除最后一个元素
        }

        /**
         * 返回栈顶数据
         * @return
         */
        [[nodiscard]] T top(){
            if (v.empty()){
                throw out_of_range("Stack::top is empty");
            }
            return v.back();
        }

        [[nodiscard]] bool empty(){
            return v.empty();
        }
};

void genericsTest2(){
    Stack<int> intStack;

    try {
        intStack.push(9);
        cout << intStack.top() << endl;

        intStack.pop();
        intStack.pop();
    }catch (exception const& ex){
        cerr << "Exception:" <<ex.what() <<endl;
    }

}

