#ifndef HOCSINH_H_INCLUDED
#define HOCSINH_H_INCLUDED

#include "Job.h"
#include <string.h>
#include <iostream>

class HocSinh : public Job
{

        int Khoi_lop;
        string Ten_Truong;
    public:

        HocSinh();
        HocSinh( string, string, int, int, string);
        ~HocSinh();

         int GetGrade();
        string GetNameSchool();

        void SetGrade(int );
        void SetNameSchool(string );

        void Nhap();
        void Xuat();
};



#endif // HOCSINH_H_INCLUDED
