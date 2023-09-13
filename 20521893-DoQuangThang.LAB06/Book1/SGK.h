#ifndef SGK_H_INCLUDED
#define SGK_H_INCLUDED

#include"Book.h"

class SGK : public Book
{
    string Grade;
public:
    SGK();
    SGK(int);
    ~SGK();

    string GetGrade();
    void SetGrade(int);

    void Nhap();
    void Xuat();
};


#endif // SGK_H_INCLUDED
