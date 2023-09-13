
#include "CTime.h"
using namespace std;
int main()
{
    CTime A;
    int x;
    cout<<"Nhap thoi gian: " << endl;
    A.Nhap();
    A.Xuat();
    cout<<"Nhap so giay tinh toan: ";
    cin>>x;
    cout<<" Tong = ";
    A.Cong(x);
    A.Xuat();
    cout<<" Hieu = ";
    A.Tru(x);
    A.Xuat();
    cout<<"\nThem 1 giay = ";
    A.Add_Second();
    A.Xuat();
    cout <<"\nGiam 1 giay = ";
    A.Sub_Second();
    A.Xuat();
}
