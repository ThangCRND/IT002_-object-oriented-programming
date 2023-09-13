#include "Ngugiac.h"

NguGiac::NguGiac() : DaGiac(5){}

void NguGiac::Nhap()
{
    delete DIEM;
    this->DIEM = new Diem[n];

    int x, y;
    cout << "Nhap cac diem cua ngu giac:";
     for (int i = 0; i < 5; i++)
      {
        cout << "Nhap diem " << i + 1 << "(x, y): ";
        cin >> x >> y;
        Set(i, x, y);
      }
}

void NguGiac::Xuat()
{
    if (this->DIEM == NULL)
    {
        cout << "Ngu giac khong hop le.";
        return;
    }
      cout << "Toa do diem trong ngu giac:";
     for (int i = 0; i < this->n; i++)
       {
        cout << (char)(65 + i) << "(" << this->DIEM[i].GetX() << ", " << this->DIEM[i].GetY() << ")";
       }
}
