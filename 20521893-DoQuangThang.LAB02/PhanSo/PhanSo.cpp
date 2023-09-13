#include "PhanSo.h"
#include<iostream>
using namespace std;
PhanSo::PhanSo()
{
    Tu = 0;
    Mau = 1;
}
void PhanSo::set(int t, int m)
{
    Tu = t;
    Mau = m;
}
PhanSo PhanSo::Tong(PhanSo PS)
{
    PhanSo tong;
    tong.Tu = Tu * PS.Mau + Mau * PS.Tu;
    tong.Mau = PS.Mau * Mau;
    return tong;
}
PhanSo PhanSo::Hieu(PhanSo PS)
{
    PhanSo hieu;
    hieu.Tu = Tu * PS.Mau - Mau * PS.Tu;
    hieu.Mau = PS.Mau * Mau;
    return hieu;
}
PhanSo PhanSo::Tich(PhanSo PS)
{
    PhanSo tich;
    tich.Tu = Tu * PS.Tu;
    tich.Mau = Mau * PS.Mau;
    return tich;
}
PhanSo PhanSo::Thuong(PhanSo PS)
{
    PhanSo thuong;
    thuong.Tu = Tu * PS.Mau;
    thuong.Mau = Mau * PS.Tu;
    return thuong;
}
void PhanSo::Nhap()
{
    cout << "Nhap tu so: ";
    cin >> Tu;
    cout << "Nhap Mau so: ";
    do
    {
        cin >> Mau;
        if (Mau == 0)
        {
            cout << "Phan so khong hop le.Nhap lai! " << endl;
            cout << "Mau so duoc nhap lai : ";
            cin >> Mau;
        }
    } while (Mau == 0);
}
void PhanSo::Xuat()
{
    cout << Tu << "/" << Mau;
}

 PhanSo::~PhanSo() {}
