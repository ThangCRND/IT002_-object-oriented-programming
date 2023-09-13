#include "TapChi.h"

Magazine::Magazine()
{
    this->Period="";
}
Magazine::Magazine(string period)
{
    SetPeriod(period);
}
Magazine::~Magazine(){};

string Magazine::GetPeriod()
{
    return Period;
}
void Magazine::SetPeriod(string period)
{
    Period=period;
}

void Magazine::Nhap()
{

     Book::Nhap();
    cout << "Dinh ky: ";
      cin.ignore();
     getline(cin,Period);

}
void Magazine::Xuat()
{
    cout <<"====Thong tin SACH TAP CHI====" << endl;
    Book::Xuat();
    cout << "Dinh ky xuat ban:" << this->Period << endl;
    cout <<"===============================" <<endl;
}
