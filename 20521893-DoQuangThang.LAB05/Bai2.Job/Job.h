#ifndef JOB_H_INCLUDED
#define JOB_H_INCLUDED

#include <iostream>
#include<string.h>
#include<limits>
using namespace std;

class Job
{
protected:
    string Name;
    string Date;
    int Age;
public:

    Job();
    Job(string ,string ,int );
    ~Job();

    string GetName();
    string GetDate();
    int GetAge();
    void SetName(string );
    void SetDate(string );
    void SetAge(int );

     void Nhap();
     void Xuat();
};


#endif // JOB_H_INCLUDED
