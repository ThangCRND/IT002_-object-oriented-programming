#ifndef TAMGIAC_H_INCLUDED
#define TAMGIAC_H_INCLUDED

#include "DaGiac.h"

class TamGiac : public DaGiac
{

public:
    TamGiac();
    ~TamGiac();
    bool KiemTra_TamGiac();
    void Nhap();
    void Xuat();
};


#endif // TAMGIAC_H_INCLUDED
