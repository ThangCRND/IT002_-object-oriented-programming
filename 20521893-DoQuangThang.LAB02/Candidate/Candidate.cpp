#include "Candidate.h"
#include <iostream>
using namespace std;
Candidate::Candidate()
{
    Ten="";
    MaHS=0;
    NgaySinh.setTime(0,0,0);
    Toan=Van=Anh=0;
    LonHon15=(Toan+Van+Anh>15)? true : false;
}
void Candidate::Print()
{
    cout<<Ten <<" "<<MaHS<<" "<<"Ngay sinh: ";
    NgaySinh.Out();
    cout<<endl;
    cout<<"Diem toan, van, anh: "<<Toan<<" "<<Van<<" "<<Anh<<endl;
}
Candidate::Candidate(string name,int Id_Number,Time day_of_birth,double toan,double van,double anh){
    Ten=name;
    MaHS=Id_Number;
    NgaySinh=day_of_birth;
    Toan=toan;
    Van=van;
    Anh=anh;
    LonHon15=(Toan+Van+Anh>15)? true : false;
}
void Candidate::Input()
{
    cout<<"Nhap ten: ";
    cin>>Ten;
    cout<<"Nhap ma hoc sinh: ";
    cin>>MaHS;
    cout<<"Nhap ngay sinh: ";
    NgaySinh.In();
    cout<<"Nhap diem toan: ";
    cin>>Toan;
    cout<<"Nhap diem van: ";
    cin>>Van;
    cout<<"Nhap diem anh van: ";
    cin>>Anh;
    LonHon15=(Toan+Van+Anh>15)? true : false;
}
Candidate::~Candidate(){}

string Candidate::GetTen()
{
    return Ten;
}
int Candidate::GetMaHS()
{
    return MaHS;
}
Time Candidate::GetNgaySinh()
{
    return NgaySinh;
}
double Candidate::GetToan()
{
    return Toan;
}
double Candidate::GetVan()
{
    return Van;
}
double Candidate::GetAnh()
{
    return Anh;
}
bool Candidate::GetLonHon15()
{
    return LonHon15;
}
 void Candidate::SetTen(string name)
{
    this->Ten=name;
}
void Candidate::SetMaHS(int id)
{
    this->MaHS=id;
}
void Candidate::SetNgaySinh(Time birth)
{
    this->NgaySinh=birth;
}
void Candidate::SetToan(double toan)
{
    this->Toan=toan;
}
void Candidate::SetVan(double van)
{
    this->Van=van;
}
void Candidate::SetAnh(double anh)
{
    this->Anh=anh;
}
