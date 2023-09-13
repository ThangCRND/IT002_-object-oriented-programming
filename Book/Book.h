 #ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include <iostream>
#include<limits>
#include<string.h>
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
    Book(const string ten_sach,const string nha_xuat_ban, int nam_xuat_ban, int so_trang, double gia_ban);
    virtual ~Book();
    //Get
    string GetTenSach();
    string GetNhaXuatBan();
    int GetNamXuatBan();
    int GetSo_trang();
    double GetGia_ban();
    //Set
    void SetTenSach(string ten_sach);
    void SetNhaXuatBan(string nha_xuat_ban);
    void SetNamXuatBan(int nam_xuat_ban);
    void SetSo_trang(int so_trang);
    void SetGia_ban(double gia_ban);
    // Input-output //
    virtual void Nhap();
    virtual void Xuat();
};

class TextBook : public Book
{
private:
    int Grade;
public:
    //Constructor and Destructor
    TextBook();
    TextBook(int grade);
    ~TextBook();
    //Get
    int GetGrade();
    //Set
    void SetGrade(int grade);
    //input_output//
    void Nhap();
    void Xuat();
};

class Novel : public Book
{
private:
    string Type;
public:
    //Constructor and Destructor
    Novel();
    Novel(const string type);
    ~Novel();
    //Get
    string GetType();
    //Set
    void SetType(string type);
    //Input_output//
    void Nhap();
    void Xuat();
};
class Magazine : public Book
{
private:
    string Period;
public:
    //Constructor and Destructor
    Magazine();
    Magazine(string period);
    ~Magazine();
    //Get
    string GetPeriod();
    //Set
    void SetPeriod(string period);

    void Nhap();
    void Xuat();
};


#endif // BOOK_H_INCLUDED
