#include "NhanVien.h"

int main()
{
	int A, B;

	cout << "Nhap so luong Phi cong: ";
	cin >> A;
	cout << "Nhap so luong Tiep vien: ";
	cin >> B;
	cin.ignore();
	cout << endl;

    PhiCong *PC= new PhiCong[A];
    TiepVien *TV = new TiepVien[B];
   
    for (int i = 0; i < A; i++)
    {
        cout << "Nhap thong tin Phi cong: ";
        PC[i].Nhap();
    }
    cout << endl;
    for (int i = 0; i < B; i++)
    {
        cout << "Nhap thong tin Tiep vien: ";
        TV[i].Nhap();
    }
    cout << endl;

    for (int i = 0; i < A; i++)
        PC[i].Xuat();
    cout << endl;
    for (int i = 0; i < B; i++)
        TV[i].Xuat();
    cout << endl;
   return 0;

}
