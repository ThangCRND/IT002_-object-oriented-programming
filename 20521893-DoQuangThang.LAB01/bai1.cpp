#include <iostream>
using namespace std;
struct PhanSo
{
    int ts;
    int ms;
};
void Nhap(PhanSo &A)
{
    do{
    cin >> A.ts >> A.ms;
    if (A.ms==0) cout << "Loi.Nhap lai." << endl;
      }
    while (A.ms==0);
}
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void RutGonPhanSo(PhanSo &A)
{
	int ucln = gcd(A.ts, A.ms);
	A.ts = A.ts / ucln;
	A.ms = A.ms / ucln;
}
void Xuat_Phan_So(PhanSo A)

{

    if(A.ts % A.ms==0)
        {
        cout << A.ts / A.ms;
    return;
        }
    if (A.ts > 0 && A.ms <0){
        cout << -A.ts <<"/" << -A.ms;
        return;
    }
	cout << A.ts << "/" << A.ms;
}
int main ()
{
    PhanSo A;
    Nhap (A);
    RutGonPhanSo(A);
    Xuat_Phan_So(A);
    return 0;
}
