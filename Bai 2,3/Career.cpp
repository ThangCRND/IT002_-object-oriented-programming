#include"Career.h"
#include<iostream>
#include<limits>
using namespace std;

//Career definition 
//constructor and destructor
Career::Career(){
    SetName("");
    SetBirth(DMY());
    SetAge(0);
}
Career::Career(const string name,int d,int m,int y,int age){
    SetName(name);
    SetBirth(DMY(d,m,y));
    SetAge(age);
}
Career::Career(const string name,DMY birth,int age){
    SetName(name);
    SetBirth(birth);
    SetAge(age);

}
Career::~Career(){
}
//getter and setter
void Career::SetName(string name){
    Name=name;
}
void Career::SetBirth(DMY birth){
    Birth=birth;
}
void Career::SetAge(int age){
    Age=age;
}
// other method
void Career::SetInfo(){
    cout<<"Input: ";  
    cout<<"Name: ";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string name;
    getline(cin,name);
    SetName(name);
    DMY birth;
    cout<<"Input Day of Birth: ";
    cin>>birth;
    SetBirth(birth);
    cout<<"Age: ";
    int age;
    cin>>age;
    SetAge(age);
}
void Career::Print(){
    cout<<GetName()<<"("<<GetBirth()<<"): "<<GetAge()<<" Ages "; 
}

//Student definition 
Student::Student(){
    SetPassyear(0);
    SetNameSchool("");
    SetMajor("");
}
Student::Student(const string name,const string school){
    SetPassyear(0);
    SetNameSchool(school);
    SetMajor("");
    SetName(name);
}
Student::~Student(){
}

//Setter
void Student::SetPassyear(int year){
    passYear=year;
}
void Student::SetNameSchool(string school){
    NameSchool=school;
}
void Student::SetMajor(string major){
    Major=major;
}
void Student::SetInfo(){
    Career::SetInfo();
    cout<<"Input:";
    cout<<"Passed year: ";
    int passyear;
    cin>>passYear;
    SetPassyear(passYear);
    cout<<"School name: ";
    string nameschool;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(cin,nameschool);
    SetNameSchool(nameschool);
    string major;
    cout<<"Major: ";
    getline(cin,major);
    SetMajor(major);
}
void Student::Print(){
    Career::Print();
    cout<<"is a Student with "<<GetPassyear()<<" passed year of "<<GetMajor()<<" major at "<<GetNameSchool()<<" school";
}


//pupil definition
Pupil::Pupil(){
    SetGrade(0);
    SetNameSchool("");
}
Pupil::Pupil(const string name,const string school){
    SetGrade(0);
    SetNameSchool(school);
    SetName(name);
}
Pupil::~Pupil(){
}

//Setter
void Pupil::SetGrade(int year){
    Grade=year;
}
void Pupil::SetNameSchool(string school){
    NameSchool=school;
}
void Pupil::SetInfo(){
    Career::SetInfo();
    cout<<"Input:";
    cout<<"Grade : ";
    int Grade;
    cin>>Grade;
    SetGrade(Grade);
    cout<<"School name: ";
    string nameschool;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(cin,nameschool);
    SetNameSchool(nameschool);
}
void Pupil::Print(){
    Career::Print();
    cout<<"is a Pupil at "<<GetGrade()<<" grade in "<<GetNameSchool()<<" school";
}

//Worker definition
Worker::Worker(){
    SetExpYear(0);
    SetMajor("");
}
Worker::Worker(int exp,const string major){
    SetExpYear(exp);
    SetMajor(major);
}
Worker::~Worker(){
}
//Setter
void Worker::SetExpYear(int year){
    ExpYear=year;
}
void Worker::SetMajor(string major){
    Major=major;
}
void Worker::SetInfo(){
    Career::SetInfo();
    cout<<"Input:";
    cout<<"Experience Year in Worker: ";
    int exp;
    cin>>exp;
    SetExpYear(exp);
    cout<<"Major: ";
    string major;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(cin,major);
    SetMajor(major);
}
void Worker::Print(){
    Career::Print();
    cout<<" is a Worker with "<<GetExpYear()<<" in "<<GetMajor()<<" major.";
}


//Actor definition
Actor::Actor(){
    SetExpYear(0);
    SetMajor("");
}
Actor::Actor(int exp,const string major){
    SetExpYear(exp);
    SetMajor(major);
}
Actor::~Actor(){
}
//Setter
void Actor::SetExpYear(int year){
    ExpYear=year;
}
void Actor::SetMajor(string major){
    Major=major;
}
void Actor::SetPopularFilms(const vector<string>& films){
    PopularFilms.resize(0);
    for(int i=0;i<films.size();i++){
        PopularFilms.push_back(films[i]);
    }
}
void Actor::SetInfo(){
    Career::SetInfo();
    cout<<"Input:";
    cout<<"Experience Year in Actor: ";
    int exp;
    cin>>exp;
    SetExpYear(exp);
    cout<<"Major: ";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string major;
    getline(cin,major);
    cout<<major<<endl;
    SetMajor(major);
    vector<string> Hits;
    Hits.resize(0);
    string film;
    while(1){
        cout<<"Popular Film: ";
        getline(cin,film);
        Hits.push_back(film);
        cout<<"Next Film(y/n): ";
        char check;
        cin>>check;
        if(check=='n'||check=='N'){
            break;
        }
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }
    Hits.shrink_to_fit();
    SetPopularFilms(Hits);
}
void Actor::Print(){
    Career::Print();
    cout<<" is a Actor with "<<GetExpYear()<<" years in "<<GetMajor()<<" major.";
    cout<<"\nPopular films: \n";
    vector<string> hits;
    hits=GetPopularFilms();
    for(int i=0;i<hits.size();i++){
        cout<<"\t"<<hits[i]<<endl;
    }
}


//Singer definition
Singer::Singer(){
    SetExpYear(0);
}
Singer::Singer(int exp){
    SetExpYear(exp);
}
Singer::~Singer(){
}
//Setter
void Singer::SetExpYear(int year){
    ExpYear=year;
}
void Singer::SetPopularHitSongs(const vector<string>& HitSongs){
    PopularHitSongs.resize(0);
    for(int i=0;i<HitSongs.size();i++){
        PopularHitSongs.push_back(HitSongs[i]);
    }
}
void Singer::SetInfo(){
    Career::SetInfo();
    cout<<"Input:";
    cout<<"Experience Year in Singer: ";
    int exp;
    cin>>exp;
    SetExpYear(exp);
    vector<string> Hits;
    Hits.resize(0);
    string song;
    while(1){
        cout<<"Hit Song: ";
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        getline(cin,song);
        Hits.push_back(song);
        cout<<"Next Song(y/n): ";
        char check;
        cin>>check;
        if(check=='n'||check=='N'){
            break;
        }
    }
    Hits.shrink_to_fit();
    SetPopularHitSongs(Hits);
}
void Singer::Print(){
    Career::Print();
    cout<<" is a Singer with "<<GetExpYear()<<" years experiences\n";
    cout<<"Popular hits song: ";
    vector<string> hits;
    hits=GetPopularHitSongs();
    cout<<endl;
    for(int i=0;i<hits.size();i++){
        cout<<"\t-"<<hits[i]<<endl;
    }
}