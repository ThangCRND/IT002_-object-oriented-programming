#include"SoPhuc.h"
#include<iostream>
using namespace std;

int main()
{
    SoPhuc a,b,kq;
    cout << "Nhap  so phuc thu nhat: \n";
    a.Nhap();
    cout << "\nNhap so phuc thu hai: \n";
    b.Nhap();
    kq = a.Tong(b);
    cout << "\nTong cua hai  so phuc la:";
    kq.Xuat();
    kq = a.Hieu(b);
    cout << "\nHieu cua hai  so phuc la:";
    kq.Xuat();
    kq = a.Tich(b);
    cout << "\nTich cua hai so phuc la:";
    kq.Xuat();
    kq = a.Thuong(b);
    cout << "\nThuong cua hai  so phuc la:";
    kq.Xuat();
    return 0;

}
