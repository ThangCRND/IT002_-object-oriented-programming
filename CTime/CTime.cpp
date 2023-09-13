#include "CTime.h"

CTime::CTime()
{
    this -> gio=0;
    this ->phut=0;
    this ->giay=0;
}
CTime::CTime(int h,int m, int s)
{
    this->gio=h;
    this->phut=m;
    this->giay=s;
}
CTime::~CTime(){}

int CTime::GetHour()
{
    return gio;
}
int CTime::GetMinute()
{
    return phut;
}
int CTime::GetSecond()
{
    return giay;
}

void CTime::Set_Time(int h,int m, int s)
{
    gio=h;

    phut = m;
     if (phut>=60)
    {
        gio=phut/60;
        phut=phut%60;
    }

    giay=s;
     if (giay>=60)
    {
        phut=giay/60;
        giay=giay%60;
    }
}

void CTime::Nhap()
{
    cout <<"Nhap gio :";
    do
     {
        cin >>gio;
        if(gio<0)
        {
            cout <<"Khong hop le,nhap lai: " ;
            cin >>gio;
        }
     }while (gio<0);

     cout <<"Nhap phut :";
    do
     {
        cin >>phut;
        if(phut <0)
        {
            cout <<"Khong hop le,nhap lai: " ;
            cin >>gio;
        }
     } while (phut<0);

     cout <<"Nhap giay :";
    do
     {
        cin >>giay;
        if(giay<0)
        {
            cout <<"Khong hop le,nhap lai: " ;
            cin >>giay;
        }
     } while (giay < 0);
}
void CTime::Xuat()
{
    cout << gio <<"h " << phut <<"m " << giay << "s."<<endl;
}

void CTime::Cong(int a)
{
    giay=giay+60*phut+60*60*phut;
    giay=a+giay;
}
void CTime::Tru(int a)
{
    giay=giay+60*phut+60*60*phut;
    giay=giay-a;

    if ((giay-a)<0)
    cout<<" MATH ERROR.";

}
void CTime::Add_Second()
{
    giay=giay+60*phut+60*60*phut;
    giay=giay+1;
}
void CTime::Sub_Second()
{
    giay=giay+60*phut+60*60*phut;
    giay=giay-1;

    if ((giay-1)<0)
    cout<<" MATH ERROR.";


}
