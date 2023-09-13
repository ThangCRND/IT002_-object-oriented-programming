#include "Thietbi.h"
#include <ctime>
#include <time.h>
Thietbi::Thietbi()
{
    time_t now = time(0);
    srand(time(NULL));
    this->ID = rand()%1000+1000;
    this->Loaithietbi = "";
    this->Solankhoidong = 1;
    this->Thoidiemkhoidong = now;
    this->Congsuat = 0;
}
Thietbi::Thietbi(int ID,string loaithietbi,int solan,int thoidiem)
{
    this->ID = ID;
    this->Loaithietbi = loaithietbi;
    this->Solankhoidong = solan;
    this->Thoidiemkhoidong = thoidiem;

}
Thietbi::~Thietbi(){}

int Thietbi::GetThoidiemkhoidong()
{
    return this->Thoidiemkhoidong;

}
void Thietbi::SetThoidiemkhoidong(int thoidiem)
{
    Thoidiemkhoidong = thoidiem;
}
int Thietbi::GetKhoidongthietbi()
{
    return this->Solankhoidong = this->Solankhoidong +1;
}
void Thietbi::SetKhoidongthietbi(int khoidong)
{
   Solankhoidong=khoidong;
}
double Thietbi::GetMuctieuthu()
{
    return this->Congsuat * this->Thoidiemkhoidong;
}

void Thietbi::Nhap()
{
    cin.ignore();
    cout << "Loai thiet bi:" ;
    getline(cin,this->Loaithietbi);

}
void Thietbi::Xuat()
{
    cout << "ma dinh danh Thiet bi :" << this->ID << endl;
    cout << "Thoi diem khoi dong:" << this->Thoidiemkhoidong << endl;
    cout <<"So lan khoi dong : " << this->Solankhoidong<< endl;
    cout << "Muc tieu thu:" << this->GetMuctieuthu() << endl;
}
