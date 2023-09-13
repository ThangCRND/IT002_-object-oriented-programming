#include "GiaSuc.h"

int GiaSuc::SL_GrowUp=0;
int GiaSuc::SL_Child=0;

GiaSuc::GiaSuc()
{
    this->Sound="";
    this->Milk=0;
    this->SL_GrowUp++;
}

string GiaSuc::GetSound()
{
    return this->Sound;
}
int GiaSuc::GetMilk()
{
    return this->Milk;
}

void GiaSuc::SetSound(string sound)
{
    this->Sound=sound;
}
void GiaSuc::SetMilk(int milk)
{
    this->Milk=milk;
}

int GiaSuc::Get_Total_GrowUp()
{
    return this->SL_GrowUp;
}
//int GiaSuc::Get_Total_Child()
//{
//    return this->SL_Child;
//}
void GiaSuc::Birth()
{
    this-> SL_Child++;
}
