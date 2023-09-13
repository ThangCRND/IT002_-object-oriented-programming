#ifndef ELLIPSE_H_INCLUDED
#define ELLIPSE_H_INCLUDED

#include <iostream>

using namespace std;

class Ellipse
{
protected:
    double Coor_X;
    double Coor_Y;
    double Truc_dai;
    double Truc_ngan;
public:
    Ellipse();
    Ellipse(double ,double ,double ,double );
    virtual~Ellipse();

    void SetCoorX(double );
    void SetCoorY(double );
    void SetTruc_dai(double );
    void SetTruc_ngan(double );


    double GetCoorX();
    double GetCoorY();
    double GetTruc_dai();
    double GetTruc_ngan();

    virtual void Nhap();
    virtual void Xuat();
};


#endif // ELLIPSE_H_INCLUDED
