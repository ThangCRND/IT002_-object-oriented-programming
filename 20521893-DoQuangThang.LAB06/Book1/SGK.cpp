#include "SGK.h"

SGK::SGK()
{
    this->Grade="";
}
SGK::SGK(int grade)
{
    SetGrade(grade);
}
SGK::~SGK(){};

string SGK::GetGrade()
{
    return Grade;
}
void SGK::SetGrade(int grade)
{
    Grade=grade;
}

void SGK::Nhap()
{

     Book::Nhap();
    cout << "Nhap khoi lop:" << endl;
       cin.ignore();
     getline(cin,Grade);

}
void SGK::Xuat()
{
    cout << "====Thong tin SACH GIAO KHOA===="<<endl;
     Book::Xuat();
     cout << "Khoi lop:" << this->Grade << endl;
     cout <<"================================" <<endl;
}
