#include "TieuThuyet.h"

Novel::Novel()
{
    this->Theloai="";
}
Novel::Novel(string kind)
{
    SetKind(kind);
}
Novel::~Novel(){};

string Novel::GetKind()
{
    return Theloai;
}
void Novel::SetKind(string kind)
{
    Theloai=kind;
}

void Novel::Nhap()
{

    Book::Nhap();
    cout << "Nhap the loai tieu thuyet:" ;
     cin.ignore();
    getline(cin,Theloai);

}
void Novel::Xuat()
{
    cout <<"====Thong tin SACH TIEU THUYET====" <<endl;
    Book::Xuat();
     cout << "Kind of Novel:" << this->Theloai << endl;
    cout <<"==================================" <<endl;
}
