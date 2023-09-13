#ifndef CTIMESPAN_H_INCLUDED
#define CTIMESPAN_H_INCLUDED

#include <iostream>
#include<time.h>
using namespace std;

class CTimeSpan
{
private:
    long Ngay;
    int Gio;
    int Phut;
    int Giay;
public:
    CTimeSpan();
    CTimeSpan(long d, int h, int m, int s);
    ~CTimeSpan();

    long GetNgay();
    int GetGio();
    int GetPhut();
    int GetGiay();

    long Get_Total_Hours();
    long Get_Total_Minutes();
    long Get_Total_Seconds();

    void SetNgay(long);
    void SetGio(int);
    void SetPhut(int);
    void SetGiay(int);

    void Nhap();
    void Xuat();

    CTimeSpan Cong(CTimeSpan );
    CTimeSpan Tru(CTimeSpan );

    bool SoSanh_BangNhau(CTimeSpan);
    bool SoSanh_LonHon(CTimeSpan);
    bool SoSanh_LonHon_Bang(CTimeSpan);
    bool SoSanh_BeHon(CTimeSpan);
    bool SoSanh_BeHon_Bang(CTimeSpan);
    void Xuat_Thoigian (CTimeSpan ); // Xuat ra các moc thoi gian sau khi so sanh //

};

#endif // CTIMESPAN_H_INCLUDED
