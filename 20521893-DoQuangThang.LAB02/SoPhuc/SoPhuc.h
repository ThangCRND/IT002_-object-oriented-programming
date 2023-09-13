#ifndef SOPHUC_H_INCLUDED
#define SOPHUC_H_INCLUDED

#include <iostream>
using namespace std;

    class SoPhuc
    {
    private:
        float Thuc;
        float Ao;
    public:
        SoPhuc();
        void set(float Thuc,float Ao);
        void Nhap();
        void Xuat();
        SoPhuc Tong (SoPhuc);
        SoPhuc Hieu (SoPhuc);
        SoPhuc Tich (SoPhuc);
        SoPhuc Thuong(SoPhuc);
        ~SoPhuc();

    };

#endif // SOPHUC_H_INCLUDED
