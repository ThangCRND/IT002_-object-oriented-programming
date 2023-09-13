#include "DaGiac.h"
#define PI 3.141592

DaGiac::DaGiac()
{
    this-> n = 0;
    this->DIEM = NULL;
}

DaGiac::DaGiac(int so_luong_diem)
{
    this->n = so_luong_diem;
    this-> DIEM = NULL;
}

void DaGiac::Set(int pos, int x, int y)
{
    if (pos >= n)
    {
        cout << " Ngoai pham vi quy dinh." <<endl;
        return;
    }
    this->DIEM[pos].SetX(x);
    this->DIEM[pos].SetY(y);
}

void DaGiac::TinhTien(Vecto T)
{
    if (this->DIEM == NULL)
    {
        cout << "\nKhong the tinh tien!";
        return;
    }
    for (int i = 0; i < this->n; i++)
    {
        this->DIEM[i].TinhTien(T);
    }
}

void DaGiac::QuayTam_O(int A)
{
    if (this->DIEM == NULL)
    {
        cout << " Khong the quay tam O.";
        return;
    }

    double SinA = (double)sin(A * (double)PI / 180);
    double CosA = (double)cos(A * (double)PI / 180);

    for (int i = 0; i < this->n ; i++)
    {
        int new_X = this->DIEM[i].GetX() * CosA - this->DIEM[i].GetY() * SinA;
        int new_Y = this->DIEM[i].GetX() * SinA + this->DIEM[i].GetY() * CosA;
          this->DIEM[i].SetX(new_X);
          this->DIEM[i].SetY(new_Y);
    }
}

void DaGiac::Nhap()
{
    int so_luong;
    cout << "Nhap so luong diem trong da giac: ";
    cin >> so_luong;

    while (so_luong < 3)
    {
        cout << "Da giac phai co it nhat 3 diem, xin nhap lai: ";
        cin >> so_luong;
    }

    this->n = so_luong;
    delete this->DIEM;
    this->DIEM = new Diem[so_luong];

    int x;
    int y;
    cout << "Nhap toa do cac diem cua da giac (" << this->n << " diem): ";
      for (int i = 0; i < this->n; i++)
      {
        cout << "Diem " << i + 1 << " (x, y): ";
        cin >> x >> y;
        Set(i, x, y);
      }
}

void DaGiac::Xuat()
{
    cout << "Toa do diem trong da giac:\n";

    for (int i = 0; i < this->n; i++)
    {
        cout << (char)(65 + i) << "(" << this->DIEM[i].GetX() << ", " << this->DIEM[i].GetY() << ") ";
    }
}
