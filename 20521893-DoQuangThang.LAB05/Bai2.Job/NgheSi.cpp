#include "NgheSi.h"
#include <string.h>
#include <iostream>

NgheSi::NgheSi()
{
    this->ExpYear = 0;
    this->Major ="";
    this ->PopularFilms="";

}
NgheSi::NgheSi(string name,string date,int age,int exp, string major) : Job(name,date,age)
{
    this->ExpYear=exp;
    this->Major=major;
}
NgheSi::~NgheSi(){}

int NgheSi::GetExpYear()
{
    return ExpYear;
}
string NgheSi::GetMajor()
{
    return Major;
}
string NgheSi::GetPopularFilms()
{
    return PopularFilms;
}
void NgheSi::SetExpYear(int exp)
{
    ExpYear=exp;
}
void NgheSi::SetMajor(string major)
{
    Major=major;
}
void NgheSi::SetPopularFilms(string films)
{
   PopularFilms=films;
}


void NgheSi::Nhap()
{
    Job::Nhap();
    cout<<"Experience Year in Actor: ";
       cin>>ExpYear;
    cout<<"Major: ";
       getline(cin,Major);
      cin.ignore();
    cout << "Popular film: ";
       getline(cin,PopularFilms);
    cin.ignore();

}
void NgheSi::Xuat()
{
    cout << "Thong tin NGHE SI : " <<endl;
    Job::Xuat();
    cout <<"Kinh nghiem : " << ExpYear << " nam." <<endl;
    cout <<"Linh vuc : " << Major << endl;
    cout <<"Tac pham pho bien : " << PopularFilms << endl;
}
