#ifndef CANDIDATE_H_INCLUDED
#define CANDIDATE_H_INCLUDED
#include <iostream>
using namespace std;
struct Time
{
    int ngay;
    int thang;
    int nam;
    void setTime(int d,int m,int y)
    {
        ngay=d;
        thang=m;
        nam=y;
    }
  void Out()
    {
        cout<<ngay<<"/"<<thang<<"/"<<nam;
    }
  void In()
    {
        cout<<"Nhap ngay, thang, nam: ";
        cin>>ngay >> thang >> nam;
    }
};
class Candidate
{
private:
    string Ten;
    int MaHS;
    Time NgaySinh;
    double Toan;
    double Van;
    double Anh;
    bool LonHon15;
public:
    string GetTen();
    int GetMaHS();
    Time GetNgaySinh();
    double GetToan();
    double GetVan();
    double GetAnh();
    bool GetLonHon15();
    void SetTen(string name);
    void SetMaHS(int id);
    void SetNgaySinh(Time birth);
    void SetToan(double toan);
    void SetVan(double van);
    void SetAnh(double anh);
    Candidate();
    Candidate(string name,int Id_Number,Time day_of_birth,double toan,double van,double anh);
    void Input();
    void Print();
    ~Candidate();
};


#endif // CANDIDATE_H_INCLUDED
