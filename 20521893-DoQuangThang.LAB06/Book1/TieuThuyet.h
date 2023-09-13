#ifndef TIEUTHUYET_H_INCLUDED
#define TIEUTHUYET_H_INCLUDED

#include "Book.h"

class Novel : public Book
{
    string Theloai;
public :
    Novel();
    Novel(string);
    ~Novel();

    string GetKind();
    void SetKind(string);

    void Nhap();
    void Xuat();
};



#endif // TIEUTHUYET_H_INCLUDED
