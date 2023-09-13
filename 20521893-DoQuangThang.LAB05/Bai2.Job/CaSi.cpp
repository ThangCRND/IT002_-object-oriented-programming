#include "CaSi.h"
#include <string.h>
#include <iostream>

CaSi::CaSi()
{
    this->ExpYear = 0;
    this->Song ="";

}
CaSi::CaSi(string name,string date,int age,int exp, string song) : Job(name,date,age)
{
    this->ExpYear=exp;
    this->Song=song;
}
CaSi::~CaSi(){}

int CaSi::GetExpYear()
{
    return ExpYear;
}
string CaSi::GetSong()
{
    return Song;
}
void CaSi::SetExpYear(int exp)
{
    ExpYear=exp;
}
void CaSi::SetSong(string song)
{
   Song=song;
}


void CaSi::Nhap()
{
    Job::Nhap();
    cout<<"Experience Year in Actor: ";
       cin>>ExpYear;
    cout << "Hit Song: ";
       getline(cin,Song);
    cin.ignore();

}
void CaSi::Xuat()
{
    cout << "Thong tin CA SI : " <<endl;
    Job::Xuat();
    cout <<"Kinh nghiem : " << ExpYear << " nam." <<endl;
    cout <<"Bai hat pho bien : " << Song << endl;
}

