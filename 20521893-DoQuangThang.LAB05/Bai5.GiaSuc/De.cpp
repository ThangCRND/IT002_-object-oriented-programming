#include "De.h"

int De::SLGrowUp_De=0;
int De::SLYoung_De=0;

De::De():GiaSuc()
{
    this->Sound="Beeeeeee...";
      srand(time(NULL));
    this->Milk = (rand()%10+1);
    this->SLGrowUp_De++;
}
De::~De(){}

void De::Birth()
{
    srand(time(NULL));
    this->SLYoung_De = (rand()%4+1) ; // tao ngau nhien so luong de moi sinh
    this->SL_Child++;
}

int De::GetGrowUp()
{
    return this->SLGrowUp_De;
}

int De::GetChild()
{
    return this->SLYoung_De;
}
