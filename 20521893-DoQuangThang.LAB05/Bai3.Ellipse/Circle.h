#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include "Ellipse.h"

class Circle : public Ellipse
{
private:
    double Bankinh;
public:
    Circle();
    Circle(double ,double ,double );
    ~Circle();

    double GetBankinh();
    void SetBankinh(double );

   //ư void Draw(){}
    void Nhap();
    void Xuat();

};

#endif // CIRCLE_H_INCLUDED
