#ifndef CTIME_H_INCLUDED
#define CTIME_H_INCLUDED
#include <iostream>
#include<math.h>

using namespace std;

class CTime
{
private:
    int gio;
    int phut;
    int giay;
public:
    CTime();
    CTime (int, int, int);
    ~CTime();

    int GetHour();
    int GetMinute();
    int GetSecond();

    void Set_Time(int, int ,int);

    void Nhap();
    void Xuat();

    void Cong(int);
    void Tru(int);
    void Add_Second();
    void Sub_Second();

};




#endif // CTIME_H_INCLUDED
