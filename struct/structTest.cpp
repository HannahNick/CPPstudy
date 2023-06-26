//
// Created by nick on 2023/6/21.
//

#include "iostream"
#include "string.h"

using namespace std;

/**
* struct测试
*/

struct Book{
    int id;
    char name[20];
};

/**
 * 类型定义
 */
typedef struct Car{
    int id;
    char name[20];
} Usb;

/**
 * 作为参数传递
 * @param book
 */
void structParamsTest(struct Book book){
    cout << "book1: "<<book.name << "\tid:" << book.id << endl;
}

/**
 * 作为指针参数传递
 * @param book
 */
void structPointParamsTest(struct Book *book){
    cout << "book1: "<<book->name << "\tid:" << book->id << endl;
}


void structTest(){
    Book book1;
    Book book2;

    strcpy(book1.name,"123");
    book1.id = 1;

    strcpy(book2.name,"345");
    book2.id = 2;

    cout << "book1: "<<book1.name << "\tid:" << book1.id << endl;
    cout << "book2: "<<book2.name << "\tid:" << book2.id << endl;

    structParamsTest(book1);
    structPointParamsTest(&book1);
}

void typeDefTest(){
    Usb usb;
}

