//
// Created by nick on 2023/6/26.
//
#include "iostream"
#include "string"

using namespace std;

/**
 * 继承与多继承,多态,重写
 */

class Person{
private:
    int mId;
public:
    void setId(int id){
        mId = id;
    }
    int getId(){
        return mId;
    }

    virtual void doSomething(){
        cout << "Person do Something" << endl;
    }
};

class Father{
private:
    int mHeight;
protected:
    int getHeight(){
        return mHeight;
    }
};


/**
 * c++可以多继承
 */
class Male: public Person ,protected Father{
private:
    string mName;
    void giveMeId(){
        getId();
        getHeight();
    }
public:
    Male(){

    }
    Male(string name){
        mName = name;
    }
    void setName(string name){
        mName = name;
    }
    string getName(){
        return mName;
    };
};

class Female: public Person{
public:
    /**
     * 构造函数
     * @param id
     * @param name
     */
    Female(int id, string name){
        mName = name;
        setId(id);
    }

    /**
     * 方法重写
     */
    void doSomething() override{
        cout << "Female do something" << endl;
    }
private:
    string mName;
};




void extendTest(){
    Male male;
    male.setName("王大锤");
    male.setId(1);
}

/**
 * 多态
 */
void polymorphismTest(){
    Person *person;
    Female female(3,"王尼美");

    person = &female;
    cout << person->getId() << endl;

    person->doSomething();

    Male male("王大锤");
    person = &male;

    person->doSomething();
}
