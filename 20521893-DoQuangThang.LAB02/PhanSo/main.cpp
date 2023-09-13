#include"phanso.h"
#include<iostream>

using namespace std;
int main()
{
    PhanSo a,b,kq;
   cout << "Nhap phan so thu nhat: \n";
    a.Nhap();
    cout << "\nNhap phan so thu hai: \n";
    b.Nhap();
    cout << "\nPhan so thu nhat:";
    a.Xuat();
    cout << "\nPhan so thu hai:";
    b.Xuat();
    kq = a.Tong(b);
    cout << "\nTong cua hai phan so la:";
    kq.Xuat();
    kq = a.Hieu(b);
    cout << "\nHieu cua hai phan so la:";
    kq.Xuat();
    kq = a.Tich(b);
    cout << "\nTich cua hai phan so la:";
    kq.Xuat();
    kq = a.Thuong(b);
    cout << "\nThuong cua hai phan so la:";
    kq.Xuat();
    return 1;


}
