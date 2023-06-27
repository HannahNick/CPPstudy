//
// Created by nick on 2023/6/27.
//

#include "iostream"
#include "string.h"

using namespace std;

/**
 * 动态分配内存
 */

void newMemoryTest(){
    double *d = NULL;
    //动态分配内存 尽量不要使用 malloc() 函数。new 与 malloc() 函数相比，其主要的优点是，new 不只是分配了内存，它还创建了对象。
    d = new double;

    *d = 1.01;
    cout << *d <<endl;
    //释放内存
    delete d;
}


void newCharTest(){
    char *c =NULL;
    c = new char[20];

    strcpy(c,"this is nick speaking");
    cout << c << endl;
    delete c;
}

/**
 * 一维数组
 */
void oneDimensionalArray(){
    int *i = NULL;
    i = new int[20];

    delete i;
}

/**
 * 一维数组
 */
void oneDimensionalArray2(){
    int *i = new int[20];
    delete [] i;
}

/**
 * 二维数组
 */
void twoDimensionalArray(){
    int **i;

    i = new int *[3];
    for (int j = 0; j < 3; ++j) {
        i[j] = new int[3];
        for (int k = 0; k < 3; ++k) {
            i[j][k] = k+j;
        }
    }

    for (int j = 0; j < 3; ++j) {
        for (int k = 0; k < 3; ++k) {
            cout << i[j][k];
        }
        cout << endl;
    }



    for (int j = 0; j < 3; ++j) {
        delete [] i[j];
    }
    delete [] i;
}
