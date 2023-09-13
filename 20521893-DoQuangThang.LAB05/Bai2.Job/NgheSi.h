#ifndef NGHESI_H_INCLUDED
#define NGHESI_H_INCLUDED

#include "Job.h"
#include <string.h>
#include <iostream>

class NgheSi : public Job
{

        int ExpYear;
        string Major;
        string PopularFilms;
    public:

        NgheSi();
        NgheSi(string, string, int, int, string );
        ~NgheSi();

        void SetExpYear(int );
        void SetMajor(string );
        void SetPopularFilms(string );


        int GetExpYear();
        string GetMajor();
        string GetPopularFilms();

        void Nhap();
        void Xuat();
};



#endif // NGHESI_H_INCLUDED
