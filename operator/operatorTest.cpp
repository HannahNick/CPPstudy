//
// Created by nick on 2023/6/19.
//
#include "iostream"
#include "string"
#include "string.h"

using namespace std;

/**
 * 运算符测试
 */

/**
 * 逗号运算符
 * 表达式1,表达式2
 * 求解过程:
 *  先求表达式1，再求表达式2，整个逗号表达式的值是表达式2的值
 *  最右边的那个表达式的值将作为整个逗号表达式的值，其他表达式的值会被丢弃
 */
void commaOperator(){

    int i,j;
    j = 10;
    i = (j++,j+100,999+j);

    cout << i <<endl;//1010
}


struct Employee{
    int id;
    char name[20];
} emp;

class Department{
    int id;
    string name;
} dept;

/**
 * 把nick赋给emp.name
 */
void dotOperator(){
    strcpy(emp.name,"nick");
    cout<< emp.name;
}

/**
 *  p_emp 是一个指针，指向类型为 Employee 的对象，
 * 把nick赋给p_emp的name成员变量
 */
void arrowOperator(){
    Employee *p_emp = &emp;
    strcpy(p_emp->name,"nick");
    cout<< p_emp->name;
}


