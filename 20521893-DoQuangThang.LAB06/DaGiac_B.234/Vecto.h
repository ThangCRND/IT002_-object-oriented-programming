#ifndef VECTO_H_INCLUDED
#define VECTO_H_INCLUDED

#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;

class Vecto
{
private:
    int v_x;
    int v_y;

public:
    Vecto();
    Vecto(int, int);
    ~Vecto();

    void Setv_x(int);
    void Setv_y(int);

    int Getv_x();
    int Getv_y();

    void Nhap();
    void Xuat();

    friend class Diem;
    friend class DaGiac;
};

#endif // VECTO_H_INCLUDED
