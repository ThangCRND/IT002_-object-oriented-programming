#include<iostream>
#include"Diem.h"
using namespace std;

Diem::Diem()
{
    SetX(0);
    SetY(0);
}
Diem::Diem(int a,int b)
{
    SetX(a);
    SetY(b);
}
int Diem::GetX()
{
    return x;
}
int Diem::GetY()
{
    return y;
}
void Diem::SetX(int a)
{
    x=a;
}
void Diem::SetY(int b)
{
    y=b;
}
Diem Diem::TinhTien(int a,int b)
{
    Diem M;
    x = x + a;
    y = y + b;
   return M;
}
void Diem::Input()
{
    cout << " Hoanh do la: ";
    cin >> x;
    cout << "Tung do la: " ;
    cin >> y;
}
void Diem::Output()
{
    cout << "Hoanh do : " << x << endl;
    cout << "Tung do : " << y << endl;
}

Diem::~Diem(){}
