#include "TamGiac.h"

Tamgiac::Tamgiac()
{

}
Tamgiac::Tamgiac(Diem x, Diem y, Diem z)
{
    A=x;
    B=y;
    C=z;
}
void Tamgiac::Nhap()
{
    int Kiemtra = 0;
    do
    {
        cout << "Nhap dinh A: "<< endl;
         A.Nhap();
        cout << "Nhap dinh B: "<< endl;
         B.Nhap();
        cout << "Nhap dinh C: "<< endl;
         C.Nhap();

      Diem D,E;
      D = A.vector (B);
      E = A.vector (C);

    if (double (D.getX()*E.getY()) == double (D.getY()*E.getX()))
      {
          Kiemtra = 1;

        cout << " Triangle not exist. Input again !";
      }
      cout << endl;

    }while (Kiemtra);
}
void Tamgiac::Xuat ()
{
    cout << "Tam giac duoc tao boi 3 diem:" << endl;
      A.Xuat();
      B.Xuat();
      C.Xuat();
}
Diem Tamgiac::TinhTien(double m,double n)
{
    Diem T;
  A.TinhTien(m,n);
  B.TinhTien(m,n);
  C.TinhTien(m,n);
  return T;
}
void Tamgiac::Quay(double rad)
{
  A.Quay(rad);
  B.Quay(rad);
  C.Quay(rad);
}
void Tamgiac::Phong_Thu(double s)
{
 A.Set_X_Y(A.getX()*s,A.getY()*s);
 B.Set_X_Y(B.getX()*s,B.getY()*s);
 C.Set_X_Y(C.getX()*s,C.getY()*s);
}


