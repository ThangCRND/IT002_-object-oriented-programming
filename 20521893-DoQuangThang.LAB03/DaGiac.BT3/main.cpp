#include <iostream>
#include "DaGiac.h"
#include <cmath>

using namespace std;

void choiceTamGiac()
{
    TamGiac TG;
    Vector VT;
    int choice = -1;
    TG.Nhap();
    cout << "\nOption: \n";
    cout << "1: Tinh tien\n";
    cout << "2: quay\n";
    cout << "3: exit\n";
    cout << ">>";
    cin >> choice;
    while (choice > 3 or choice < 1)
    {
        cout << "Khong hop le, chon lai: \n>>";
        cin >> choice;
    }

    switch (choice)
    {
    case 1:
        VT.Nhap();
        TG.TinhTien(VT);
        TG.Print();
        break;
    case 2:
        cout << "Nhap goc quay: ";
        int goc;
        cin >> goc;
        TG.QuayTamO(goc);
        TG.Print();
        break;
    case 3:
        return;
    }
}

void choiceChuNhat()
{
    HinhChuNhat CN;
    Vector VT;
    int choice = -1;
    CN.Nhap();
    cout << "\nOption: \n";
    cout << "1: Tinh tien\n";
    cout << "2: quay\n";
    cout << "3: exit\n";
    cout << ">>";
    cin >> choice;
    while (choice > 3 or choice < 1)
    {
        cout << "Khong hop le, chon lai: \n>>";
        cin >> choice;
    }

    switch (choice)
    {
    case 1:
        VT.Nhap();
        CN.TinhTien(VT);
        CN.Print();
        break;
    case 2:
        cout << "Nhap goc quay: ";
        int goc;
        cin >> goc;
        CN.QuayTamO(goc);
        CN.Print();
        break;
    case 3:
        return;
    }
}

void choiceBinhHanh()
{
    HinhBinhHanh BH;
    Vector VT;
    int choice = -1;
    BH.Nhap();
    cout << "\nOption: \n";
    cout << "1: Tinh tien\n";
    cout << "2: quay\n";
    cout << "3: exit\n";
    cout << ">>";
    cin >> choice;
    while (choice > 3 or choice < 1)
    {
        cout << "Khong hop le, chon lai: \n>>";
        cin >> choice;
    }

    switch (choice)
    {
    case 1:
        VT.Nhap();
        BH.TinhTien(VT);
        BH.Print();
        break;
    case 2:
        cout << "Nhap goc quay: ";
        int goc;
        cin >> goc;
        BH.QuayTamO(goc);
        BH.Print();
        break;
    case 3:
        return;
    }
}

void choiceVuong()
{
    HinhVuong HV;
    Vector VT;
    int choice = -1;
    HV.Nhap();
    cout << "\nOption: \n";
    cout << "1: Tinh tien\n";
    cout << "2: quay\n";
    cout << "3: exit\n";
    cout << ">>";
    cin >> choice;
    while (choice > 3 or choice < 1)
    {
        cout << "Khong hop le, chon lai: \n>>";
        cin >> choice;
    }

    switch (choice)
    {
    case 1:
        VT.Nhap();
        HV.TinhTien(VT);
        HV.Print();
        break;
    case 2:
        cout << "Nhap goc quay: ";
        int goc;
        cin >> goc;
        HV.QuayTamO(goc);
        HV.Print();
        break;
    case 3:
        return;
    }
}

void choiceNguGiac()
{
    NguGiac NG;
    Vector VT;
    int choice = -1;
    NG.Nhap();
    cout << "\nOption: \n";
    cout << "1: Tinh tien\n";
    cout << "2: quay\n";
    cout << "3: exit\n";
    cout << ">>";
    cin >> choice;
    while (choice > 3 or choice < 1)
    {
        cout << "Khong hop le, chon lai: \n>>";
        cin >> choice;
    }

    switch (choice)
    {
    case 1:
        VT.Nhap();
        NG.TinhTien(VT);
        NG.Print();
        break;
    case 2:
        cout << "Nhap goc quay: ";
        int goc;
        cin >> goc;
        NG.QuayTamO(goc);
        NG.Print();
        break;
    case 3:
        return;
    }
}

int main()
{
    int Choice_shape = -1;
    cout << "Nhap hinh can tao: \n";
    cout << "1: Hinh tam giac.\n";
    cout << "2: hinh chu nhat.\n";
    cout << "3: Hinh binh hanh.\n";
    cout << "4: Hinh vuong.\n";
    cout << "5: Ngu giac.\n";
    cout << "6: Exit.\n";
    cout << ">>";
    cin >> Choice_shape;
    while (Choice_shape > 6 or Choice_shape < 1)
    {
        cout << "Khong hop le, chon lai: \n>>";
        cin >> Choice_shape;
    }

    switch (Choice_shape)
    {
    case 1:
        choiceTamGiac();
        break;
    case 2:
        choiceChuNhat();
        break;
    case 3:
        choiceBinhHanh();
        break;
    case 4:
        choiceVuong();
        break;
    case 5:
        choiceNguGiac();
        break;
    case 6:
        break;
    }

    return 0;
}
