#include "TruongDaiHoc.hpp"
#include <iostream>

int TruongDaiHoc::dem = 0;

TruongDaiHoc::TruongDaiHoc(string mssv, string hoten, string diachi, int tongsotinchi, double dtb)
{
    MSSV = mssv;
    HoTen = hoten;
    DiaChi = diachi;
}

void TruongDaiHoc::nhap()
{
    cout << "Nhap MSSV: ";
    cin >> MSSV;
    cout << "\nNhap HoTen: ";
    cin >> HoTen;
    cout << "\nDia chi: ";
    cin >> DiaChi;
    cout << "\nTong so tin chi: ";
    cin >> TongSoTinChi;
    cout << "\nNhap diem trung binh: ";
    cin >> DTB;
    cout << endl;
    
}

void TruongDaiHoc::xuat()
{
    cout << "MSSV: ";
    cout << MSSV;
    cout << "\nHoTen: ";
    cout << HoTen;
    cout << "\nDia chi: ";
    cout << DiaChi;
    cout << "\nTong so tin chi: ";
    cout << TongSoTinChi;
    cout << "\nNhap diem trung binh: ";
    cout << DTB << endl;
}

int TruongDaiHoc::getSoSvTotNghiep()
{
    return dem;
}


