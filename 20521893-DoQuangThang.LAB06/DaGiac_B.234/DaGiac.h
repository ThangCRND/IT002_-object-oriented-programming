#ifndef DAGIAC_H_INCLUDED
#define DAGIAC_H_INCLUDED

#include "Vecto.h"
#include "Diem.h"
#include <math.h>

class DaGiac
{
protected:
    int n; // Số lượng điểm //
    Diem *DIEM;
public:
    DaGiac();
    DaGiac(int);
    ~DaGiac(){};

    void Set(int, int, int);
    void TinhTien(Vecto);
    void QuayTam_O(int);

    virtual void Nhap();
    virtual void Xuat();
};


#endif // DAGIAC_H_INCLUDED
