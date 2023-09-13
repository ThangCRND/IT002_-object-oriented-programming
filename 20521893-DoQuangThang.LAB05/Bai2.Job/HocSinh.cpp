#include "HocSinh.h"
#include <string.h>
#include <iostream>

HocSinh::HocSinh()
{
    this->Khoi_lop=0;
    this ->Ten_Truong="";
}
HocSinh::HocSinh( string name, string date, int age, int Khoi_lop, string Ten_Truong): Job(name,date,age)
{
    this ->Khoi_lop=Khoi_lop;
    this ->Ten_Truong = Ten_Truong;
}
HocSinh::~HocSinh(){}


int HocSinh::GetGrade()
{
    return Khoi_lop;
}
string HocSinh::GetNameSchool()
{
    return Ten_Truong;
}
void HocSinh::SetGrade(int grade)
{
    Khoi_lop=grade;
}
void HocSinh::SetNameSchool(string school)
{
    Ten_Truong=school;
}


void HocSinh::Nhap()
{
    Job::Nhap();
      cout<<"Grade : ";
        cin>>Khoi_lop;
      cout<<"School name: ";
        getline(cin,Ten_Truong);
      cin.ignore();
}
void HocSinh::Xuat()
{
    cout <<"Thong tin HOC SINH : " << endl;
    Job::Xuat();
    cout<<"Khoi lop: "<<Khoi_lop << endl;
    cout <<"Truong : " << Ten_Truong << endl;
}
