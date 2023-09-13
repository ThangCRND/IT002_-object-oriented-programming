#include<iostream>
#include"Book.h"
#include<vector>
using namespace std;

void Input(vector<Book*> &List)
{
    int chon;
    while (true)
    {
    cout << endl;
    cout <<"===========Demo=========="<<endl;
    cout<<"Chon the loai sach: \n";
    cout<<"\t1.Input Textbook.\n";
    cout<<"\t2.Input Novel.\n";
    cout<<"\t3.Input Magazine.\n";
    cout<<"\t4.Manage Book menu.\n";
    cout<<"==========================="<<endl;

    switch(chon)
     {
    case 1:
        List.push_back(new TextBook);
        List[List.size()-1]->Nhap();
        break;
    case 2:
        List.push_back(new Novel);
        List[List.size()-1]->Nhap();
        break;
    case 3:
        List.push_back(new Magazine);
        List[List.size()-1]->Nhap();
    default:
        break;
     }
    }
}
void PrintList(vector<Book*> & List)
{
    cout<<"=======Print List=======";
    for(int i=0;i<List.size();i++)
    {
        cout<<" - ";
        List[i]->Xuat();
        cout<<endl;
    }
    cout<<"===================="<<endl;
}
int main()
{
    vector<Book*> ListBook;
    ListBook.resize(0);

    while(true)
    {
    cout<<"==========Manage Book============:"<<endl;
    cout<<"\t1.Input Book information." << endl;
    cout<<"\t2.Print all list of Books."<<endl;
    cout<<"\t3.Exit." << endl;
    cout<<"================================"<<endl;

    int luachon;
    cin >> luachon;

    switch (luachon)
    {
    case 1:
        Input(ListBook);
        break;

    case 2:
        PrintList(ListBook);
        break;
    }
   }
    return 0;
}
