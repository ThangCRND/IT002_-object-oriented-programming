#ifndef DE_H_INCLUDED
#define DE_H_INCLUDED

#include "GiaSuc.h"

class De : public GiaSuc
{
    static int SLGrowUp_De;
    static int SLYoung_De;
public:
    De();
    ~De();
    void Birth();
    int GetGrowUp();
    int GetChild();
};


#endif // DE_H_INCLUDED
