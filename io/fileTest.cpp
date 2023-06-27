//
// Created by nick on 2023/6/26.
//

#include "fstream"
#include "iostream"
#include "string.h"

using namespace std;

/**
 * 文件和流
 *
 *  ofstream	该数据类型表示输出文件流，用于创建文件并向文件写入信息。
    ifstream	该数据类型表示输入文件流，用于从文件读取信息。
    fstream	    该数据类型通常表示文件流，且同时具有 ofstream 和 ifstream 两种功能，这意味着它可以创建文件，向文件写入信息，从文件读取信息。
 */


/**
 * 打开文件
 *
 * void open(const char *filename, ios::openmode mode);
 * 第二个参数定义文件被打开的模式。
 *  ios::app	追加模式。所有写入都追加到文件末尾。
    ios::ate	文件打开后定位到文件末尾。
    ios::in	    打开文件用于读取。
    ios::out	打开文件用于写入。
    ios::trunc	如果该文件已经存在，其内容将在打开文件之前被截断，即把文件长度设为 0。
 */
void openFile(){
    ofstream outfile;
    //如果您想要以写入模式打开文件，并希望截断文件，以防文件已存在，那么您可以使用下面的语法：
    outfile.open("a.txt",ios::out|ios::trunc);
    //用于读写
    outfile.open("a.txt",ios::out|ios::in);
    //关闭文件
    outfile.close();
}

/**
 * 读文件
 */
void readFile(){
    char content[100];
    ifstream infile;
    infile.open("D:\\aa.txt");
    infile>>content;
    cout<< content<<endl;
    infile.close();
}

/**
 * 写文件
 */
void writeFile(){
    char content[100];
    ofstream outfile;
    outfile.open("D:\\aa.txt",ios::app);
    strcpy(content,"nick is awesome");
    outfile<< content <<endl;
    outfile.close();
}

void readAndWriteFile(){
    char scanContent[100];
    char fileContent[100];
    fstream file;
    file.open("D:\\aa.txt",ios::app|ios::in);
    cout << "please enter something" << endl;
    cin.getline(scanContent, 100);

    cout << "get scanContent: " << scanContent << endl;

    file << scanContent << endl;

    cout << "file write finish" << endl;
    //写完了之后再读不行
    file >> fileContent;

    cout << "read file finish" << endl;
    cout << fileContent << endl;

    file.close();
}