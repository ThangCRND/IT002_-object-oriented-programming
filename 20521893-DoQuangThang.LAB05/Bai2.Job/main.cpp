#include <iostream>
#include "Job.h"
#include "SinhVien.h"
#include "HocSinh.h"
#include "CongNhan.h"
#include "NgheSi.h"
#include "CaSi.h"
#include <string.h>

using namespace std;

int main()
{
    int A,B,C,D,E;
    cout << "Nhap so luong sinh vien: ";
    cin >> A;
    cout << "Nhap so luong hoc sinh: ";
    cin >> B;
    cout << "Nhap so luong cong nhan: ";
    cin >> C;
    cout << "Nhap so luong nghe si: ";
    cin >> D;
    cout << "Nhap so luong ca si: ";
    cin >> E;

    cout << endl;

    Sinhvien *SV = new Sinhvien[A];
    HocSinh *HS = new HocSinh[B];
    CongNhan *CN = new CongNhan[C];
    NgheSi *NS = new NgheSi[D];
    CaSi *CS = new CaSi[E];

    for (int i = 0; i < A; i++)
    {
        cout << "Nhap thong tin sinh vien thu " << i + 1<< ": ";
        SV[i].Nhap();
    }
    cout << endl;
    for (int i = 0; i < B; i++)
    {
        cout << "Nhap thong tin hoc sinh thu " << i + 1 << ": ";
        HS[i].Nhap();
    }
    cout << endl;
    for (int i = 0; i < C; i++)
    {
        cout << "Nhap thong tin cong nhan thu " << i + 1 << ": ";
        CN[i].Nhap();
    }
    cout << endl;
    for (int i = 0; i < D; i++)
    {
        cout << "Nhap thong tin nghe si thu " << i + 1 << ": ";
        NS[i].Nhap();
    }
    cout << endl;
    for (int i = 0; i < E; i++)
    {
        cout << "Nhap thong tin ca si thu " << i + 1 << ": ";
        CS[i].Nhap();
    }

    for (int i = 0; i < A; i++)
        SV[i].Xuat();
    cout << endl;
    for (int i = 0; i < B; i++)
        HS[i].Xuat();
    cout << endl;
    for (int i = 0; i < C; i++)
        CN[i].Xuat();
    cout << endl;
    for (int i = 0; i < D; i++)
        NS[i].Xuat();
    cout << endl;
    for (int i = 0; i < E; i++)
        CS[i].Xuat();
    return 0;
}
