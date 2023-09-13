#include "Congty.h"

Employee::Employee(const char* strName , const char* strDate) {
	this->strName = _strdup(strName);
	this->strDate = _strdup(strDate);
	lSalary = 0;
}
Employee::~Employee(){}

void Employee::Input()
{
	cout << "Nhap ten: ";
	cin.getline(strName, 20);

	cout << "Nhap ngay sinh: ";
	cin.getline(strDate, 20);

}

void Employee::Output()
{
	cout << "Ten: " << strName << endl;
	cout << "Ngay sinh: " << strDate << endl;
}

productionEmployee::productionEmployee(const char* strName , const char* strDate , long dBasicSalary , int iNumberOfProduct ) :Employee(strName, strDate) {
	this->lBasicSalary = dBasicSalary;
	this->iNumberOfProduct = iNumberOfProduct;
	this->lSalary = dBasicSalary + iNumberOfProduct * 5000;
}
productionEmployee::~productionEmployee(){}

void productionEmployee::Input()
{
	Employee::Input();

	cout << "Nhap luong co ban: ";
	cin >> lBasicSalary;

	cout << "Nhap so san pham: ";
	cin >> iNumberOfProduct;
	cin.ignore();

	lSalary = lBasicSalary + iNumberOfProduct * 5000;
}

void productionEmployee::Output()
{
	cout << "Thong tin nhan vien san xuat: " << endl;
	Employee::Output();
	cout << "Luong co ban: " << lBasicSalary << endl;
	cout << "So san pham: " << iNumberOfProduct << endl;
	cout << "Luong: " << lSalary << endl;
}

Officer::Officer(const char* strName , const char* strDate, int iNumberOfDay)
{
	this->strName = _strdup(strName);
	this->strDate = _strdup(strDate);
	this->iNumberOfDay = iNumberOfDay;
	lSalary = iNumberOfDay * 100000;
}
Officer::~Officer(){}

void Officer::Input()
{
	Employee::Input();

	cout << "Nhap so ngay lam viec: ";
	cin >> iNumberOfDay;
	cin.ignore();
	lSalary = iNumberOfDay * 100000;
}

void Officer::Output()
{
	cout << "Thong tin nhan vien van phong: " << endl;
	Employee::Output();
	cout << "So ngay lam viec: " << iNumberOfDay << endl;
	cout << "Luong: " << lSalary << endl;
}