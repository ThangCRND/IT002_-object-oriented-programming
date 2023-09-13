#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include <iostream>
#include <string.h>
#include <limits>

using namespace std;

class Book
{
private:
    string TenSach;
    string NhaXuatBan;
    int NamXuatBan;
    int So_trang;
    double Gia_ban;
public:
    Book();
    Book(string,string,int,int,double);
    virtual ~Book();

    string GetTenSach();
    string GetNhaXuatBan();
    int GetNamXuatBan();
    int GetSo_trang();
    double GetCost();

    void SetTenSach(string);
    void SetNhaXuatBan(string);
    void SetNamXuatBan(int);
    void SetSo_trang(int);
    void SetCost(double);

    virtual void Nhap();
    virtual void Xuat();


};


#endif // BOOK_H_INCLUDED
