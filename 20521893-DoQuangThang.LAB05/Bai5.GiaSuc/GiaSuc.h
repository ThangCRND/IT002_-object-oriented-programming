#ifndef GIASUC_H_INCLUDED
#define GIASUC_H_INCLUDED

#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

class GiaSuc
{
protected:
    string Sound;
    int Milk;
    static int SL_GrowUp;
    static int SL_Child;
public:
    GiaSuc();
    ~GiaSuc(){};

    string GetSound();
    int GetMilk();

    void SetSound(string);
    void SetMilk(int);

    int Get_Total_GrowUp();
    //int Get_Total_Child();

     void Birth();

};

#endif // GIASUC_H_INCLUDED
