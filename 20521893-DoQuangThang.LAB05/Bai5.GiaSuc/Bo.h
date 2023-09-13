#ifndef BO_H_INCLUDED
#define BO_H_INCLUDED

#include "GiaSuc.h"

class Bo : public GiaSuc
{
    static int SLGrowUp_Bo;
    static int SLYoung_Bo;
public:
    Bo();
    ~Bo();
    void Birth();
    int GetGrowUp();
    int GetChild();
};


#endif // BO_H_INCLUDED
