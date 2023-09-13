
#include "CTime.h"

using namespace std;

CTime::CTime()
{
    this->Gio =0;
    this -> Phut =0;
    this -> Giay = 0;
}

CTime::CTime(int h, int m, int s)
{
    this->Gio= h;
    this->Phut = m;
    this->Giay = s;
}

int CTime::GetHour()
{
    return Gio;
}

int CTime::GetMinute()
{
    return Phut;
}

int CTime::GetSecond()
{
    return Giay;
}

long CTime::Get_Total_Second()
{
    return Giay + Phut*60 + Gio*60*60;
}

CTime CTime::Add_Second(long x)
{
    CTime add;
    add.Giay = Get_Total_Second() + x;
    return add;
}

CTime CTime::Sub_Second(long x)
{
    CTime sub;
    sub.Giay = Get_Total_Second() - x;
    return sub;
}

CTimeSpan CTime::Tru(CTime A)
{
    CTime Hieu;
    if (this->Get_Total_Second() - A.Get_Total_Second() <0)
    {
        cout << "Khong thuc hien dc phep tru. \n";
        return Hieu;
    }
    Hieu.Giay = (this->Get_Total_Second() - A.Get_Total_Second()) % 60;
    cout << "0 ngay, ";
    return Hieu;
}



void CTime::Nhap()
{
    cout << "Nhap gio: ";
    cin >> Gio;
    while (Gio < 0 || Gio > 23)
    {
        cout << "Xin nhap gio lai: ";
        cin >> Gio;
    }
    cout << "Nhap phut: ";
    cin >> Phut;
    while (Phut < 0 || Phut > 59)
    {
        cout << "Xin nhap lai phut: ";
        cin >> Phut;
    }
    cout << "Nhap giay: ";
    cin >> Giay;
    while (Giay < 0 || Giay > 59)
    {
        cout << "Xin nhap lai giay: ";
        cin >> Giay;
    }
}

CTime CTime::Add_one_second ()
{
    CTime Cong;
    Cong.Giay = Get_Total_Second() + 1 ;
    return Cong;
}

CTime CTime::Sub_one_second ()
{
    CTime Tru;
    Tru.Giay = Get_Total_Second() - 1;
    return Tru;
}

void CTime::Xuat()
{
    if (Giay>=60)
    {
        Phut=Phut + Giay/60;
        Giay=Giay%60;
    }
    if (Phut>=60)
    {
        Gio=Gio + Phut/60;
        Phut=Phut%60;
    }
    cout << Gio << " gio, " << Phut << " phut, " << Giay << " giay." <<endl;
}

