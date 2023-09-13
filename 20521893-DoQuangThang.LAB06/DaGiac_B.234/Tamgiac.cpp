#include "Tamgiac.h"

TamGiac::TamGiac() : DaGiac(3) {}
TamGiac::~TamGiac(){}

bool TamGiac::KiemTra_TamGiac()
{
    int canh_01 = sqrt(pow(DIEM[0].GetX() - DIEM[1].GetX(), 2) + pow(DIEM[0].GetY() + DIEM[1].GetY(), 2));
    int canh_12 = sqrt(pow(DIEM[1].GetX() - DIEM[2].GetX(), 2) + pow(DIEM[1].GetY() + DIEM[2].GetY(), 2));
    int canh_02 = sqrt(pow(DIEM[0].GetX() - DIEM[2].GetX(), 2) + pow(DIEM[0].GetY() + DIEM[2].GetY(), 2));

    if ((canh_01 + canh_02) > canh_12 and (canh_01 + canh_12) > canh_02 and (canh_02 + canh_12) > canh_01)
    {
        return true;
    }
     else
        return false;
}

void TamGiac::Nhap()
{
    delete this->DIEM;
    this->DIEM = new Diem[n];
    int x,y;
    cout << "Nhap cac diem cua tam giac: ";
    for (int i = 0; i < 3; i++)
    {
        cout << "Nhap diem " << i + 1 << "(x, y): ";
        cin >> x >> y;
        Set(i, x, y);
    }

    if (KiemTra_TamGiac() == false)
    {
        this->DIEM = NULL;
        cout << "Tam giac khong hop le."<<endl;
    }
}
void TamGiac::Xuat()
{
    if (this->DIEM == NULL)
    {
        cout << "\nTam giac khong hop le." << endl;
        return;
    }

    cout << "Toa do diem trong tam giac: ";
     for (int i = 0; i < this->n ; i++)
     {
        cout << (char)(65 + i) << "(" << this->DIEM[i].GetX() << ", " << this->DIEM[i].GetY() << ") ";
     }
}
