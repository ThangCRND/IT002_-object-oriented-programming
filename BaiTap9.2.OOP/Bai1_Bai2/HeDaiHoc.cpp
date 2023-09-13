
#include "HeDaiHoc.hpp"

HeDaiHoc::HeDaiHoc(string tenluanvan, double diemluanvan)
{
    TenLuanVan = tenluanvan;
    DiemLuanVan= diemluanvan;
}

void HeDaiHoc::nhap()
{
    TruongDaiHoc::nhap();
    cout << "Nhap ten luan van: ";
    cin >> TenLuanVan;
    cout << "\nNhap diem luan van: ";
    cin >> DiemLuanVan;
    cout << endl;
}

void HeDaiHoc::xuat()
{
    TruongDaiHoc::xuat();
    cout << "Ten luan van: ";
    cout << TenLuanVan;
    cout << "\nDiem luan van: ";
    cout << DiemLuanVan;
    cout << endl;
}

bool HeDaiHoc::xetTotNghiep()
{
    if(TongSoTinChi >= 170 && DTB >= 5 && DiemLuanVan >= 5)
    {
        dem++;
        return 1;
    }
    return 0;
}

double HeDaiHoc::getDiemTrungBinh()
{
    return DTB;
}
