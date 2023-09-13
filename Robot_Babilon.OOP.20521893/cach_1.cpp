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
    static int SumEnergy;

public:
    Babilon();
    Babilon(int, double, string);
    ~Babilon() {}
    string GetName();
    void Set_KhoangCach(double dis);
    int GetBabilon_MaxEnergy();
    string GetName_MaxEngergy();
    int Sum_All_Energy();
};

class Carrier : public Babilon
{
private:
    int E;
    double Energy;
    static int MaxEnergy;

public:
    Carrier();
    Carrier(int e, double s);
    ~Carrier() {}
    double GetEnergy();
    void SetE(int e);
    void Print();
    int GetMaxEnergy();
};

class Zattacker : public Babilon
{
private:
    int P;
    double Energy;
    static int MaxEnergy;

public:
    Zattacker();
    Zattacker(int p, double s);
    ~Zattacker() {}
    double GetEnergy();
    void SetP(int p);
    void Print();
    int GetMaxEnergy();
};

class Pedion : public Babilon
{
private:
    int F;
    double Energy;
    static int MaxEnergy;

public:
    Pedion();
    Pedion(int f, double s);
    ~Pedion() {}
    double GetEnergy();
    void SetF(int F);
    void Print();
    int GetMaxEnergy();
};

// Babilon
int Babilon::MaxEnergy_Of_Babilon = 0;
string Babilon::Name_MaxEnergy = "";
int Babilon::SumEnergy = 0;

Babilon::Babilon(){};

Babilon::Babilon(int w, double s, string name)
{
    this->Weight = w;
    this->khoangcach = s;
    this->name = name;
}

 string Babilon::GetName()
{
    return this->name;
}

void Babilon::Set_KhoangCach(double dis)
{
    this->khoangcach = dis;
}

int Babilon::GetBabilon_MaxEnergy()
{
    return Babilon::MaxEnergy_Of_Babilon;
}

string Babilon::GetName_MaxEngergy()
{
    return Babilon::Name_MaxEnergy;
}

 int Babilon::Sum_All_Energy()
{
    return Babilon::SumEnergy;
}

// Carrier
int Carrier::MaxEnergy = 0;

Carrier::Carrier(): Babilon(30, 0, "Carrier")
{
    this->E = 50;
    this->Energy = 0;
}

Carrier::Carrier(int e, double s): Babilon(30, s, "Carrier")
{
    // input e
    if (e < 50)
    {
        this->E = 50;
    }
    else if (e > 100)
    {
        this->E = 100;
    }
    else
    {
        this->E = e;
    }

    // input energy
    SumEnergy -= Energy;
    this->Energy = Weight * khoangcach + 4 * E * khoangcach * 1.0;
    SumEnergy += Energy;
    if (MaxEnergy < Energy)
        MaxEnergy = Energy;
    if (MaxEnergy_Of_Babilon < MaxEnergy)
    {
        MaxEnergy_Of_Babilon = MaxEnergy;
        Name_MaxEnergy = this->name;
    }
}

double Carrier::GetEnergy()
{
    return this->Energy;
}

void Carrier::SetE(int e)
{
    // input e
    if (e < 50)
    {
        this->E = 50;
    }
    else if (e > 100)
    {
        this->E = 100;
    }
    else
    {
        this->E = e;
    }

    // input energy
    SumEnergy -= Energy;
    this->Energy = Weight * khoangcach + 4 * E * khoangcach * 1.0;
    SumEnergy += Energy;
    if (MaxEnergy < Energy)
        MaxEnergy = Energy;
    if (MaxEnergy_Of_Babilon < MaxEnergy)
    {
        MaxEnergy_Of_Babilon = MaxEnergy;
        Name_MaxEnergy = this->name;
    }
}

void Carrier::Print()
{
    cout<< "Carrier : " << this->Energy << endl;
}

int Carrier::GetMaxEnergy()
{
    return Carrier::MaxEnergy;
}

// Pedion
int Pedion::MaxEnergy = 0;

Pedion::Pedion(): Babilon(20, 0, "Pedion")
{
    this->F = 1;
    this->Energy = 0;
}

Pedion::Pedion(int f, double s): Babilon(20, s, "Pedion")
{
    // input F
    if (f < 1)
    {
        this->F = 1;
    }
    else if (f > 5)
    {
        this->F = 5;
    }
    else
    {
        this->F = f;
    }

    //input Energy
    SumEnergy -= Energy;
    this->Energy = Weight * khoangcach + (F + 1) * khoangcach / 2.0;
    SumEnergy += Energy;
    if (MaxEnergy < Energy)
        MaxEnergy = Energy;
    if (MaxEnergy_Of_Babilon < MaxEnergy)
    {
        MaxEnergy_Of_Babilon = MaxEnergy;
        Name_MaxEnergy = this->name;
    }
}

double Pedion::GetEnergy()
{
    return this->Energy;
}

void Pedion::SetF(int f)
{
    // input F
    if (f < 1)
    {
        this->F = 1;
    }
    else if (f > 5)
    {
        this->F = 5;
    }
    else
    {
        this->F = f;
    }

    //Input Energy
    SumEnergy -= Energy;
    this->Energy = this->Weight * this->khoangcach + (this->F + 1) * this->khoangcach / 2.0;
    SumEnergy += Energy;
    if (MaxEnergy < Energy)
        MaxEnergy = Energy;
    if (MaxEnergy_Of_Babilon < MaxEnergy)
    {
        MaxEnergy_Of_Babilon = MaxEnergy;
        Name_MaxEnergy = this->name;
    }
}

void Pedion::Print()
{
    cout<< "Pedion : " << this->Energy << endl;
}

int Pedion::GetMaxEnergy()
{
    return Pedion::MaxEnergy;
}

// Zattacker
int Zattacker::MaxEnergy = 0;

Zattacker::Zattacker(): Babilon(50, 0, "Zattacker")
{
    this->P = 20;
    this->Energy = 0;
}

Zattacker::Zattacker(int p, double s) : Babilon(50, s, "Zattacker")
{
    // input P
    if (p < 20)
    {
        this->P = 20;
    }
    else if (p > 30)
    {
        this->P = 30;
    }
    else
    {
        this->P = p;
    }

    //input Energy
    SumEnergy -= Energy;
    this->Energy = Weight * khoangcach + P * P * khoangcach * 1.0;
    SumEnergy += Energy;
    if (MaxEnergy < Energy)
        MaxEnergy = Energy;
    if (MaxEnergy_Of_Babilon < MaxEnergy)
    {
        MaxEnergy_Of_Babilon = MaxEnergy;
        Name_MaxEnergy = this->name;
    }
}

double Zattacker::GetEnergy()
{
    return this->Energy;
}

void Zattacker::SetP(int p)
{
    // input P
    if (p < 20)
    {
        this->P = 20;
    }
    else if (p > 30)
    {
        this->P = 30;
    }
    else
    {
        this->P = p;
    }

    //input Energy
    SumEnergy -= Energy;
    this->Energy = Weight * khoangcach + P * P * khoangcach * 1.0;
    SumEnergy += Energy;
    if (MaxEnergy < Energy)
        MaxEnergy = Energy;
    if (MaxEnergy_Of_Babilon < MaxEnergy)
    {
        MaxEnergy_Of_Babilon = MaxEnergy;
        Name_MaxEnergy = this->name;
    }
}

void Zattacker::Print()
{
    cout << "Zattacker : " << this->Energy << endl;
}

int Zattacker::GetMaxEnergy()
{
    return Zattacker::MaxEnergy;
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
    Pedion *P = new Pedion[A];
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
    Zattacker *Z = new Zattacker[B];
    for (int i = 0; i < B; i++)
    {
        Z[i].Set_KhoangCach(10);
        int k = rand() % (31 - 20) + 20;
        Z[i].SetP(k);
    }

    for (int i = 0; i < A; i++)
    {
        Z[i].Print();
    }

// Input auto C //

    srand(time(NULL));
    Carrier *Ca = new Carrier[C];
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

    cout << "Robot use Energy max of Pedion: " << P->GetMaxEnergy() << endl;

    cout << "Robot use Energy max of  Zattacker: " << Z->GetMaxEnergy() << endl;

    cout << "Robot use Energy max of Carrier: " << Ca->GetMaxEnergy() << endl;

    cout << "Type of Robot use Energy max of Babilon: " << P->GetName_MaxEngergy() << ": " << P->GetBabilon_MaxEnergy() << endl;

    cout << "Tong nang luong toan ham doi: " << P->Sum_All_Energy() << endl;

    return 0;
}
