
#include "Ellipse.h"
#include "Ellipse.cpp"
#include "Circle.h"
#include "Circle.cpp"
#include<iostream>

using namespace std;

int main()
{
    Ellipse E;
    Circle C;

    cout << "Nhap Ellipse:" << endl;
    E.Nhap();
    cout << "\nXuat Ellipse: " << endl;
    E.Xuat();
    cout << "\nNhap hinh tron." << endl;
    C.Nhap();
    cout << "\nXuat hinh tron." << endl;
    C.Xuat();
    return 0;
}
