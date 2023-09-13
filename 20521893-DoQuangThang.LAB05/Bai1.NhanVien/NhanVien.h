#ifndef NHANVIEN_H_INCLUDED
#define NHANVIEN_H_INCLUDED

#include <iostream>
#include <string.h>

using namespace std;

class NhanVien
{
protected:
	string Name;
	string Date;
	//long luong;
public:
    NhanVien();
	 NhanVien(string , string );
	~NhanVien();
	 void Nhap();
	 void Xuat();
};

class PhiCong : public NhanVien
{
	long luong_can_ban;
	int So_gio_bay;
public:
    PhiCong();
     PhiCong(string , string , long , int);
	~PhiCong();

	long getLuong();
	void Nhap();
	void Xuat();
};

class TiepVien : public NhanVien
{
	int So_chuyen_bay;
public:
    TiepVien();
	TiepVien(string ,string , int );
	~TiepVien();

	long getLuong();
	void Nhap();
	void Xuat();
};

#endif // NHANVIEN_H_INCLUDED
