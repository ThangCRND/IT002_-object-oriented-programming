#ifndef DIEM_H_INCLUDED
#define DIEM_H_INCLUDED

#include "Vecto.h"

class Diem
{
private:
    int x;
    int y;
public:
    Diem();
    Diem(int a,int b);
    ~Diem();

    int GetX();
    int GetY();

    void SetX(int a);
    void SetY(int b);

    Diem TinhTien(Vecto);

    void Input();
    void Output();


};


#endif // DIEM_H_INCLUDED
