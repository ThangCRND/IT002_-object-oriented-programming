#include "Diem.h"

Diem::Diem()
{
    this->x = 0;
    this->y = 0;
}
Diem::Diem(int a,int b)
{
    SetX(a);
    SetY(b);
}
Diem::~Diem(){}

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
Diem Diem::TinhTien(Vecto T)
{
    Diem M;
    M.x = x + T.v_x;
    M.y = y + T.v_y;
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
     cout << "(" << this->x << ", " << this->y << ")" << endl;
}


