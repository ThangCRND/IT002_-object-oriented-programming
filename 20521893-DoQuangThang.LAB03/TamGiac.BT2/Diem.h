#ifndef DIEM_H_INCLUDED
#define DIEM_H_INCLUDED
#include <iostream>
#include <math.h>
using namespace std;

class Diem
{
private:
    double x;
    double y;
public:
    Diem();
    Diem (double, double);
    double getX();
    double getY();
    void SetX(double);
    void SetY(double);
    void Set_X_Y(double, double);
    void Nhap();
    void Xuat();
    Diem vector (Diem);
    Diem TinhTien (double, double);
    void Quay(double);
    ~Diem();
};



#endif // DIEM_H_INCLUDED
