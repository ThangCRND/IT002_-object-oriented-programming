#include "SinhVien.h"
#include <string.h>
#include <iostream>

Sinhvien::Sinhvien()
{
    this->Ten_Truong = "";
    this ->Chuyen_nganh = "";
    this ->Nam_hoc = 0;
}
Sinhvien::Sinhvien(string name,string date,int age,string Ten_Truong, string Chuyen_Nganh) : Job(name, date, age)
{
    this ->Ten_Truong = Ten_Truong;
    this ->Chuyen_nganh=Chuyen_Nganh;
}
Sinhvien::~Sinhvien(){}


int Sinhvien::Get_NamHoc()
{
    return Nam_hoc;
}
string Sinhvien::Get_TenTruong()
{
    return Ten_Truong;
}
string Sinhvien::Get_ChuyenNganh()
{
    return Chuyen_nganh;
}
void Sinhvien::Set_NamHoc(int year)
{
      Nam_hoc=year;
}
void Sinhvien::Set_TenTruong(string school)
{
    Ten_Truong=school;
}
void Sinhvien::Set_ChuyenNganh(string nganh)
{
    Chuyen_nganh=nganh;
}


void Sinhvien::Nhap()
{
    Job::Nhap();
    cin.ignore();
    cout<<"Passed year: ";
      cin>>Nam_hoc;
    cout<<"School name: ";
      getline(cin,Ten_Truong);
    cout<<"Chuyen nganh: ";
      getline(cin,Chuyen_nganh);
}
void Sinhvien::Xuat()
{
    cout << "Thong tin SINH VIEN : " << endl;
    Job::Xuat();
    cout<<"Dau tot nghiep nam: "<<Nam_hoc << endl;
    cout<<"Chuyen nganh: "<<Chuyen_nganh << endl;
    cout<<" Tai truong: "<<Ten_Truong << endl;
}
