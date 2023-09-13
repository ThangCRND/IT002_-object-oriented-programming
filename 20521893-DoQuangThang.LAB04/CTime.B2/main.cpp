
#include "CTime.h"

int main()
{
    CTime A,B,kq;
    long T;
    cout << "Nhap thoi gian 1: ";
    A.Nhap();
    cout << "\n\nNhap thoi gian 2: ";
    B.Nhap();
    cout << "\n\nThoi gian 1 la: ";
    A.Xuat();
    cout << "\n\nThoi gian 2 la: ";
    B.Xuat();
    cout << "Nhap them T de cong (tru): ";
    cin >>T;
    cout << "\n\nThoi gian 1 sau khi cong them " << T << " giay la: ";
    kq = A.Add_Second(T);
    kq.Xuat();
    cout << "\n\nThoi gian 1 sau khi tru them " << T << " giay la: ";
    kq = A.Sub_Second(T);
    kq.Xuat();
    cout << "Thoi gian 1 tru thoi gian 2: ";
    kq = A.Tru(B);
    kq.Xuat();
    cout << "Thoi gian 2 sau khi cong 1 giay la: ";
    kq = B.Add_one_second();
    kq.Xuat();
    cout << " Thoi gian 2 sau khi tru 1 giay: ";
    kq = B.Sub_one_second();
    kq.Xuat();

    return 0;
}
