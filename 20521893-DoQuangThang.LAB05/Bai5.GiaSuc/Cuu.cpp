#include "Cuu.h"

int Cuu::SLGrowUp_Cuu=0;
int Cuu::SLYoung_Cuu=0;

Cuu::Cuu():GiaSuc()
{
    this->Sound="Bee...";
    srand(time(NULL));
    this->Milk = (rand()%5+1);
    this->SLGrowUp_Cuu++;
}
Cuu::~Cuu(){}

void Cuu::Birth()
{
    srand(time(NULL));
    this->SLYoung_Cuu = (rand()%2+1);// tao ngau nhien so luong cuu moi sinh
    this->SL_Child++;

}

int Cuu::GetGrowUp()
{
  return this->SLGrowUp_Cuu;
}

int Cuu::GetChild()
{
  return this->SLYoung_Cuu;
}

