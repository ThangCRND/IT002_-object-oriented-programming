#include <iostream>
using namespace std;

struct PhanSo
{
    int TuSo;
    int MauSo;
};
typedef struct PhanSo PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);
void RutGonPhanSo(PHANSO&);
PHANSO TongHaiPhanSo(PHANSO, PHANSO);
PHANSO HieuHaiPhanSo(PHANSO, PHANSO);
PHANSO TichHaiPhanSo(PHANSO, PHANSO);
PHANSO ThuongHaiPhanSo(PHANSO, PHANSO);

int main()
{
    PHANSO ps1, ps2, kq;
    cout << "Nhap phan so thu nhat: "<< endl;
    Nhap(ps1);
    cout << "Nhap phan so thu hai: " << endl;
    Nhap(ps2);
    kq = TongHaiPhanSo(ps1, ps2);
    cout << "\nTong = ";
    Xuat(kq);
    kq = HieuHaiPhanSo(ps1, ps2);
    cout << "\nHieu = ";
    Xuat(kq);
    kq = TichHaiPhanSo(ps1, ps2);
    cout << "\nTich = ";
    Xuat(kq);
    kq = ThuongHaiPhanSo(ps1, ps2);
    cout << "\nThuong = ";
    Xuat(kq);
    return 0;
}

void Nhap(PHANSO &X)
{
    cout << "Tu So = ";
    cin >> X.TuSo;
    cout << "Mau So = ";
    cin >> X.MauSo;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void RutGonPhanSo(PHANSO &A)
{
    int UCLN = gcd(A.TuSo, A.MauSo);
    A.TuSo = A.TuSo / UCLN;
    A.MauSo = A.MauSo / UCLN;
}
void Xuat(PHANSO A)
{
if(A.TuSo % A.MauSo == 0)
       {
        cout << A.TuSo / A.MauSo; 
    return;
       }
    if (A.TuSo > 0 && A.MauSo <0)
	   {
       cout << -A.TuSo <<"/" << -A.MauSo;
        return;
       }
    RutGonPhanSo(A);
    cout << A.TuSo << "/" << A.MauSo;
}

PHANSO TongHaiPhanSo(PHANSO A, PHANSO B)
{
    PHANSO Tong;
    Tong.TuSo = A.TuSo * B.MauSo + B.TuSo * A.MauSo;
    Tong.MauSo = A.MauSo * B.MauSo;
    return Tong;
}

PHANSO HieuHaiPhanSo(PHANSO A, PHANSO B)
{
    PHANSO Hieu;
    Hieu.TuSo = A.TuSo * B.MauSo - B.TuSo * A.MauSo;
    Hieu.MauSo = A.MauSo * B.MauSo;
    return Hieu;
}

PHANSO TichHaiPhanSo(PHANSO A, PHANSO B)
{
    PHANSO Tich;
    Tich.TuSo = A.TuSo * B.TuSo;
    Tich.MauSo = A.MauSo * B.MauSo;
    return Tich;
}

PHANSO ThuongHaiPhanSo(PHANSO A, PHANSO B)
{
    PHANSO Thuong;
    Thuong.TuSo = A.TuSo * B.MauSo;
    Thuong.MauSo = A.MauSo * B.TuSo;
    return Thuong;
}
