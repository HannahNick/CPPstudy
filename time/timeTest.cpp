//
// Created by nick on 2023/6/21.
//
#include "ctime"
#include "iostream"

using namespace std;

/**
 * 日期&时间
 */

/**
 * 有四个与时间相关的类型：clock_t、time_t、size_t 和 tm。类型 clock_t、size_t 和 time_t 能够把系统时间和日期表示为某种整数。
结构类型 tm 把日期和时间以 C 结构的形式保存，tm 结构的定义如下：
 * struct tm {
  int tm_sec;   // 秒，正常范围从 0 到 59，但允许至 61
  int tm_min;   // 分，范围从 0 到 59
  int tm_hour;  // 小时，范围从 0 到 23
  int tm_mday;  // 一月中的第几天，范围从 1 到 31
  int tm_mon;   // 月，范围从 0 到 11
  int tm_year;  // 自 1900 年起的年数
  int tm_wday;  // 一周中的第几天，范围从 0 到 6，从星期日算起
  int tm_yday;  // 一年中的第几天，范围从 0 到 365，从 1 月 1 日算起
  int tm_isdst; // 夏令时
};
 */



void timeTest(){
    // 基于当前系统的当前日期/时间
    time_t now = time(0);
    //把now转成字符串的形式
    char *dt = ctime(&now);

    cout << "time:" << dt <<endl;//Wed Jun 21 15:53:00 2023
    //把now转换tm 结构
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC time:" << dt <<endl;//英国时间 Wed Jun 21 07:53:00 2023

}

void tmTest(){
    //获取当前系统时间日期
    time_t now = time(0);
    cout << "second from 1970: " << now << endl;

    tm *ltm = localtime(&now);
    //输出tm各成员变量
    cout <<"tm_sec:" << ltm->tm_sec << endl;
    cout <<"tm_min:" << ltm->tm_min << endl;
    cout <<"tm_hour:" << ltm->tm_hour << endl;
    cout <<"tm_isdst:" << ltm->tm_isdst << endl;
    cout <<"tm_mday:" << ltm->tm_mday << endl;
    cout <<"tm_wday:" << ltm->tm_wday << endl;
    cout <<"tm_yday:" << ltm->tm_yday << endl;
    cout <<"tm_mon:" << ltm->tm_mon << endl;
    cout <<"tm_year:" << ltm->tm_year << endl;

}

