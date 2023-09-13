#ifndef TEST_CANDIDATE_H_INCLUDED
#define TEST_CANDIDATE_H_INCLUDED

#include <iostream>
using namespace std;
class Test_Candidate
{
    private:
        int SoHocSinh;
        Test_Candidate *candidate= new Test_Candidate[SoHocSinh];
    public:
        Test_Candidate();
        int GetSoHocSinh();
        Test_Candidate * GetCandidate();
        void SetSoHocSinh(int n);
        void SetAllCandidate();
        void ShowLonHon15();
        ~Test_Candidate();
};



#endif // TEST_CANDIDATE_H_INCLUDED
