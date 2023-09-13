#ifndef CASI_H_INCLUDED
#define CASI_H_INCLUDED

#include "Job.h"
#include <string>
#include <iostream>

class CaSi : public Job
{
        int ExpYear;
        string Song;

    public:

        CaSi();
        CaSi(string,string,int,int,string);
        ~CaSi();

        void SetExpYear(int );
        void SetSong(string );

        string GetSong();
        int GetExpYear();

        void Nhap();
        void Xuat();
};



#endif // CASI_H_INCLUDED
