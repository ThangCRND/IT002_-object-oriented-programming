#ifndef CTIME_H_INCLUDED
#define CTIME_H_INCLUDED

#include <iostream>
#include <math.h>
#include "CTimeSpan.h"

class CTime
{
private:
    int Gio;
    int Phut;
    int Giay;
public:
    CTime();
    CTime(int , int , int );
    ~CTime(){};

    int GetHour();
    int GetMinute();
    int GetSecond();
    long Get_Total_Second();

    void Nhap();
    void Xuat();

    CTime Add_Second (long x);
    CTime Sub_Second (long x);

    CTimeSpan Tru(CTime );

    CTime Add_one_second();
    CTime Sub_one_second();
};


#endif // CTIME_H_INCLUDED
