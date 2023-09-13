
#include "NhanVien.h"

NhanVien::NhanVien()
{
    this->Name = "";
    this ->Date = "";
    //this ->luong = 0;
}
NhanVien::NhanVien(string name , string date)
{
	this->Name =name;
	this->Date = date;
	//luong = 0;
}
NhanVien::~NhanVien(){}

void NhanVien::Nhap()
{
	cout << "Nhap ten: ";
	getline(cin, Name);

	cout << "Nhap ngay sinh: ";
	getline(cin, Date);

}

void NhanVien::Xuat()
{
	cout << "Ten: " << Name << endl;
	cout << "Ngay sinh: " << Date << endl;
}

PhiCong::PhiCong()
{
    this ->luong_can_ban = 0;
    this ->So_gio_bay = 0;
}
PhiCong::PhiCong(string Name ,string Date , long luong_can_ban , int So_gio_bay ) : NhanVien(Name, Date)
{
	this->luong_can_ban = luong_can_ban;
	this->So_gio_bay = So_gio_bay;
	//this->luong = luong_can_ban + So_gio_bay * 2000000;
}
PhiCong::~PhiCong(){}

long PhiCong::getLuong()
{
	return this->luong_can_ban + this->So_gio_bay * 2000000;
}
void PhiCong::Nhap()
{
	NhanVien::Nhap();

	cout << "Nhap luong co ban: ";
	cin >> luong_can_ban;

	cout << "Nhap so gio bay: ";
	cin >> So_gio_bay;
	cin.ignore();

	//luong = luong_can_ban + So_gio_bay * 2000000;
}

void PhiCong::Xuat()
{
	cout << "Thong tin Phi cong: " << endl;
	NhanVien::Xuat();
	cout << "Luong co ban: " << luong_can_ban << endl;
	cout << "So gio bay: " << So_gio_bay << endl;
	cout << "Luong: " << getLuong() << endl;
}

TiepVien::TiepVien()
{
    So_chuyen_bay=0;
}
TiepVien::TiepVien(string Name ,string Date, int So_chuyen_bay): NhanVien(Name, Date)
{
	this->So_chuyen_bay = So_chuyen_bay;
	//luong = So_chuyen_bay * 3000000;
}
TiepVien::~TiepVien(){}

long TiepVien::getLuong()
{
   return this->So_chuyen_bay *3000000;
}
void TiepVien::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so chuyen bay: ";
	cin >> So_chuyen_bay;
	cin.ignore();
	//luong = So_chuyen_bay * 3000000;
}

void TiepVien::Xuat()
{
	cout << "Thong tin Tiep vien: " << endl;
	NhanVien::Xuat();
	cout << "So chuyen bay: " << So_chuyen_bay << endl;
	cout << "Luong: " << getLuong() << endl;
}
