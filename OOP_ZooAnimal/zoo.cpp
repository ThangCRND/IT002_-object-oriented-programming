// helloooooo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "zoo.h"
#include <string.h>
using namespace std;

void date::set_Ngay(int a)
{
	ngay = a;
}

void date::set_Thang(int a)
{
	thang = a;
}

void date::set_Nam(int a)
{
	nam = a;
}

int date::get_Nam()
{
	return nam;
}

int date::get_Ngay()
{
	return ngay;
}

int date::get_Thang()
{
	return thang;
}

zooAnimal::zooAnimal()

zooAnimal::zooAnimal(const char name[], int cagenumber, date A, float weight)
{
	strcpy_s(Name, name);
	CageNumber = cagenumber;
	Date = A;
	Weight = weight;
}

zooAnimal::~zooAnimal(){}

void zooAnimal::setWeight(float a, date A)
{
	Weight = a;
	Date = A;
}

char * zooAnimal::get_Name()
{
	return Name;
}

float zooAnimal::get_Weight()
{
	return Weight;
}

int zooAnimal::countDateWeight(date currentDate)// không tính năm nhuận
{
	int soNgay = 0;
	soNgay += (currentDate.get_Nam() - Date.get_Nam()) * 365;

	int soNgay1 = 0;
	int thang1 = 1;
	while (thang1 != Date.get_Thang())
	{
		switch (thang1)
		{
		case 1: soNgay1 += 31;
			break;
		case 2: soNgay1 += 28;
			break;
		case 3: soNgay1 += 31;
			break;
		case 4: soNgay1 += 30;
			break;
		case 5: soNgay1 += 31;
			break;
		case 6: soNgay1 += 30;
			break;
		case 7: soNgay1 += 31;
			break;
		case 8: soNgay1 += 31;
			break;
		case 9: soNgay1 += 30;
			break;
		case 10: soNgay1 += 31;
			break;
		case 11: soNgay1 += 30;
			break;
		case 12: soNgay1 += 31;
			break;
		}
		thang1++;
	}
	soNgay1 += Date.get_Ngay();


	int soNgay2 = 0;
	int thang2 = 1;
	while (thang2 != currentDate.get_Thang())
	{
		switch (thang2)
		{
		case 1: soNgay2 += 31;
			break;
		case 2: soNgay2 += 28;
			break;
		case 3: soNgay2 += 31;
			break;
		case 4: soNgay2 += 30;
			break;
		case 5: soNgay2 += 31;
			break;
		case 6: soNgay2 += 30;
			break;
		case 7: soNgay2 += 31;
			break;
		case 8: soNgay2 += 31;
			break;
		case 9: soNgay2 += 30;
			break;
		case 10: soNgay2 += 31;
			break;
		case 11: soNgay2 += 30;
			break;
		case 12: soNgay2 += 31;
			break;
		}
		thang2++;
	}
	soNgay2 += currentDate.get_Ngay();

	soNgay += soNgay2 - soNgay1;
	return soNgay;
}

void Cage::set_CageNumber(zooAnimal &a)
{
	cout << "nhap so chuong: ";
	cin >> a.CageNumber;
	count++;
}

void Cage::xuat_cagenumber(zooAnimal a)
{
	cout << "So hieu cua chuong: ";
	cout << a.CageNumber;

}

int return_numbercage(Cage a)
{
	return a.count;
 }

int Cage::count = 0;
