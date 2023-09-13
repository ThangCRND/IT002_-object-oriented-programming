#include "Test_Candidate.h"
#include <iostream>
using namespace std;

int main()
{

Test_Candidate TCandidate;

cout<<"Nhap so hoc sinh: ";

int n;

cin>>n;

TCandidate.SetSoHocSinh(n);

TCandidate.SetAllCandidate();

cout<<"Hoc sinh co tong diem lon hon 15: ";

TCandidate.ShowLonHon15();

return 0;

}
