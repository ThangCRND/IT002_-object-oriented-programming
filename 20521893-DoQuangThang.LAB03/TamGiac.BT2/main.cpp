#include "TamGiac.h"

using namespace std;

int main()
{
   Tamgiac T;
   double x,y,rad,s;
   T.Nhap();
   T.Xuat();
    cout << "\n Tinh tien theo x:";
      cin >> x;
    cout << "\n Tinh tien theo y:";
      cin >> y;
     T.TinhTien(x,y);
    cout <<"\n Toa do sau khi tinh tien la:" << endl;
       T.Xuat();
    cout <<"\n Quay goc: rad=";
       cin >> rad;
        T.Quay(rad);
        T.Xuat();
    cout <<"\n nhap he so thu nho phong to s = ";
       cin >> s;
      T.Phong_Thu(s);
       T.Xuat();

    return 0;
}
