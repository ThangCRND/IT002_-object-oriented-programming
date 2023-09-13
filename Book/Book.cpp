
#include"Book.h"
using namespace std;

//Constructor and Destructor
Book::Book()
{
    SetTenSach("");
    SetNhaXuatBan("");
    SetNamXuatBan(0);
    SetSo_trang(0);
    SetGia_ban(0);
}
Book::Book(const string ten_sach,const string nha_xuat_ban, int nam_xuat_ban, int so_trang, double gia_ban)
{
    SetTenSach(ten_sach);
    SetNhaXuatBan(nha_xuat_ban);
    SetNamXuatBan(nam_xuat_ban);
    SetSo_trang(so_trang);
    SetGia_ban(gia_ban);
}
Book::~Book(){}

//Get//
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
double Book::GetGia_ban()
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
void Book::SetGia_ban(double gia_ban)
{
   Gia_ban=gia_ban;
}
//Input - output//
void Book::Nhap()
{
     cout<<"Ten sach: ";

    getline(cin,TenSach);
       cin.ignore();
     cout<<"Nha xuat ban: ";
    getline(cin,NhaXuatBan);

      cout<<"Nam xuat ban: ";
      cin>>NamXuatBan;

     cout<<"So trang : ";
     cin>>So_trang;

     cout<<"Gia ban: ";
      cin>>Gia_ban;


}
void Book::Xuat()
{
    cout<<"Ten sach: "<<TenSach<<endl;
        cout<<"Nha xuat ban: "<<NhaXuatBan<<endl;
        cout<<"Nam xuat ban: "<<NamXuatBan<<endl;
        cout<<"So trang: "<<So_trang<<endl;
        cout<<"Gia ban: "<<Gia_ban<<endl;
}

//TextBook

TextBook::TextBook()
{
    Grade=0;
}
TextBook::TextBook(int grade)
{
    Grade=grade;
}
TextBook::~TextBook(){}

//Get
int TextBook::GetGrade()
{
    return Grade;
}
//Set
void TextBook::SetGrade(int grade)
{
    Grade=grade;
}
void TextBook::Nhap()
{
    cout<<"Grade: ";
    cin>>Grade;
    cin.ignore();
    Book::Nhap();
}

void TextBook::Xuat()
{
        cout<<GetGrade()<<" grade Text Book:";
        Book::Xuat();
}

//Novel

Novel::Novel()
{
    SetType("");
}
Novel::Novel(const string type)
{
    SetType(type);
}
Novel::~Novel(){}
//Get
 string Novel::GetType()
 {
     return Type;
 }
//Setter
void Novel::SetType(string type)
{
    Type=type;
}

void Novel::Nhap()
{
    Book::Nhap();
    cout<<"Type: ";
    getline(cin,Type);
    cin.ignore();

}
//other method
void Novel::Xuat()
{
    cout<<GetType()<<" Novel: ";
    Book::Xuat();
}

//Magazine

Magazine::Magazine()
{
    SetPeriod("");
}
Magazine::Magazine(string period)
{
    SetPeriod(period);
}
Magazine::~Magazine(){}

//Get
string Magazine::GetPeriod()
{
    return Period;
}
//Set
void Magazine::SetPeriod(string period)
{
    Period=period;
}
void Magazine::Nhap()
{
    Book::Nhap();
    cout<<"Period: ";
    getline(cin,Period);
    cin.ignore();

}
void Magazine::Xuat()
{
    cout<<GetPeriod()<<" Magazine: ";
    Book::Xuat();
}
