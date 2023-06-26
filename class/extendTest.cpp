//
// Created by nick on 2023/6/26.
//
#include "iostream"
#include "string"

using namespace std;

/**
 * 继承与多继承
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
    void setName(string name){
        mName = name;
    }
    string getName(){
        return mName;
    };
};




void extendTest(){
    Male male;
    male.setName("王大锤");
    male.setId(1);
}


