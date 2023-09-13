#pragma once
#include<string>
#include<vector>
#include"DMY.h"
class Career
{
private:
    string Name;
    DMY Birth;
    int Age;
public:
    //constructor and destructor
    Career();
    Career(const string name,int d,int m,int y,int age);
    Career(const string name,DMY birth,int age);
    virtual ~Career();
    //getter and setter
    string GetName(){return Name;}
    DMY GetBirth(){return Birth;}
    int GetAge(){return Age;}
    void SetName(string name);
    void SetBirth(DMY birth);
    void SetAge(int age);
    // other method
    virtual void SetInfo();
    virtual void Print();
};
class Student:public Career{
    private:
        int passYear;
        string NameSchool;
        string Major;
    public:
        //constructtor and destructor
        Student();
        Student(const string name,const string school);
        ~Student();
        //Setter
        void SetPassyear(int year);
        void SetNameSchool(string school);
        void SetMajor(string major);
        void SetInfo();
        //Getter
        int GetPassyear(){return passYear;}
        string GetNameSchool(){return NameSchool;}
        string GetMajor(){return Major;}
        void Print();
};
class Pupil:public Career{
    private:
        int Grade;
        string NameSchool;
    public:
        //constructtor and destructor
        Pupil();
        Pupil(const string name,const string school);
        ~Pupil();
        //Setter
        void SetGrade(int year);
        void SetNameSchool(string school);
        void SetInfo();
        //Getter
        int GetGrade(){return Grade;}
        string GetNameSchool(){return NameSchool;}
        void Print();
};
class Worker:public Career{
    private:
        int ExpYear;
        string Major;
    public:
        //constructtor and destructor
        Worker();
        Worker(int exp,const string major);
        ~Worker();
        //Setter
        void SetExpYear(int year);
        void SetMajor(string major);
        void SetInfo();
        //Getter
        int GetExpYear(){return ExpYear;}
        string GetMajor(){return Major;}
        void Print();
};
class Actor:public Career{
    private:
        int ExpYear;
        string Major;
        vector<string> PopularFilms;
    public:
        //constructtor and destructor
        Actor();
        Actor(int exp,const string major);
        ~Actor();
        //Setter
        void SetExpYear(int year);
        void SetMajor(string major);
        void SetPopularFilms(const vector<string> &films);
        void SetInfo();
        //Getter
        int GetExpYear(){return ExpYear;}
        string GetMajor(){return Major;}
        vector<string> GetPopularFilms(){return PopularFilms;}
        void Print();
};
class Singer:public Career{
    private:
        int ExpYear;
        vector<string> PopularHitSongs;
        
    public:
        //constructtor and destructor
        Singer();
        Singer(int exp);
        ~Singer();
        //Setter
        void SetExpYear(int year);
        void SetPopularHitSongs(const vector<string> &HitSongs);
        void SetInfo();
        //Getter
        vector<string> GetPopularHitSongs(){return PopularHitSongs;}
        int GetExpYear(){return ExpYear;}
        void Print();
};
