#include "Bo.h"

int Bo::SLGrowUp_Bo=0;
int Bo::SLYoung_Bo=0;

Bo::Bo():GiaSuc()
{
    this->Sound="Booo...";
    srand(time(NULL));
    this-> Milk = (rand() % 20 + 1);
    this->SLGrowUp_Bo++;
}
Bo::~Bo(){}

void Bo::Birth()
{
    srand(time(NULL));
    this->SLYoung_Bo = (rand() % 3 + 1);// tao ngau nhien so luong bo moi sinh
    this->SL_Child++;

}

int Bo::GetGrowUp()
{
    return this->SLGrowUp_Bo;
}
 int Bo::GetChild()
{
    return this->SLYoung_Bo;
}
void Bo::Xuat()
{
    cout << "Booo..." <<endl;
}


