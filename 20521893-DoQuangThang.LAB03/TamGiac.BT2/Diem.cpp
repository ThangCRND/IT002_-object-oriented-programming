#include "Diem.h"

Diem::Diem()
{
    SetX(0);
    SetY(0);
}
Diem::Diem(double a, double b)
{
     SetX(a);
     SetY(b);
}
double Diem::getX()
{
    return x;
}
double Diem::getY()
{
    return y;
}
void Diem::SetX(double a)
{
    x=a;
}
void Diem::SetY(double b)
{
    y=b;
}
void Diem::Set_X_Y(double a,double b)
{
   x=a;
   y=b;
}
Diem Diem::TinhTien (double a,double b)
{
    Diem M;
      x=x+a;
      y=y+b;
    return M;
}
void Diem::Nhap ()
{
    cout <<"Nhap hoanh do:";
    cin >> x;
    cout <<"Nhap tung do:";
    cin >> y;
}
void Diem::Xuat()
{
    cout << "(" << x << "," << y << ")" << endl;
}

Diem Diem::vector(Diem a)
{
    Diem c;
    c.SetX(a.getX()-x);
    c.SetY(a.getY()-y);
    return c;
}

void Diem::Quay(double rad)
{
    x = x*cos(rad) - y*sin(rad);
    y = x*sin(rad) + y*cos(rad);
}

Diem::~Diem(){}

