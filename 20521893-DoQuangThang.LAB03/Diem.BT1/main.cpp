#include <iostream>
#include "Diem.h"
using namespace std;

int main()
{
    Diem F;
    int A,B;
    F.Input();
    F.Output();
    cout << "Nhap hoanh do tinh tien :";
    cin >> A;
    cout <<"Nhap tung do tinh tien : ";
    cin >> B;
    F.TinhTien (A,B);
    cout << "TOA DO MOI LA: " << endl;
    F.Output();
    return 0;
}
