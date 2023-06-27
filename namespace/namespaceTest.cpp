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

using namespace print;
using namespace player;

void namespaceTest(){
    char c[25];
    strcpy(c,"this is nick speaking");
    print::p(c);

    player::play();

}