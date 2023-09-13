#include "Router.h"
#include <ctime>
Router::Router()
{
    this->Loaithietbi = "Router";
    srand(time(NULL));
    this->Sogoixuly = 100 +  rand()%(2000-100+1);
    this->Thoigianhoatdong = 0;
}
Router::Router(string loaithietbi,int num,int time)
{
    this->Loaithietbi = loaithietbi;
    this->Sogoixuly = num;
    this->Thoigianhoatdong = time;
}
Router::~Router(){}

int Router::GetSoluong()
{
    return this->Sogoixuly;
}
void Router::SetSoluong(int num)
{
    Sogoixuly = num;
}
int Router::GetThoigianhoatdong()
{
    time_t t3 = time(0);
    return this->Thoigianhoatdong = t3 - Thietbi::GetThoidiemkhoidong();
}
void Router::SetThoigianhoatdong(int time)
{
    Thoigianhoatdong = time;
}
double Router::GetMuctieuthu()
{
    return (30 + this->Sogoixuly*0.01) * Router::GetThoigianhoatdong();
}

void Router::Xuat()
{
    Thietbi::Xuat();
    cout << "Muc tieu thu:" << this->GetMuctieuthu() << endl;

}
