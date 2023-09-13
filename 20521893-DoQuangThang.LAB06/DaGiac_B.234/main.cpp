#include "DaGiac.h"
#include "Vecto.h"
#include "Diem.h"
#include "Tamgiac.h"
#include "Tugiac.h"
#include "Ngugiac.h"

using namespace std;

void chon_TamGiac()
{
    TamGiac Tamgiac;
    Vecto vecto;

    Tamgiac.Nhap();

    cout << "=======CHON TINH NANG======== "<<endl;
    cout << "\t1: Phep tinh tien."<< endl;
    cout << "\t2: Phep Quay." << endl;
    cout << "\t3: Thoat khoi tinh nang."<<endl;
    cout << "=============================="<<endl;
    cout << endl;

    int chon ;
    cin >> chon;
    while (chon > 3 || chon < 1)
    {
        cout << "Khong hop le, input again: ";
        cin >> chon;
    }

    switch (chon)
    {
      case 1:
          {
         cout << "Nhap vecto:" << endl;
           vecto.Nhap();
         cout <<"Thuc hien phep tinh tien: " <<endl;
           Tamgiac.TinhTien(vecto);
         cout << "Output:" <<endl;
           Tamgiac.Xuat();
         break;
          }
      case 2:
        {
          cout << "Nhap goc quay: ";
            int goc;
             cin >> goc;
            Tamgiac.QuayTam_O(goc);
            Tamgiac.Xuat();
          break;
        }
     case 3:
         cout <<"Ket thuc chuong trinh." << endl;
         return;
         break;
    }
}

void  chon_HinhChuNhat()
{
    HinhChuNhat HCN;
    Vecto vecto;

    HCN.Nhap();
    cout << "=======CHON TINH NANG======== "<<endl;
    cout << "\t1: Phep tinh tien."<< endl;
    cout << "\t2: Phep Quay." << endl;
    cout << "\t3: Thoat khoi tinh nang."<<endl;
    cout << "=============================="<<endl;
    cout << endl;

     int chon ;
    cin >> chon;
    while (chon > 3 || chon < 1)
    {
        cout << "Khong hop le, input again: ";
        cin >> chon;
    }

    switch (chon)
    {
      case 1:
         cout << "Nhap vecto:" << endl;
           vecto.Nhap();
         cout <<"Thuc hien phep tinh tien: " <<endl;
           HCN.TinhTien(vecto);
         cout << "Output:" <<endl;
           HCN.Xuat();
         break;
      case 2:
        {
          cout << "Nhap goc quay: ";
            int goc;
             cin >> goc;
            HCN.QuayTam_O(goc);
            HCN.Xuat();
          break;
        }
     case 3:
         cout <<"Ket thuc chuong trinh." << endl;
         return;
    }
}

void  chon_HinhBinhHanh()
{
    HinhBinhHanh HBH;
    Vecto vecto;

    HBH.Nhap();
     cout << "=======CHON TINH NANG======== "<<endl;
    cout << "\t1: Phep tinh tien."<< endl;
    cout << "\t2: Phep Quay." << endl;
    cout << "\t3: Thoat khoi tinh nang."<<endl;
    cout << "=============================="<<endl;
    cout << endl;

     int chon ;
    cin >> chon;
    while (chon > 3 || chon < 1)
    {
        cout << "Khong hop le, input again: ";
        cin >> chon;
    }

    switch (chon)
    {
      case 1:
            cout << "Nhap vecto:" << endl;
          vecto.Nhap();
           cout <<"Thuc hien phep tinh tien: " <<endl;
          HBH.TinhTien(vecto);
           cout << "Output:" <<endl;
          HBH.Xuat();
         break;
      case 2:
        {
          cout << "Nhap goc quay: ";
            int goc;
             cin >> goc;
            HBH.QuayTam_O(goc);
          cout << "HBH sau khi quay :" << endl;
            HBH.Xuat();
          break;
        }
     case 3:
         cout <<"Ket thuc chuong trinh." << endl;
         return;
    }
}

void  chon_HinhVuong()
{
    HinhVuong HV;
    Vecto vecto;

    HV.Nhap();
    cout << "=======CHON TINH NANG======== "<<endl;
    cout << "\t1: Phep tinh tien."<< endl;
    cout << "\t2: Phep Quay." << endl;
    cout << "\t3: Thoat khoi tinh nang."<<endl;
    cout << "=============================="<<endl;
    cout << endl;

     int chon ;
    cin >> chon;
    while (chon > 3 || chon < 1)
    {
        cout << "Khong hop le, input again: ";
        cin >> chon;
    }

    switch (chon)
    {
      case 1:
            cout << "Nhap vecto:" << endl;
          vecto.Nhap();
           cout <<"Thuc hien phep tinh tien: " <<endl;
          HV.TinhTien(vecto);
           cout << "Output:" <<endl;
          HV.Xuat();
         break;
      case 2:
        {
          cout << "Nhap goc quay: ";
            int goc;
             cin >> goc;
            HV.QuayTam_O(goc);
          cout << "Hinh vuong sau khi quay :" << endl;
            HV.Xuat();
          break;
        }
     case 3:
         cout <<"Ket thuc chuong trinh." << endl;
         return;
    }
}

void chon_NguGiac()
{
    NguGiac NG;
    Vecto vecto;

    NG.Nhap();
    cout << "=======CHON TINH NANG======== "<<endl;
    cout << "\t1: Phep tinh tien."<< endl;
    cout << "\t2: Phep Quay." << endl;
    cout << "\t3: Thoat khoi tinh nang."<<endl;
    cout << "=============================="<<endl;
    cout << endl;

     int chon ;
    cin >> chon;
    while (chon > 3 || chon < 1)
    {
        cout << "Khong hop le, input again: ";
        cin >> chon;
    }

    switch (chon)
    {
      case 1:
            cout << "Nhap vecto:" << endl;
          vecto.Nhap();
           cout <<"Thuc hien phep tinh tien: " <<endl;
          NG.TinhTien(vecto);
           cout << "Output:" <<endl;
          NG.Xuat();
         break;
      case 2:
        {
          cout << "Nhap goc quay: ";
            int goc;
             cin >> goc;
            NG.QuayTam_O(goc);
          cout << "Ngu giac sau khi quay :" << endl;
            NG.Xuat();
          break;
        }
     case 3:
         cout <<"Ket thuc chuong trinh." << endl;
         return;
    }
}

int main()
{
    cout <<"================MENU=============" << endl;
    cout << "\tNhap hinh can tao: " << endl;
    cout << "\t1: Hinh tam giac." << endl;
    cout << "\t2: hinh chu nhat." << endl;
    cout << "\t3: Hinh binh hanh." << endl;
    cout << "\t4: Hinh vuong." << endl;
    cout << "\t5: Ngu giac." << endl;
    cout << "\t6: Thoat khoi MENU." << endl;
    cout << endl << endl;

     int chon_hinh;
    cin >> chon_hinh;
    while (chon_hinh > 6 or chon_hinh < 1)
    {
        cout << "Khong hop le, input again:";
        cin >> chon_hinh;
    }

    switch (chon_hinh)
    {
    case 1:
        chon_TamGiac();
        break;
    case 2:
        chon_HinhChuNhat();
        break;
    case 3:
        chon_HinhBinhHanh();
        break;
    case 4:
        chon_HinhVuong();
        break;
    case 5:
        chon_NguGiac();
        break;
    case 6:
        cout << "Ket thuc MENU." << endl;
        break;
    }

    return 0;
}
