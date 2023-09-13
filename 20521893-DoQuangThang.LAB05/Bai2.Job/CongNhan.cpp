#include "CongNhan.h"
#include <string.h>
#include <iostream>

CongNhan::CongNhan()
{
    this->ExpYear =0;
    this ->Nghe ="";
}
CongNhan::CongNhan(string name,string date,int age,int exp, string nghe) : Job(name,date,age)
{
    this->ExpYear=exp;
    this ->Nghe= nghe;
}
CongNhan::~CongNhan(){}

int CongNhan::GetExpYear()
{
    return ExpYear;
}
string CongNhan::GetNghe()
{
    return Nghe;
}
void CongNhan::SetExpYear(int exp)
{
    ExpYear=exp;
}
void CongNhan::SetNghe(string nghe)
{
   Nghe=nghe;
}


void CongNhan::Nhap()
{
    Job::Nhap();
    cout<<"Experience Year in Worker: ";
       cin>>ExpYear;
    cout<<"Nghe nghiep: ";
     getline(cin,Nghe);
     cin.ignore();

}
void CongNhan::Xuat()
{
    cout <<"Thong tin CONG NHAN : " << endl;
     Job::Xuat();
    cout<<" Kinh nghiem lam viec: "<< ExpYear <<" nam." << endl;
    cout << "Nghe nghiep: " << Nghe << endl;
}

