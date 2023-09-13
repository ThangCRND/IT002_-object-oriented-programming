#ifndef CUU_H_INCLUDED
#define CUU_H_INCLUDED

#include "GiaSuc.h"

class Cuu : public GiaSuc
{
    static int SLGrowUp_Cuu;
    static int SLYoung_Cuu;
public:
    Cuu();
    ~Cuu();
    void Birth();
    int GetGrowUp();
    int GetChild();
};

#endif // CUU_H_INCLUDED
