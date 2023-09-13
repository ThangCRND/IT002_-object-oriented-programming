#ifndef CONGNHAN_H_INCLUDED
#define CONGNHAN_H_INCLUDED

#include "Job.h"
#include <string.h>
#include <iostream>
class CongNhan : public Job
{

        int ExpYear;
        string Nghe;
    public:

        CongNhan();
        CongNhan(string , string , int, int , string );
        ~CongNhan();

        void SetExpYear(int );
        void SetNghe(string );

        int GetExpYear();
        string GetNghe();

        void Nhap();
        void Xuat();
};


#endif // CONGNHAN_H_INCLUDED
