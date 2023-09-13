
#include "Book.h"
#include "SGK.h"
#include "TieuThuyet.h"
#include "TapChi.h"
#include "Book.cpp"
#include "SGK.cpp"
#include "TieuThuyet.cpp"
#include "TapChi.cpp"



int main()
{
    int A,B,C;
    cout << "Nhap so luong SGK:";
    cin >> A;
    cout << "Nhap so luong Sach tieu thuyet:";
    cin >> B;
    cout << "Nhap so luong Tap chi:";
    cin >> C;
    cout << endl;

    SGK *sgk=new SGK[A];
    Novel *Tapchi=new Novel[B];
    Magazine *MG=new Magazine[C];

      for (int i = 0; i < A; i++)
     {
        cout << "Nhap thong tin SGK thu " << i + 1 << ": " <<endl;
        sgk[i].Nhap();
     }
      cout << endl;
    for (int i = 0; i < B; i++)
     {
        cout << "Nhap thong tin sach Tieu thuyet thu " << i + 1 << ": " << endl;
        Tapchi[i].Nhap();
     }
       cout << endl;
    for (int i = 0; i < C; i++)
     {
        cout << "Nhap thong tin sach Tap chi thu " << i + 1 << ": " <<endl;
        MG[i].Nhap();
     }
     cout << endl << endl;

    for (int i = 0; i < A; i++)
      sgk[i].Xuat();
      cout << endl;
    for (int i = 0; i < B; i++)
        Tapchi[i].Xuat();
      cout << endl;
    for (int i = 0; i < C; i++)
        MG[i].Xuat();
     cout << endl;

    return 0;
}
