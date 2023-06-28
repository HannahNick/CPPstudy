//
// Created by nick on 2023/6/27.
//

#include "iostream"
#include "string.h"

using namespace std;

namespace print{

    void p(char *c){
        cout << c << endl;
    }
}

namespace player{

    void play(){
        cout << "Player is play" << endl;
    }
}

namespace Usb{
    void insert(){

    }

    void read(){

    }

    namespace display{
        int a= 0;
        void show(){

        }
    }
}

using namespace print;
using namespace player;

/**
 * 可以只引用某个项目
 */
using Usb::insert;
/**
 * 使用嵌套命名空间
 */
using namespace Usb::display;

void namespaceTest(){
    char c[25];
    strcpy(c,"this is nick speaking");
    print::p(c);

    player::play();

}

void namespaceTest2(){
    insert();
    int b = a+1;
}