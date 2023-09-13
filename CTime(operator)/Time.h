// 
//Nhóm:
//Tên tv 1 : Trần Vĩnh Tuân ,MASV: 20522127
//Tên tv 2 : Lê Viết Tài Mẫn ,MASV:20521593
//Tên tv 3 : Đỗ Quang Thắng ,MASV: 20521893
//Tên tv 4 : Dương Đỗ Khoa ,MASV: 20521465
//Tên tv 5 : Hoàng Thanh Lâm ,MASV: 20521513

#pragma once
#ifndef Time
#define Time
#include <iostream>

using namespace std;

class CTimeSpan
{
	int iHour;
	int iMinute;
	int iSecond;
public:
	CTimeSpan(int = 0, int = 0, int = 0);
	~CTimeSpan();

	void StandardizedTime();

	void Input();

	void setiHour(int);
	void setiMinute(int);
	void setiSecond(int);

	int getiHour();
	int getiMinute();
	int getiSecond();
	
	friend CTimeSpan operator +(CTimeSpan, CTimeSpan);
	friend CTimeSpan operator -(CTimeSpan, CTimeSpan);
	friend bool operator <(CTimeSpan, CTimeSpan);
	friend bool operator >(CTimeSpan, CTimeSpan);
	friend bool operator ==(CTimeSpan, CTimeSpan);
	friend ostream& operator << (ostream&, CTimeSpan);
};
#endif // !Ctimespan


 