#ifndef DATHUC1_H_INCLUDED
#define DATHUC1_H_INCLUDED

#include<iostream>
#include<math.h>

using namespace std;

class Dathuc
{
private:
    float Heso[100];
    int Bac;
public:
     Dathuc();
    ~Dathuc();

    friend istream& operator>>(istream& , Dathuc&);
    friend ostream& operator<<(ostream& , Dathuc);

    Dathuc operator+(Dathuc);
    Dathuc operator-(Dathuc);

    void Input();
    void Output();
};

#endif // DATHUC1_H_INCLUDED
