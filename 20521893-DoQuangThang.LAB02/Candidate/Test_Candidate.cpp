#include "Test_Candidate.h"
#include <iostream>
using namespace std;
int Test_Candidate::GetSoHocSinh()
{
        return SoHocSinh;
}
Test_Candidate * Test_Candidate::GetCandidate()
{
        return candidate;
}
void Test_Candidate::SetSoHocSinh(int n)
{
    this->SoHocSinh=n;
}
Test_Candidate::Test_Candidate()
{
    this->SoHocSinh=0;
}
Test_Candidate::~Test_Candidate()
{
    delete[] candidate;
}
void Test_Candidate::SetAllCandidate()
{
    for(int i=0;i<GetSoHocSinh();i++)
        {
            cout<<"Nhap thong tin hoc sinh "<<i+1<<": "<<endl;
            candidate[i].Input();
        }
}
void Test_Candidate::ShowLonHon15()
{
    for(int i=0;i<GetSoHocSinh();i++)
        {
            if(candidate[i].GetLonHon15())
             {
                candidate[i].Print();
             }
        }
    }
