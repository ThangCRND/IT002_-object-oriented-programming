#ifndef THIETBI_H_INCLUDED
#define THIETBI_H_INCLUDED

#include <iostream>
#include <string.h>

using namespace std;

class Thietbi
{
protected:
    int ID;
    string Loaithietbi;
    int Thoidiemkhoidong;
    int Solankhoidong;
    int Congsuat;

public:
    Thietbi();
    Thietbi(int,string,int,int);
    ~Thietbi();

    int GetThoidiemkhoidong();
    void SetThoidiemkhoidong(int);
    int GetKhoidongthietbi();
    void SetKhoidongthietbi(int);

    virtual double GetMuctieuthu();

    virtual void Nhap();
    virtual void Xuat();



};


#endif // THIETBI_H_INCLUDED
