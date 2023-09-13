#include "Tugiac.h"

TuGiac::TuGiac() : DaGiac(4) {}
TuGiac::~TuGiac() {}

void TuGiac::Nhap()
{
    delete this->DIEM;
    this->DIEM = new Diem[n];

    int x, y;
    cout << "Nhap cac diem cua tu giac:";
    for (int i = 0; i < 4; i++)
     {
        cout << "Nhap diem " << i + 1 << "(x, y): ";
        cin >> x >> y;
        Set(i, x, y);
     }
}

void TuGiac::Xuat()
{
    if (this->DIEM == NULL)
    {
        cout << "Tu giac khong hop le." <<endl;
        return;
    }
    cout << "Toa do diem trong tu giac:";
    for (int i = 0; i < this->n ; i++)
    {
        cout << (char)(65 + i) << "(" << this->DIEM[i].GetX() << ", " << this->DIEM[i].GetY() << ")";
    };
}

//Hinh binh hanh//
HinhBinhHanh::HinhBinhHanh(){};

void HinhBinhHanh::Nhap()
{
    delete this->DIEM; // xoa de tao moi //
    this->DIEM = new Diem[n];
    int x, y;
      cout << "Nhap cac diem cua hinh binh hanh:";

     for (int i = 0; i < 4; i++)
      {
        cout << "Nhap diem " << i + 1 << "(x, y): ";
        cin >> x >> y;
        Set(i, x, y);
      }
}
void HinhBinhHanh::Xuat()
{
    if (this->DIEM == NULL)
    {
        cout << "Hinh binh hanh khong hop le."<<endl;
        return;
    }
    cout << "Toa do diem trong hinh binh hanh:";
    for (int i = 0; i < this->n ; i++)
    {
        cout << (char)(65 + i) << "(" << this->DIEM[i].GetX() << ", " << this->DIEM[i].GetY() << ")";
    };
}

//Hinh chu nhat
HinhChuNhat::HinhChuNhat() {}

void HinhChuNhat::Nhap()
{
    delete this->DIEM; //xoa de tao moi //
    this->DIEM = new Diem[n];

    int x, y;
    cout << "Nhap cac diem cua hinh chu nhat:";

    for (int i = 0; i < 4; i++)
    {
        cout << "Nhap diem " << i + 1 << "(x, y): ";
        cin >> x >> y;
        Set(i, x, y);
    }
}

void HinhChuNhat::Xuat()
{
    if (this->DIEM == NULL)
    {
        cout << "Hinh chu nhat khong hop le." <<endl;
        return;
    }
    cout << "Toa do diem trong hinh chu nhat:";

    for (int i = 0; i < this->n ; i++)
    {
        cout << (char)(65 + i) << "(" << this->DIEM[i].GetX() << ", " << this->DIEM[i].GetY() << ") ";
    };
}

// Hinh Vuong
HinhVuong::HinhVuong() {}

void HinhVuong::Nhap()
{
    delete this->DIEM;
    this->DIEM = new Diem[n];
    int x, y;
    cout << "\nNhap cac diem cua hinh vuong:\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "Nhap diem " << i + 1 << "(x, y): ";
        cin >> x >> y;
        Set(i, x, y);
    }
}

void HinhVuong::Xuat()
{
    if (this->DIEM == NULL)
    {
        cout << "\nHinh vuong khong hop le." << endl;
        return;
    }
    cout << "Toa do diem trong hinh vuong:";
    for (int i = 0; i < this->n; i++)
    {
        cout << (char)(65 + i) << "(" << this->DIEM[i].GetX() << ", " << this->DIEM[i].GetY() << ")";
    };
}


