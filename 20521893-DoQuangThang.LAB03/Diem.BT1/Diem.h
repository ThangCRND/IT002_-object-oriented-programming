#ifndef DIEM_H_INCLUDED
#define DIEM_H_INCLUDED
#include <iostream>
#include <math.h>
using namespace std;

class Diem
{
private:
    int x;
    int y;
public:
    Diem();
    Diem(int a,int b);
    int GetX();
    int GetY();
    void SetX(int a);
    void SetY(int b);
    void Input();
    Diem TinhTien(int a,int b);
    void Output();
    ~Diem();

};


#endif // DIEM_H_INCLUDED
