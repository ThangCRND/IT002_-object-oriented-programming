#pragma once
#ifndef Congty
#define Congty
#include <iostream>
#include <string.h>

using namespace std;
class Employee
{
protected:
	char* strName;
	char* strDate;
	long lSalary;
public:
	Employee(const char* = "",const char* = "");
	~Employee();

	virtual void Input();
	virtual void Output();
};

class productionEmployee :public Employee
{
	long lBasicSalary;
	int iNumberOfProduct;
public:
	productionEmployee(const char* strName = "", const char* strDate = "", long dBasicSalary = 0, int iNumberOfProduct = 0);
	~productionEmployee();

	void Input();
	void Output();
};

class Officer: public Employee
{
	int iNumberOfDay;
public:
	Officer(const char* = "", const char* = "", int = 0);
	~Officer();

	void Input();
	void Output();


};


#endif // !Congty.h
