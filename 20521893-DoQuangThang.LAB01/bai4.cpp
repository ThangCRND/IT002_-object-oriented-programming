#include <iostream>
#include <cmath>
using namespace std;
const int YearMin = 1900;
const int YearMax = 10000; 

struct ngay 
{
    int Day, Month, Year;
};

typedef struct ngay NGAY;
void Nhap_ngay(NGAY&);
void Xuat_ngay(NGAY);
NGAY Ngay_ke_tiep(NGAY);
int SoNgayTrongThang(NGAY);
bool KiemTraNamNhuan(NGAY);


bool KiemTraNamNhuan(NGAY X)
{
    return (X.Year % 4 == 0 && X.Year % 100 != 0) || (X.Year % 400 == 0);
}
bool KiemTraNamNhuan(int i) 
{
    if (i % 4 == 0 && i % 100 != 0) 
	{
        return true;
    } 
    if (i % 400 == 0) 
	{
        return true;
    }
    return false;
}
int SoNgayTrongThang(NGAY X) 
{
    int NgayTrongThang;
    
    switch (X.Month) 
	{
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        NgayTrongThang = 31;
        break;
        
    case 4: case 6: case 9: case 11:
        NgayTrongThang = 30;
    case 2:
    	
        int kiem_tra = KiemTraNamNhuan(X);
        if (kiem_tra == 1) 
		{
            NgayTrongThang = 29;
        }
        else 
		{
            NgayTrongThang = 28;
        }
    }
    
    return NgayTrongThang;
}
NGAY Ngay_ke_tiep(NGAY X) 
{
    int Day_in_month = SoNgayTrongThang(X);
    if (X.Day < Day_in_month) 
	{
        X.Day++;
    }
    else 
	{
        if (X.Month < 12) 
		{
            X.Day = 1;
            X.Month++;
        }
        else 
		{
            X.Day = X.Month = 1;
            X.Year++;
        }
    }
    return X;
}
void Nhap_ngay(NGAY &X) 
{
    do 
	{
        cout << "Nhap nam: ";
        cin >> X.Year; 
    } while (X.Year < YearMin || X.Year > YearMax);
    do 
	{
        cout << "Nhap thang: ";
        cin >> X.Month;
    } while (X.Month < 1 || X.Month > 12);
    int Day_in_month = SoNgayTrongThang(X);
    do 
	{
        cout << "Nhap ngay: ";
        cin >> X.Day;
    } while (X.Day < 1 || X.Day >  Day_in_month);
}
void Xuat_ngay(NGAY X) 
{
    cout << "\nNgay: " << X.Day ;
   
    cout << "\nThang: " << X.Month ;
     
    cout << "\nNam: " << X.Year ;
    
}
int main()
{
    NGAY ngay;
    Nhap_ngay(ngay);
    Xuat_ngay(ngay);
    NGAY Ngay_mai = Ngay_ke_tiep(ngay);
    cout << endl;
    cout << "Ngay mai la ngay:";
    Xuat_ngay(Ngay_mai);
    return 0; 
}
