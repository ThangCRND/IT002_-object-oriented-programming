#include "DaGiac.h"

//Vector
Vector::Vector()
{
    this->v_x = 0;
    this->v_y = 0;
}

Vector::Vector(int v_x, int v_y)
{
    this->v_x = v_x;
    this->v_y = v_y;
}

inline void Vector::Setv_x(int v_x)
{
    this->v_x = v_x;
}

inline void Vector::Setv_y(int v_y)
{
    this->v_y = v_y;
}

inline int Vector::Getv_x()
{
    return this->v_x;
}

inline int Vector::Getv_y()
{
    return this->v_y;
}

void Vector::Nhap()
{
    int x, y;
    cout << "Nhap Vector(x, y): ";
    cin >> x >> y;
    Setv_x(x);
    Setv_y(y);
}

inline void Vector::Print()
{
    cout << "(" << this->v_x << ", " << this->v_y << ")\n";
}

// Diem
inline Diem::Diem()
{
    this->x = 0;
    this->y = 0;
}

inline Diem::Diem(int x, int y)
{
    this->x = x;
    this->y = y;
}

inline void Diem::Setx(int x)
{
    this->x = x;
}

inline void Diem::Sety(int y)
{
    this->y = y;
}

inline int Diem::Getx()
{
    return this->x;
}

inline int Diem::Gety()
{
    return this->y;
}

inline void Diem::Print()
{
    cout << "(" << this->x << ", " << this->y << ")\n";
}

void Diem::TinhTien(Vector a)
{
    this->x += a.v_x;
    this->y += a.v_y;
}

//DaGiac
DaGiac::DaGiac()
{
    this->SLPoint = 0;
    this->Points = NULL;
}

DaGiac::DaGiac(int SL)
{
    this->SLPoint = SL;
    this->Points = NULL;
}

void DaGiac::Set(int vi_tri, int x, int y)
{
    if (vi_tri >= this->SLPoint)
    {
        cout << "out of range.";
        return;
    }
    this->Points[vi_tri].Setx(x);
    this->Points[vi_tri].Sety(y);
}

void DaGiac::TinhTien(Vector a)
{
    if (this->Points == NULL)
    {
        cout << "\nKhong the tinh tien";
        return;
    }
    for (int i = 0; i < this->SLPoint; i++)
    {
        this->Points[i].TinhTien(a);
    }
}

void DaGiac::QuayTamO(int a)
{
    if (this->Points == NULL)
    {
        cout << "\nKhong the quay tam O";
        return;
    }
    double sina = (double)sin(a * (double)PI / 180);
    double cosa = (double)cos(a * (double)PI / 180);
    for (int i = 0; i < this->SLPoint; i++)
    {
        int new_x = this->Points[i].Getx() * cosa - this->Points[i].Gety() * sina;
        int new_y = this->Points[i].Getx() * sina + this->Points[i].Gety() * cosa;
        this->Points[i].Setx(new_x);
        this->Points[i].Sety(new_y);
    }
}

void DaGiac::Nhap()
{
    int sl;
    cout << "Nhap so luong diem trong da giac: ";
    cin >> sl;
    while (sl < 3)
    {
        cout << "Da giac phai co it nhat 3 diem, xin nhap lai: ";
        cin >> sl;
    }
    this->SLPoint = sl;
    delete this->Points;
    this->Points = new Diem[sl];
    int x, y;
    cout << "Nhap toa do cac diem cua da giac (" << this->SLPoint << " diem):\n";
    for (int i = 0; i < this->SLPoint; i++)
    {
        cout << "Diem " << i + 1 << " (x, y): ";
        cin >> x >> y;
        Set(i, x, y);
    }
}

void DaGiac::Print()
{
    cout << "\nToa do diem trong da giac:\n";
    for (int i = 0; i < this->SLPoint; i++)
    {
        cout << (char)(65 + i) << "(" << this->Points[i].Getx() << ", " << this->Points[i].Gety() << ") ";
    }
}

//Tam Giac
TamGiac::TamGiac() : DaGiac(3)
{
}

bool TamGiac::CheckTamGiac()
{
    int len01 = sqrt(pow(this->Points[0].Getx() - this->Points[1].Getx(), 2) + pow(this->Points[0].Gety() + this->Points[1].Gety(), 2));
    int len12 = sqrt(pow(this->Points[1].Getx() - this->Points[2].Getx(), 2) + pow(this->Points[1].Gety() + this->Points[2].Gety(), 2));
    int len02 = sqrt(pow(this->Points[0].Getx() - this->Points[2].Getx(), 2) + pow(this->Points[0].Gety() + this->Points[2].Gety(), 2));
    if ((len01 + len02) > len12 and (len01 + len12) > len02 and (len02 + len12) > len01)
    {
        return true;
    }
    else
        return false;
}

void TamGiac::Nhap()
{
    delete this->Points;
    this->Points = new Diem[this->SLPoint];
    int x, y;
    cout << "\nNhap cac diem cua tam giac:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Nhap diem " << i + 1 << "(x, y): ";
        cin >> x >> y;
        Set(i, x, y);
    }

    if (CheckTamGiac() == false)
    {
        this->Points = NULL;
        cout << "\nTam giac khong hop le.";
    }
}

void TamGiac::Print()
{
    if (this->Points == NULL)
    {
        cout << "\nTam giac khong hop le.";
        return;
    }
    cout << "\nToa do diem trong tam giac:\n";
    for (int i = 0; i < this->SLPoint; i++)
    {
        cout << (char)(65 + i) << "(" << this->Points[i].Getx() << ", " << this->Points[i].Gety() << ") ";
    };
}

//Tu Giac
TuGiac::TuGiac() : DaGiac(4)
{
}

void TuGiac::Nhap()
{
    delete this->Points;
    this->Points = new Diem[this->SLPoint];
    int x, y;
    cout << "\nNhap cac diem cua tu giac:\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "Nhap diem " << i + 1 << "(x, y): ";
        cin >> x >> y;
        Set(i, x, y);
    }
}

void TuGiac::Print()
{
    if (this->Points == NULL)
    {
        cout << "\nTu giac khong hop le.";
        return;
    }
    cout << "\nToa do diem trong tu giac:\n";
    for (int i = 0; i < this->SLPoint; i++)
    {
        cout << (char)(65 + i) << "(" << this->Points[i].Getx() << ", " << this->Points[i].Gety() << ") ";
    };
}

//Hinh binh hanh
HinhBinhHanh::HinhBinhHanh() : TuGiac()
{
}

void HinhBinhHanh::Nhap()
{
    delete this->Points;
    this->Points = new Diem[this->SLPoint];
    int x, y;
    cout << "\nNhap cac diem cua hinh binh hanh:\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "Nhap diem " << i + 1 << "(x, y): ";
        cin >> x >> y;
        Set(i, x, y);
    }
}

void HinhBinhHanh::Print()
{
    if (this->Points == NULL)
    {
        cout << "\nHinh binh hanh khong hop le.";
        return;
    }
    cout << "\nToa do diem trong hinh binh hanh:\n";
    for (int i = 0; i < this->SLPoint; i++)
    {
        cout << (char)(65 + i) << "(" << this->Points[i].Getx() << ", " << this->Points[i].Gety() << ") ";
    };
}

//Hinh chu nhat
HinhChuNhat::HinhChuNhat() : TuGiac()
{
}

void HinhChuNhat::Nhap()
{
    delete this->Points;
    this->Points = new Diem[this->SLPoint];
    int x, y;
    cout << "\nNhap cac diem cua hinh chu nhat:\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "Nhap diem " << i + 1 << "(x, y): ";
        cin >> x >> y;
        Set(i, x, y);
    }
}

void HinhChuNhat::Print()
{
    if (this->Points == NULL)
    {
        cout << "\nHinh chu nhat khong hop le.";
        return;
    }
    cout << "\nToa do diem trong hinh chu nhat:\n";
    for (int i = 0; i < this->SLPoint; i++)
    {
        cout << (char)(65 + i) << "(" << this->Points[i].Getx() << ", " << this->Points[i].Gety() << ") ";
    };
}

// Hinh Vuong
HinhVuong::HinhVuong() : TuGiac()
{
}

void HinhVuong::Nhap()
{
    delete this->Points;
    this->Points = new Diem[this->SLPoint];
    int x, y;
    cout << "\nNhap cac diem cua hinh vuong:\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "Nhap diem " << i + 1 << "(x, y): ";
        cin >> x >> y;
        Set(i, x, y);
    }
}

void HinhVuong::Print()
{
    if (this->Points == NULL)
    {
        cout << "\nHinh vuong khong hop le.";
        return;
    }
    cout << "\nToa do diem trong hinh vuong:\n";
    for (int i = 0; i < this->SLPoint; i++)
    {
        cout << (char)(65 + i) << "(" << this->Points[i].Getx() << ", " << this->Points[i].Gety() << ") ";
    };
}

//Ngu Giac
NguGiac::NguGiac() : DaGiac(5)
{
}

void NguGiac::Nhap()
{
    delete this->Points;
    this->Points = new Diem[this->SLPoint];
    int x, y;
    cout << "\nNhap cac diem cua ngu giac:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Nhap diem " << i + 1 << "(x, y): ";
        cin >> x >> y;
        Set(i, x, y);
    }
}

void NguGiac::Print()
{
    if (this->Points == NULL)
    {
        cout << "\nNgu giac khong hop le.";
        return;
    }
    cout << "\nToa do diem trong ngu giac:\n";
    for (int i = 0; i < this->SLPoint; i++)
    {
        cout << (char)(65 + i) << "(" << this->Points[i].Getx() << ", " << this->Points[i].Gety() << ") ";
    };
}
