
#include"CTimeSpan.h"

using namespace std;

int main()
{
    CTimeSpan A,B,T;

    cout<<"Input timeline 1: " << endl;
    A.Nhap();
    cout<<"Input timeline 2: " << endl;
    B.Nhap();
    cout << "So sanh 2 moc thoi gian: " << endl;
    A.Xuat_Thoigian(B);
    cout<<" Tong = "<<endl;
    T=A.Cong(B);
    T.Xuat();
    cout<<" Hieu = "<<endl;
    T=A.Tru(B);
    T.Xuat();

    return 0;
}
