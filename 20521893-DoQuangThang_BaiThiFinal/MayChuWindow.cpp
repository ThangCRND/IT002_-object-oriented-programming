#include "MayChuWindow.h"

MaychuWD::MaychuWD()
{
    this->HeDieuHanh = "Windows Server 2019";
}
MaychuWD::~MaychuWD(){}

void MaychuWD::KhoiDongLai()
{
  cout << "Thiet bi:" << this->Loaithietbi << "da khoi dong lai vao luc" << Thoidiemkhoidong;
  Solankhoidong += 1;

}
void MaychuWD::Xuat()
{
    MayChu::Xuat();
    KhoiDongLai();
    cout << endl;
}
