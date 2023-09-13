#ifndef ROUTER_H_INCLUDED
#define ROUTER_H_INCLUDED

#include "Thietbi.h"

class Router : public Thietbi
{
    int Sogoixuly;
    int Thoigianhoatdong;
public:
    Router();
    Router(string,int,int);
    ~Router();

    int GetSoluong();
    void SetSoluong(int);
    int GetThoigianhoatdong();
    void SetThoigianhoatdong(int);

    double GetMuctieuthu();

    void Xuat();


};



#endif // ROUTER_H_INCLUDED
