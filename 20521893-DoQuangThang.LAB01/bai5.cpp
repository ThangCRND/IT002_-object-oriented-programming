#include <iostream>
using namespace std;
struct HocSinh
{
    string hoten;
    int toan;
    int van;
    float dtb;
};
typedef struct HocSinh HOCSINH;
void Nhap(HOCSINH&);
void Xuat(HOCSINH);
void TinhDTB(HOCSINH&);

int main ()
{
    HOCSINH hs;
    cout << "Nhap thong tin hoc sinh: \n";
    Nhap(hs);
    TinhDTB(hs);
    cout <<"\nThong tin hoc sinh:";
    Xuat(hs);
    return 0;
}
void Xuat(HOCSINH x)
{
    cout << "\nHo va ten:";
    cout<<x.hoten;
    cout << "\nDiem toan:";
    cout<<x.toan;
    cout << "\nDiem van:";
    cout<<x.van;
    cout<<"\nDTB la: "<<x.dtb;
}
void Nhap(HOCSINH& x)
{
    cout << "\nNhap ho va ten:";
    getline(cin,x.hoten);
    cout << "Nhap diem toan:";
    cin >> x.toan;
    cout << "Nhap diem van:";
    cin >> x.van;
}
void TinhDTB(HOCSINH &x)
{
    x.dtb=(float)(x.toan+x.van)/2;
}
