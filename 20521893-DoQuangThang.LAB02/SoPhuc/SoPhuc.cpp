#include "SoPhuc.h"
#include <iostream>
using namespace std;

SoPhuc::SoPhuc(){}

void SoPhuc::set(float a, float b)
{
	this -> Thuc = a;
	this -> Ao = b;
}
SoPhuc SoPhuc::Tong(SoPhuc SP)
{
    SoPhuc tong;
	tong.Thuc = Thuc + SP.Thuc;
	tong.Ao = Ao + SP.Ao;
	return tong;
}
SoPhuc SoPhuc::Hieu(SoPhuc SP)
{
    SoPhuc hieu;
	hieu.Thuc = Thuc - SP.Thuc;
	hieu.Ao = Ao - SP.Ao;
	return hieu;
}
SoPhuc SoPhuc::Tich(SoPhuc SP)
{
    SoPhuc tich;
	tich.Thuc = Thuc * SP.Thuc - Ao * SP.Ao;
	tich.Ao = Thuc * SP.Ao + Ao * SP.Thuc;
	return tich;
}
SoPhuc SoPhuc::Thuong(SoPhuc SP)
{
    SoPhuc thuong;
	thuong.Thuc = (Thuc * SP.Thuc + Ao * SP.Ao) / (SP.Thuc * SP.Thuc + SP.Ao * SP.Ao);
	thuong.Ao = (SP.Thuc*Ao-Thuc*SP.Ao)/ (SP.Thuc * SP.Thuc + SP.Ao * SP.Ao);
	return thuong;
}
void SoPhuc::Nhap()
{
	cout << "Nhap phan thuc: ";
	cin >> Thuc;
	cout << "Nhap phan ao: ";
	cin >> Ao;

}
void SoPhuc::Xuat()
{
	cout << Thuc << " ";
	if (Ao >= 0)
		cout << "+ " << Ao << "i";
	else
		cout << Ao << "i";
}

  SoPhuc::~SoPhuc(){}

