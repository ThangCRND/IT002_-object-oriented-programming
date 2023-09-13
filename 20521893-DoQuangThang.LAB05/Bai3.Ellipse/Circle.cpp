#include "Circle.h"

Circle::Circle()
{
    this->Bankinh=0;
}
Circle::Circle(double x,double y,double r): Ellipse(x,y,r,r)
{
    SetBankinh(r);
}
Circle::~Circle(){}

void Circle::SetBankinh(double r)
{
    SetTruc_dai(r);
    SetTruc_ngan(r);
     Bankinh=r;
}
double Circle::GetBankinh()
{
    return Bankinh;
}

void Circle::Nhap()
{
    cout<<"=======Nhap Toa do va ban kinh=======" << endl;

    cout << "Nhap toa do x:";
    cin>> Coor_X;

    cout << "Nhap toa do y:";
    cin >> Coor_Y;

    cout<<"Ban kinh: ";
    cin>>Bankinh;

}
void Circle::Xuat()
{

    cout << "===============CIRCLE======================" << endl;
    cout << "Hinh tron co toa do ( "<< this->Coor_X <<" , "<<this->Coor_Y  << " )" << endl;
    cout << "Ban kinh: " << this->Bankinh << endl;
}
