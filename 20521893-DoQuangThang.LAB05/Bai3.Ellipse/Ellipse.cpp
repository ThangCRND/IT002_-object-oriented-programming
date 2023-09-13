#include"Ellipse.h"

Ellipse::Ellipse()
{
    SetCoorX(0);
    SetCoorY(0);
    SetTruc_dai(0);
    SetTruc_ngan(0);
}
Ellipse::Ellipse(double x,double y,double trucdai,double trucngan)
{
    SetCoorX(x);
    SetCoorY(y);
    SetTruc_dai(trucdai);
    SetTruc_ngan(trucngan);
}
Ellipse::~Ellipse(){}


double Ellipse::GetCoorX()
{
  return Coor_X;
}
double Ellipse::GetCoorY()
{
    return Coor_Y;
}
double Ellipse::GetTruc_dai()
{
    return Truc_dai;
}
double Ellipse::GetTruc_ngan()
{
    return Truc_ngan;
}

void Ellipse::SetCoorX(double x)
{
    Coor_X=x;
}
void Ellipse::SetCoorY(double y)
{
    Coor_Y=y;
}
void Ellipse::SetTruc_dai(double trucdai)
{
    Truc_dai=trucdai;
}
void Ellipse::SetTruc_ngan(double trucngan)
{
    Truc_ngan=trucngan;
}
void Ellipse::Nhap()
{

    cout << "Nhap toa do x:";
    cin>> Coor_X;

    cout << "Nhap toa do y:";
    cin >> Coor_Y;

    cout << "Nhap truc dai: ";
    cin>>Truc_dai;

    cout << "Nhap truc ngan: ";
    cin>>Truc_ngan;

}
void Ellipse::Xuat()
{
    cout << "===============ELLIPSE======================" << endl;
    cout << "Ellipse co toa do ( "<< this->Coor_X <<" , "<<this->Coor_Y  << " )" << endl;
    cout << "Truc dai : " << this->Truc_dai << endl;
    cout << "Truc ngan: " << this->Truc_ngan << endl;
}
