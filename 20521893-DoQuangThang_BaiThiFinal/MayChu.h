#ifndef MAYCHU_H_INCLUDED
#define MAYCHU_H_INCLUDED

#include "Thietbi.h"

class MayChu : public Thietbi
{
    protected:
    string HeDieuHanh;
    int Muctieuthu;
    int Thoigianhoatdong;
public:
    MayChu();
    MayChu(string,string,int);
    ~MayChu();

    int GetThoigianhoatdong2();
    void SetThoigianhoatdong2(int);
    double GetMuctieuthu2();

    void Nhap();
    void Xuat();
};


#endif // MAYCHU_H_INCLUDED
