#pragma once
// 
//Nhóm:
//Tên tv 1 : Trần Vĩnh Tuân ,MASV: 20522127
//Tên tv 2 : Lê Viết Tài Mẫn ,MASV:20521593
//Tên tv 3 : Đỗ Quang Thắng ,MASV: 20521893
//Tên tv 4 : Dương Đỗ Khoa ,MASV: 20521465
//Tên tv 5 : Hoàng Thanh Lâm ,MASV: 20521513
#ifndef zoo
#define zoo
#include <iostream>
using namespace std;

class date
{
    int ngay;
    int thang;
    int nam;
public:
    void set_Ngay(int a);
    void set_Thang(int a);
    void set_Nam(int a);
    int get_Ngay();
    int get_Thang();
    int get_Nam();

};

class zooAnimal
{
    char Name[20];
    int CageNumber;
    date Date;
    float Weight;
public :
    zooAnimal();
    zooAnimal(const char name[], int cagenumber, date A, float weight);
    ~zooAnimal();
    void setWeight(float a , date currentDate);
    char* get_Name();
    float  get_Weight();
    int countDateWeight(date currentDate);
    friend class Cage;

};

class Cage
{
    static int count;
public:
    void set_CageNumber(zooAnimal &a);
    
    void xuat_cagenumber(zooAnimal a);
    // hàm bạn của Cage, trả về CageNumber, gọi tham chiếu
   friend int return_numbercage(Cage a);
};


#endif