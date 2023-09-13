#ifndef DAGIAC_H_INCLUDED
#define DAGIAC_H_INCLUDED

#include <iostream>
#include <cmath>
#define PI 3.14159265

using namespace std;

class Vector
{
private:
    int v_x;
    int v_y;

public:
    Vector();
    Vector(int, int);
    ~Vector() {}
    void Setv_x(int);
    void Setv_y(int);
    int Getv_x();
    int Getv_y();
    void Nhap();
    void Print();
    friend class Diem;
    friend class DaGiac;
};

class Diem
{
private:
    int x;
    int y;

public:
    Diem();
    Diem(int, int);
    ~Diem() {}
    void Setx(int);
    void Sety(int);
    int Getx();
    int Gety();
    void Print();
    void TinhTien(Vector);
};

class DaGiac
{
protected:
    int SLPoint;
    Diem *Points;

public:
    DaGiac();
    DaGiac(int);
    ~DaGiac() {}
    void Set(int, int, int);
    void TinhTien(Vector);
    void QuayTamO(int);
    virtual void Nhap() = 0;
    virtual void Print() = 0;
};

class TamGiac : public DaGiac
{
public:
    TamGiac();
    ~TamGiac() {}
    bool CheckTamGiac();
    void Nhap();
    void Print();
};

class TuGiac : public DaGiac
{
public:
    TuGiac();
    ~TuGiac() {}
    virtual void Nhap() = 0;
    virtual void Print() = 0;
};

class HinhVuong : public TuGiac
{
public:
    HinhVuong();
    ~HinhVuong() {}
    void Nhap();
    void Print();
};

class HinhChuNhat : public TuGiac
{
public:
    HinhChuNhat();
    ~HinhChuNhat() {}
    void Nhap();
    void Print();
};

class HinhBinhHanh : public TuGiac
{
public:
    HinhBinhHanh();
    ~HinhBinhHanh() {}
    void Nhap();
    void Print();
};

class NguGiac : public DaGiac
{
public:
    NguGiac();
    ~NguGiac() {}
    void Nhap();
    void Print();
};
#endif // DAGIAC_H_INCLUDED
