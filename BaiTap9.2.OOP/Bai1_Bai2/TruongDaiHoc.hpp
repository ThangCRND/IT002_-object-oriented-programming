
#ifndef TruongDaiHoc_hpp
#define TruongDaiHoc_hpp
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
class TruongDaiHoc
{
protected:
    string MSSV;
    string HoTen;
    string DiaChi;
    int TongSoTinChi;
    double DTB;
    static int dem;
public:
    TruongDaiHoc(string mssv = "", string HoTen = "", string DiaChi = "", int tongsotinchi = 0, double dtb = 0);
    void nhap();
    void xuat();
    int getSoSvTotNghiep();

};
#endif
