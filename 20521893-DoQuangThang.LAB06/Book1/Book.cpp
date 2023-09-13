#include"Book.h"
using namespace std;


Book::Book()
{
    this->TenSach = "";
    this->NhaXuatBan ="";
    this->NamXuatBan = 0;
    this ->So_trang =0;
    this ->Gia_ban =0;
}
Book::Book(string ten_sach,string nha_xuat_ban, int nam_xuat_ban, int so_trang, double gia_ban)
{
    SetTenSach(ten_sach);
    SetNhaXuatBan(nha_xuat_ban);
    SetNamXuatBan(nam_xuat_ban);
    SetSo_trang(so_trang);
    SetCost(gia_ban);
}
Book::~Book(){}


string Book::GetTenSach()
{
    return TenSach;
}
string Book::GetNhaXuatBan()
{
    return NhaXuatBan;
}
int Book::GetNamXuatBan()
{
    return NamXuatBan;
}
int Book::GetSo_trang()
{
    return So_trang;
}
double Book::GetCost()
{
    return Gia_ban;
}

//Setter
void Book::SetTenSach(string ten_sach)
{
    TenSach=ten_sach;
}
void Book::SetNhaXuatBan(string nha_xuat_ban)
{
    NhaXuatBan=nha_xuat_ban;
}
void Book::SetNamXuatBan(int nam_xuat_ban)
{
    NamXuatBan=nam_xuat_ban;

}
void Book::SetSo_trang(int so_trang)
{
    So_trang=so_trang;
}
void Book::SetCost(double gia_ban)
{
   Gia_ban=gia_ban;
}

void Book::Nhap()
{

    cin.ignore();
    cout<<"Ten sach: ";
     getline(cin, TenSach);
    cout<<"Nha xuat ban: ";
     getline(cin, NhaXuatBan);
    cout<<"Nam xuat ban: ";
      cin>>NamXuatBan;
    cout<<"So trang : ";
      cin>>So_trang;
    cout<<"Gia ban: ";
      cin>>Gia_ban;


}
void Book::Xuat()
{
        cout<<"Ten sach: "<< this->TenSach <<endl;
        cout<<"Nha xuat ban: "<< this->NhaXuatBan <<endl;
        cout<<"Nam xuat ban: "<< this->NamXuatBan <<endl;
        cout<<"So trang: "<< this->So_trang <<endl;
        cout<<"Gia ban: "<< this->Gia_ban <<endl;
}
