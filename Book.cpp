#include <iostream>
#include <string>
using namespace std;

class Book{
private:
    string name;
    string publisher;
    int year;
    int pages;
    int price;
public:
    string getName() {
        return name;
    }
    string getPublisher() {
        return publisher;
    }
    int getYear() {
        return year;
    }
    int getPages() {
        return pages;
    }
    double getPrice() {
        return price;
    }
    Book(){}
    virtual void input(){
        cout<<"Nhap ten sach: ";
        cin.ignore();
        getline(cin, name);
        cout<<"Nhap ten nha xuat ban: ";
        getline(cin, publisher);
        cout<<"Nhap nam xuat ban: ";
        cin>>year;
        cout<<"Nhap so trang: ";
        cin>>pages;
        cout<<"Nhap gia ban: ";
        cin>>price;
    }
    virtual void output(){
        cout<<"Ten sach: "<<name<<endl;
        cout<<"Nha xuat ban: "<<publisher<<endl;
        cout<<"Nam xuat ban: "<<year<<endl;
        cout<<"So trang: "<<pages<<endl;
        cout<<"Gia ban: "<<price<<endl;
    }
};

class Textbook:public Book{
private:
    int grade;
public:
    Textbook(){}
    virtual void input(){
        Book::input();
        cout<<"Nhap khoi lop: ";
        cin>>grade;
    }
    virtual void output(){
        Book::output();
        cout<<"Khoi lop: "<<grade<<endl;
    }
};

class Novel:public Book{
private:
    string kind;
public:
    Novel(){}
    virtual void input(){
        Book::input();
        cout<<"Nhap the loai: ";
        cin.ignore();
        getline(cin, kind);
    }
    virtual void output(){
        Book::output();
        cout<<"The loai: "<<kind<<endl;
    }
};

class Magazine:public Book{
private:
    int period;
public:
    Magazine(){}
    virtual void input(){
        Book::input();
        cout<<"Nhap dinh ky xuat ban: ";
        cin>>period;
    }
    virtual void output(){
        Book::output();
        cout<<"Dinh ky xuat ban: "<<period<<endl;
    }
};

class Man
{
private:
    int n;
    Book **a;
public:
    Man(){
        n=0;
    }
    void input(){
        cout<<"Nhap so sach: ";
        cin>>n;
        a=new Book *[n];
        for(int i=0; i<n; i++){
            int x;
            cout<<"Vui long chon loai sach can nhap!"<<endl;
            cout<<"Chon 1 de nhap sach giao khoa."<<endl;
            cout<<"Chon 2 de nhap tieu thuyet."<<endl;
            cout<<"Chon 3 de nhap tap chi."<<endl;
            cout<<"Vui long nhap: ";
            cin>>x;
            switch(x){
                case 1:{
                    a[i]=new Textbook(); 
                    a[i]->input();
                    break;
                }
                case 2:{
                    a[i]=new Novel(); 
                    a[i]->input();
                    break;
                }
                case 3:{
                    a[i]=new Magazine(); 
                    a[i]->input();
                    break;
                }
            }
        }
    }
    void output(){
        for(int i=0; i<n; i++){
            a[i]->output();
        }
    }
};

int main(){
    Man a;
    a.input();
    a.output();
}