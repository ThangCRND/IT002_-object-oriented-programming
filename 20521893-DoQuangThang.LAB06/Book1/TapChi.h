#ifndef TAPCHI_H_INCLUDED
#define TAPCHI_H_INCLUDED

#include "Book.h"

class Magazine : public Book
{
private:
    string Period;
public:
    Magazine();
    Magazine(string );
    ~Magazine();

    string GetPeriod();
    void SetPeriod(string );

    void Nhap();
    void Xuat();
};


#endif // TAPCHI_H_INCLUDED
