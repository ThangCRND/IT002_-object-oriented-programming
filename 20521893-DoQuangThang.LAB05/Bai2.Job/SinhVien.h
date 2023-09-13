#ifndef SINHVIEN_H_INCLUDED
#define SINHVIEN_H_INCLUDED

#include "Job.h"
#include <string.h>
#include <iostream>
class Sinhvien : public Job
{
    //private:
        int Nam_hoc;
        string Ten_Truong;
        string Chuyen_nganh;
    public:

        Sinhvien();
        Sinhvien( string, string, int, string, string);
        ~Sinhvien();

        int Get_NamHoc();
        string Get_TenTruong();
        string Get_ChuyenNganh();

        void Set_NamHoc(int );
        void Set_TenTruong(string );
        void Set_ChuyenNganh(string );

        void Nhap();
        void Xuat();
};


#endif // SINHVIEN_H_INCLUDED
