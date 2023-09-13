#include "MayChu.h"
#include <ctime>
MayChu::MayChu()
{
    this-> Loaithietbi = "Server";
    this->HeDieuHanh = "";
    this-> Thoigianhoatdong =0;
}
MayChu::MayChu(string loaithietbi,string hedieuhanh,int time)
{
    Loaithietbi=loaithietbi;
    HeDieuHanh = hedieuhanh;
    Thoigianhoatdong = time;
}
MayChu::~MayChu(){}

int MayChu::GetThoigianhoatdong2()
{
    time_t t3 = time(0);
    return this->Thoigianhoatdong = t3 - Thietbi::GetThoidiemkhoidong();
}
void MayChu::SetThoigianhoatdong2(int timehd)
{
    Thoigianhoatdong = timehd;
}
double MayChu::GetMuctieuthu2()
{
    return this->Thoigianhoatdong *100;
}

void MayChu::Nhap()
{

    cout << "Nhap He dieu hanh" << endl;
    getline(cin,HeDieuHanh);
}

void MayChu::Xuat()
{
    Thietbi::Xuat();
     cout << " He dieu hanh" << HeDieuHanh <<  endl;
    cout << "Muc tieu thu:" << GetMuctieuthu2() << endl;
}
