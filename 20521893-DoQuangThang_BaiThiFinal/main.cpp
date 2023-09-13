#include <iostream>
#include "Thietbi.h"
#include "Router.h"
#include "MayChu.h"
#include "MayChuWindow.h"
#include "Thietbi.cpp"
#include "Router.cpp"
#include "MayChu.cpp"
#include "MayChuWindow.cpp"

using namespace std;

int main()
{
    int n;
    Thietbi **a;

        cout<<"Nhap so thiet bi: ";
        cin>>n;
        a=new Thietbi *[n];
        for(int i=0; i<n; i++)
        {
            int x;
            cout<<"Chon 1 de nhap Router."<<endl;
            cout<<"Chon 2 de nhap May chu."<<endl;
            cout<<"Chon 3 de xuat May chu WD."<<endl;
            cout<<"Vui long nhap: ";
            cin>>x;

            switch(x)
            {
                case 1:
                {
                    a[i]=new Router();
                    a[i]->Nhap();
                    break;
                }
                case 2:{
                    a[i]=new MayChu();
                    a[i]->Nhap();
                    break;
                }
                case 3:{
                    a[i]=new MaychuWD();
                    break;
                }
            }
        }
        for (int i=0;i<n;i++)
        {
            a[i]->Xuat();
        }
}



