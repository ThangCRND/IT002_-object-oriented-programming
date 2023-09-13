#include "TruongDaiHoc.hpp"
#ifndef HeDaiHoc_hpp
#define HeDaiHoc_hpp

#include <stdio.h>

class HeDaiHoc : public TruongDaiHoc
{
protected:
    string TenLuanVan;
    double DiemLuanVan;
public:
    HeDaiHoc(string = "", double = 0);
    void nhap(); // nhap ten luan van
    void xuat(); // xuat thong tin sinh vien
    double getDiemTrungBinh();
    bool xetTotNghiep();

};


#endif
