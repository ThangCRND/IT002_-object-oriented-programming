// 
//Nhóm:
//Tên tv 1 : Trần Vĩnh Tuân ,MASV: 20522127
//Tên tv 2 : Lê Viết Tài Mẫn ,MASV:20521593
//Tên tv 3 : Đỗ Quang Thắng ,MASV: 20521893
//Tên tv 4 : Dương Đỗ Khoa ,MASV: 20521465
//Tên tv 5 : Hoàng Thanh Lâm ,MASV: 20521513

#include <iostream>
#include <string>
#include<time.h>

using namespace std;

class Babilon
{
protected:
    double Weight, khoangcach;
    string name;
    static int MaxEnergy_Of_Babilon;
    static string Name_MaxEnergy;
    static long int SumEnergy;

public:
    Babilon();
    Babilon(int, double, string);
    ~Babilon() {}
    string GetName();
    void Set_KhoangCach(double dis);
    int GetBabilon_MaxEnergy();
    string GetName_MaxEngergy();
    long int Sum_All_Energy();
};

class Carrier : public Babilon
{
private:
    int E;
    int Energy;
    static long int sumCEnergy;////tong nang luong RB C;

public:
    Carrier();
    Carrier(int e, double s);
    ~Carrier() {}
    int GetEnergy();
    void SetE(int e);
    void Print();
    long int GetMaxEnergy();
};

class Zattacker : public Babilon
{
private:
    int P;
    int Energy;
    static long int sumZEnergy;////tong nang luong RB Z;

public:
    Zattacker();
    Zattacker(int p, double s);
    ~Zattacker() {}
    int GetEnergy();
    void SetP(int p);
    void Print();
    long int GetMaxEnergy();
};

class Pedion : public Babilon
{
private:
    int F;
    int Energy;
    static long int sumPEnergy;//tong nang luong RB P;

public:
    Pedion();
    Pedion(int f, double s);
    ~Pedion() {}
    int GetEnergy();
    void SetF(int F);
    void Print();
    long int GetMaxEnergy();
};

// Babilon
Babilon::Babilon() {};
int Babilon::MaxEnergy_Of_Babilon = 0;
long int Babilon::SumEnergy = 0;
string Babilon::Name_MaxEnergy = "Robot X";


Babilon::Babilon(int w, double s, string a)
{
    this->name = a;
    this->Weight = w;
    this->khoangcach = s;
}

void Babilon::Set_KhoangCach(double dis)
{
    this->khoangcach = dis;
}

int Babilon::GetBabilon_MaxEnergy()
{
    return MaxEnergy_Of_Babilon;
}

string Babilon::GetName_MaxEngergy()
{
    return Name_MaxEnergy;
}

long int Babilon::Sum_All_Energy()
{
    return SumEnergy;
}

// Carrier
long int Carrier::sumCEnergy = 0;

Carrier::Carrier() : Babilon(30, 0, "Robot X")
{
    this->E = 50;
    this->Energy = 0;
}

Carrier::Carrier(int e, double s) : Babilon(30, s, "Carrier")
{
    // input e
    int a;
    while (e < 50 || e > 100)
    {
        cout << "Vui long nhap lai gia tri";
        cin >> a;
        e = a;
    }
    this->E = e;

    // input energy
    this->Energy = Weight * khoangcach + 4 * E * khoangcach;
    SumEnergy += Energy;
    sumCEnergy += Energy;
    if (MaxEnergy_Of_Babilon < sumCEnergy)
    {
        MaxEnergy_Of_Babilon = sumCEnergy;
        Name_MaxEnergy = name;
    }
}

int Carrier::GetEnergy()
{
    return this->Energy;
}

void Carrier::SetE(int e)
{
    // input e
    int a;
    while (e < 50 || e > 100)
    {
        cout << "Vui long nhap lai gia tri";
        cin >> a;
        e = a;
    }
    this->E = e;

    // input energy
    this->Energy = Weight * khoangcach + 4 * E * khoangcach;
    SumEnergy += Energy;
    sumCEnergy += Energy;
    if (MaxEnergy_Of_Babilon < sumCEnergy)
    {
        MaxEnergy_Of_Babilon = sumCEnergy;
        Name_MaxEnergy = name;
    }
}

void Carrier::Print()
{
    cout << "Carrier : " << endl;
    cout << "Trong luong : " << Weight << endl;
    cout << "Quang duong di : " << khoangcach << endl;
    cout << "Nang luong van chuyen : " << E << endl;
    cout << "Nang luong Robot : " << Energy << endl;
    cout << endl;
}

long int Carrier::GetMaxEnergy()
{
    return sumCEnergy;
}

// Pedion
long int Pedion::sumPEnergy = 0;

Pedion::Pedion() : Babilon(20, 0, "Pedion")
{
    this->F = 1;
    this->Energy = 0;
}

Pedion::Pedion(int f, double s) : Babilon(20, s, "Pedion")
{
    // input F
    int a;
    while (f < 1 || f > 5)
    {
        cout << "Vui long nhap lai gia tri";
        cin >> a;
        f = a;
    }
    this->F = f;


    //input Energy
    this->Energy = Weight * khoangcach + (F + 1) * khoangcach / 2.0;
    sumPEnergy += Energy;
    SumEnergy += Energy;
    if (MaxEnergy_Of_Babilon < sumPEnergy)
    {
        MaxEnergy_Of_Babilon = sumPEnergy;
        Name_MaxEnergy = this->name;
    }
}

int Pedion::GetEnergy()
{
    return this->Energy;
}

void Pedion::SetF(int f)
{
    // input F
    int a;
    while (f < 1 || f > 5)
    {
        cout << "Vui long nhap lai gia tri";
        cin >> a;
        f = a;
    }
    this->F = f;


    //input Energy
    this->Energy = Weight * khoangcach + (F + 1) * khoangcach / 2.0;
    sumPEnergy += Energy;
    SumEnergy += Energy;
    if (MaxEnergy_Of_Babilon < sumPEnergy)
    {
        MaxEnergy_Of_Babilon = sumPEnergy;
        Name_MaxEnergy = this->name;
    }
}

void Pedion::Print()
{
    cout << "Pedion :" << endl;
    cout << "Trong luong : " << Weight << endl;
    cout << "Quang duong di : " << khoangcach << endl;
    cout << "Do linh hoat F : " << F << endl;
    cout << "Nang luong Robot : " << Energy << endl;
    cout << endl;
}

long int Pedion::GetMaxEnergy()
{
    return sumPEnergy;
}

// Zattacker
long int Zattacker::sumZEnergy = 0;

Zattacker::Zattacker() : Babilon(50, 0, "Zattacker")
{
    this->P = 20;
    this->Energy = 0;
}

Zattacker::Zattacker(int p, double s) : Babilon(50, s, "Zattacker")
{
    // input P
    int a;
    while (p < 20 || p > 30)
    {
        cout << "Vui long nhap lai gia tri";
        cin >> a;
        p = a;
    }
    this->P = p;


    //input Energy
    this->Energy = Weight * khoangcach + P * P * khoangcach;
    SumEnergy += Energy;
    sumZEnergy += Energy;
    if (MaxEnergy_Of_Babilon < sumZEnergy)
    {
        MaxEnergy_Of_Babilon = sumZEnergy;
        Name_MaxEnergy = this->name;
    }
}

int Zattacker::GetEnergy()
{
    return this->Energy;
}

void Zattacker::SetP(int p)
{
    // input P
    int a;
    while (p < 20 || p > 30)
    {
        cout << "Vui long nhap lai gia tri";
        cin >> a;
        p = a;
    }
    this->P = p;


    //input Energy
    this->Energy = Weight * khoangcach + P * P * khoangcach;
    SumEnergy += Energy;
    sumZEnergy += Energy;
    if (MaxEnergy_Of_Babilon < sumZEnergy)
    {
        MaxEnergy_Of_Babilon = sumZEnergy;
        Name_MaxEnergy = this->name;
    }
}

void Zattacker::Print()
{
    cout << "Zattacker : " << endl;
    cout << "Trong luong : " << Weight << endl;
    cout << "Quang duong : " << khoangcach << endl;
    cout << "Suc manh P :" << P << endl;
    cout << "Nang luong Robot : " << Energy << endl;
    cout << endl;
}

long int Zattacker::GetMaxEnergy()
{
    return sumZEnergy;
}

int main()
{
    int A, B, C;
    cout << "Nhap so luong loai Pedion: ";
    cin >> A;
    cout << "Nhap so luong loai Zattacker: ";
    cin >> B;
    cout << "Nhap so luong loai Carrier: ";
    cin >> C;

    // Input auto A//
    srand(time(NULL));
    Pedion* P = new Pedion[A];
    for (int i = 0; i < A; i++)
    {
        P[i].Set_KhoangCach(10);
        int k = rand() % (6 - 1) + 1;
        P[i].SetF(k);
    }

    for (int i = 0; i < A; i++)
    {
        P[i].Print();
    }

    //Input auto B //
    srand(time(NULL));
    Zattacker* Z = new Zattacker[B];
    for (int i = 0; i < B; i++)
    {
        Z[i].Set_KhoangCach(10);
        int k = rand() % (31 - 20) + 20;
        Z[i].SetP(k);
    }

    for (int i = 0; i < B; i++)
    {
        Z[i].Print();
    }

    // Input auto C //

    srand(time(NULL));
    Carrier* Ca = new Carrier[C];
    for (int i = 0; i < C; i++)
    {
        Ca[i].Set_KhoangCach(10);
        int k = rand() % (101 - 50) + 50;
        Ca[i].SetE(k);
    }

    for (int i = 0; i < C; i++)
    {
        Ca[i].Print();
    }

    cout << "Type of Robot use Energy max of Babilon: " << P->GetName_MaxEngergy() << ": " << P->GetBabilon_MaxEnergy() << endl;

    cout << "Tong nang luong toan ham doi: " << P->Sum_All_Energy() << endl;

    return 0;
}
