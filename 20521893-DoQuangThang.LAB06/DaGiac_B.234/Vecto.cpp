#include "Vecto.h"

Vecto::Vecto()
{
    this->v_x = 0;
    this->v_y = 0;
}

Vecto::Vecto(int v_x, int v_y)
{
    this->v_x = v_x;
    this->v_y = v_y;
}
Vecto::~Vecto(){};

void Vecto::Setv_x(int v_x)
{
    this->v_x = v_x;
}
void Vecto::Setv_y(int v_y)
{
    this->v_y = v_y;
}


 int Vecto::Getv_x()
{
    return this->v_x;
}

 int Vecto::Getv_y()
{
    return this->v_y;
}

void Vecto::Nhap()
{
    int x, y;
    cout << "Nhap Vector(x, y): ";
    cin >> x >> y;
    Setv_x(x);
    Setv_y(y);
}

void Vecto::Xuat()
{
    cout << "( " << this->v_x << ", " << this->v_y << " )" <<endl;
}
