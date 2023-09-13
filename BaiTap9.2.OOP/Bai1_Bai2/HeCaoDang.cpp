#include "HeCaoDang.hpp"


HeCaoDang::HeCaoDang(double diemTotNghiep)
{
    diemThiTotNghiep = diemTotNghiep;
}
 void HeCaoDang::nhap()
{
    TruongDaiHoc::nhap();
    cout << "Nhap diem thi tot nghiep: ";
    cin >> diemThiTotNghiep;
}

void HeCaoDang::xuat()
{
    TruongDaiHoc::xuat();
    cout << "Diem thi tot nghiep: ";
    cout << diemThiTotNghiep;
}

bool HeCaoDang::xetTotNghiep()
{
    if(TongSoTinChi >= 120 && DTB >= 5 && diemThiTotNghiep >= 5)
    {
        dem++;
        return 1;
    }
    return 0;
}

double HeCaoDang::getDiemTrungBinh()
{
    return DTB;
}
