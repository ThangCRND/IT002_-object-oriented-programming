#include <iostream>
#include "Bo.h"
#include "Cuu.h"
#include "De.h"
#include "GiaSuc.h"
#include "GiaSuc.cpp"
#include "Bo.cpp"
#include "Cuu.cpp"
#include "De.cpp"

int main()
{
    int SLBo, SLCuu, SLDe;
    cout << "Nhap so luong bo : ";
    cin >> SLBo;
    cout << "Nhap so Luong cuu: ";
    cin >> SLCuu;
    cout << "Nhap so luong de: ";
    cin >> SLDe;
    cout << endl;

    Bo *Cow = new Bo[SLBo];
    Cuu *Sheep = new Cuu[SLCuu];
    De *Goat = new De[SLDe];

    cout << "\nBo keu: " << Cow[0].GetSound();
    cout << "\nCuu keu: " << Sheep[0].GetSound();
    cout << "\nDe keu: " << Goat[0].GetSound();
    cout << endl;

    // Sinh san va cho sua
    int SL_SuaBo=0;
    for (int i=0; i<SLBo; i++)
    {
        Cow[i].Birth();
        SL_SuaBo = SL_SuaBo + Cow[i].GetMilk();
    }

    int SL_SuaCuu=0;
    for (int i=0; i<SLCuu; i++)
    {
        Sheep[i].Birth();
        SL_SuaCuu= SL_SuaCuu + Sheep[i].GetMilk();
    }

    int SL_SuaDe=0;
    for (int i=0; i<SLDe; i++)
    {
        Goat[i].Birth();
        SL_SuaDe = SL_SuaDe + Goat[i].GetMilk();
    }
     cout << endl;

    // so luong sinh san va tong so luong sua
    cout << "======================COW=======================" << endl;
    cout << "So luong bo truong thanh: " << Cow[0].GetGrowUp();
    cout << "\nSo luong bo moi sinh: " << Cow[0].GetChild();
    cout << "\nSo luong sua bo: " << SL_SuaBo ;
    cout << endl << endl;


    cout << "=====================SHEEP=========================" <<endl;
    cout << "So luong cuu truong thanh: " << Sheep[0].GetGrowUp();
    cout << "\nSo luong cuu moi sinh: " << Sheep[0].GetChild();
    cout << "\nSo luong sua cuu: " << SL_SuaCuu;
    cout << endl << endl;


    cout << "=====================GOAT========================" << endl;
    cout << "So luong de truong thanh: " << Goat[0].GetGrowUp();
    cout << "\nSo luong de moi sinh: " << Goat[0].GetChild();
    cout << "\nSo luong sua de: " << SL_SuaDe;
    cout << endl << endl;


    GiaSuc GS;
    int Total_Child = Goat[0].GetChild() + Sheep[0].GetChild() + Cow[0].GetChild();
    int Total_Milk = SL_SuaBo + SL_SuaCuu + SL_SuaDe;

    cout << "====================TRANG TRAI==================" << endl;
    cout << "So luong gia suc truong thanh: " << GS.Get_Total_GrowUp()-1;
    cout << "\nSo luong gia suc moi sinh: " << Total_Child;
    cout << "\nTong so lit sua cua 3 gia suc: " << Total_Milk ;
    cout << endl;
    cout << "==================================================" << endl;

    return 0;
}
