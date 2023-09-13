
#include <iostream>
using namespace std;
struct PhanSo
{
    int ts;
    int ms;
};
void Nhap(PhanSo &A)
{
    do
	{
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
PhanSo SoSanh(PhanSo A,PhanSo B)
{
    if (A.ts*B.ms - B.ts*A.ms >0) 
	   return A;
    else if (A.ts*B.ms - B.ts*A.ms < 0) 
	   return B;
    else return A;

}
void Xuat_Phan_So(PhanSo A)

{

    if(A.ts % A.ms==0)
       {
        cout << A.ts / A.ms;
    return;
        }
    if (A.ts > 0 && A.ms <0)
	  {
       cout << -A.ts <<"/" << -A.ms;
        return;
       }
	cout << A.ts << "/" << A.ms;
}
int main ()
{
    PhanSo A,B;
    Nhap (A);
    Nhap (B);
    RutGonPhanSo(A);
    Xuat_Phan_So(SoSanh(A,B));
    return 0;
}
