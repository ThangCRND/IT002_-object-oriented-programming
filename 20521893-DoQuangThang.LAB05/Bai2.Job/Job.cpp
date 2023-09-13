#include "Job.h"
#include <string.h>
#include <iostream>

Job::Job()
{
    this->Name = "";
    this ->Date = "";
    this ->Age = 0;
}
Job::Job(string name,string date,int age)
{
    this ->Name = name;
    this ->Date = date;
    this ->Age =age;

}
Job::~Job(){}


string Job::GetName()
{
    return Name;
}
string Job::GetDate()
{
    return Date;
}
int Job::GetAge()
{
    return Age;
}
void Job::SetName(string name)
{
    Name=name;
}
void Job::SetDate(string date)
{
      Date=date;
}
void Job::SetAge(int age)
{
    Age=age;
}

void Job::Nhap()
{ 
      cin.ignore();
    cout<<"Name: ";
    getline(cin, Name); 
    cout<<"Input Day of Birth: ";
    getline(cin, Date);
    cout<<"Age: ";
     cin>>Age;


}
void Job::Xuat()
{
    cout<< "Ten: " << Name << endl;
    cout <<"Ngay sinh: " << Date << endl;
    cout << "Tuoi: " << Age << endl;
}

