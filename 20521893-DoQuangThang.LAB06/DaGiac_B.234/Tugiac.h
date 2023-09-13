#ifndef TUGIAC_H_INCLUDED
#define TUGIAC_H_INCLUDED

#include "DaGiac.h"

class TuGiac : public DaGiac
{
public:
    TuGiac();
    ~TuGiac();
    virtual void Nhap();
    virtual void Xuat();
};

class HinhVuong : public TuGiac
{
public:
    HinhVuong();
    ~HinhVuong(){};
    void Nhap();
    void Xuat();
};

class HinhChuNhat : public TuGiac
{
public:
    HinhChuNhat();
    ~HinhChuNhat(){};
    void Nhap();
    void Xuat();
};

class HinhBinhHanh : public TuGiac
{
public:
    HinhBinhHanh();
    ~HinhBinhHanh(){};
    void Nhap();
    void Xuat();
};

#endif // TUGIAC_H_INCLUDED
