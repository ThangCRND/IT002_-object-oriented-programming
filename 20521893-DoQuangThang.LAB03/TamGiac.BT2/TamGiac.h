#ifndef TAMGIAC_H_INCLUDED
#define TAMGIAC_H_INCLUDED

#include <iostream>
#include "Diem.h"

using namespace std;

class Tamgiac
{
private:
    Diem A, B, C;
public:
    Tamgiac();
    Tamgiac(Diem, Diem, Diem);
    void Nhap();
    void Xuat();
    Diem TinhTien(double, double);
    void Quay(double);
    void Phong_Thu(double);
};



#endif // TAMGIAC_H_INCLUDED
