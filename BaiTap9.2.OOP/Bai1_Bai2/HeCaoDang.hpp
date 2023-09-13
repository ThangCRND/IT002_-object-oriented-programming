#include "TruongDaiHoc.hpp"
#ifndef HeCaoDang_hpp
#define HeCaoDang_hpp

#include <stdio.h>
class HeCaoDang : public TruongDaiHoc
{
protected:
    double diemThiTotNghiep;
public:
    HeCaoDang(double = 0);
    void nhap(); // nhap diem thi tot nghiep
    void xuat(); // xuat thong tin sinh vien he cao dang
    double getDiemTrungBinh();
    bool xetTotNghiep();
};



#endif
