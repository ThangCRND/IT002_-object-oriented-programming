
#include "CTimeSpan.h"

CTimeSpan::CTimeSpan()
{
    this-> Ngay = 0;
    this-> Gio = 0;
    this-> Phut = 0;
    this-> Giay = 0;
}
CTimeSpan::CTimeSpan(long d,int h,int m,int s)
{
   SetNgay(d);
   SetGio(h);
   SetPhut(m);
   SetGiay(s);
}
CTimeSpan::~CTimeSpan(){}

//Get
long CTimeSpan::GetNgay()
{
    return Ngay;
}
int CTimeSpan::GetGio()
{
    return Gio;
}
int CTimeSpan::GetPhut()
{
    return Phut;
}
int CTimeSpan::GetGiay()
{
    return Giay;
}
//Set
void CTimeSpan::SetNgay(long ngay)
{
    this->Ngay=ngay;
}
void CTimeSpan::SetGio(int gio)
{
    this->Gio=gio;
}
void CTimeSpan::SetPhut(int phut)
{
    this->Phut=phut;
}
void CTimeSpan::SetGiay(int giay)
{
    this->Giay=giay;
}


long CTimeSpan::Get_Total_Hours()
{
    return this->Ngay*24 + this->Gio;
}
long CTimeSpan::Get_Total_Minutes()
{
    return this->Ngay*24*60 + this->Gio*60 + this->Phut;
}
long CTimeSpan::Get_Total_Seconds()
{
    return this->Ngay*24*60*60 + this->Gio*60*60 + this->Phut*60 + this->Phut;
}


void CTimeSpan::Nhap()
{
    cout<<"Nhap ngay: ";
    do
    {
        cin >> Ngay;
        if (Ngay<0)
            {
                cout << "ERROR, input again: ";
                cin >> Ngay;
            }
    } while (Ngay<0);

    cout<<"Nhap gio: ";
    do
    {
        cin >> Gio;
        if (Gio<0)
            {
                cout << "ERROR, input again: ";
                cin >> Gio;
            }
    } while (Gio<0);


    cout<<"Nhap phut: ";
    do
    {
        cin>>  Phut;
        if (Phut < 0)
            {
                cout<<"ERROR, input again: ";
                cin>> Phut;
            }
    } while (Phut<0);

    cout<<"Nhap giay: ";
    do
    {
        cin>> Giay;
        if (Giay<0)
            {
                cout<<"ERROR, input again: ";
                cin>> Giay;
            }
    } while (Giay<0);
}
void CTimeSpan::Xuat()
{
    cout<<"Ngay:"<< GetNgay() <<", " << GetGio() << "gio, "<< GetPhut() <<"phut, "<< GetGiay() <<"giay." <<endl;
}

CTimeSpan CTimeSpan::Cong(CTimeSpan A)
{
    CTimeSpan Sum;
   Sum.Ngay =(this->Get_Total_Hours() + A.Get_Total_Hours()) / 24;
   Sum.Gio = (this->Get_Total_Hours() + A.Get_Total_Hours()) % 24;
   Sum.Phut =(this->Get_Total_Minutes() + A.Get_Total_Minutes()) % 60;
   Sum.Giay = (this->Get_Total_Seconds() + A.Get_Total_Seconds()) % 60;
     return Sum;
}
CTimeSpan CTimeSpan::Tru(CTimeSpan A)
{
     CTimeSpan Diff;
     if (this->Get_Total_Seconds() - A.Get_Total_Seconds()<0)
     {
         cout << "ERROR.Khong the tru." << endl;
         return Diff;
     }
   Diff.Ngay =(this->Get_Total_Hours() - A.Get_Total_Hours()) / 24;
   Diff.Gio = (this->Get_Total_Hours() - A.Get_Total_Hours()) % 24;
   Diff.Phut =(this->Get_Total_Minutes() - A.Get_Total_Minutes()) % 60;
   Diff.Giay = (this->Get_Total_Seconds() - A.Get_Total_Seconds()) % 60;
     return Diff;
}
bool CTimeSpan::SoSanh_BangNhau(CTimeSpan A)
{
   if(this->Get_Total_Seconds() == A.Get_Total_Seconds())
    return true;
   else
    return false;

}
bool CTimeSpan::SoSanh_BeHon(CTimeSpan A)
{
    if(this->Get_Total_Seconds() < A.Get_Total_Seconds())
    return true;
   else
    return false;
}
bool CTimeSpan::SoSanh_BeHon_Bang(CTimeSpan A)
{
  if(this->Get_Total_Seconds() <= A.Get_Total_Seconds())
    return true;
   else
    return false;

}
bool CTimeSpan::SoSanh_LonHon(CTimeSpan A)
{
   if(this->Get_Total_Seconds() > A.Get_Total_Seconds())
    return true;
   else
    return false;

}
bool CTimeSpan::SoSanh_LonHon_Bang(CTimeSpan A)
{
    if(this->Get_Total_Seconds() >= A.Get_Total_Seconds())
    return true;
   else
    return false;
}

void CTimeSpan::Xuat_Thoigian(CTimeSpan A)
{
    if (SoSanh_BangNhau(A))
        cout << "Timeline is Equal" << endl;
    else if (SoSanh_BeHon(A))
        cout <<"Timeline 1 is Lower than timeline 2"<<endl;
    else if (SoSanh_BeHon_Bang(A))
        cout <<"Timeline 1 is Lower/Equal than timeline 2"<<endl;
    else if (SoSanh_LonHon(A))
        cout <<"Timeline 1 is Greater than timeline 2" << endl;
    if (SoSanh_LonHon_Bang(A))
        cout <<"Timeline 1 is Greater/Equal than timeline 2" << endl;

}

