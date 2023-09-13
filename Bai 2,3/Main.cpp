#include<iostream>
#include"DMY.h"
#include"Career.h"
#include<vector>
using namespace std;
void Input(vector<Career*> &List){
    int CatchKey;
    do{
        cout<<"\tPress 1 to input Pupil.\n";
        cout<<"\tPress 2 to input Student.\n";
        cout<<"\tPress 3 to input worker.\n";
        cout<<"\tPress 4 to input actor.\n";
        cout<<"\tPress 5 to input singer.\n";
        cout<<"\tPress 6 to back to the main menu.\n";
        while (cin>>CatchKey&&CatchKey!=1&&CatchKey!=2&&CatchKey!=3&&CatchKey!=4&&CatchKey!=5&&CatchKey!=6)
        {
            cout<<"Just Press in range 1,2,3. Again: ";
        }
        switch (CatchKey)
        {
        case 1:
            List.push_back(new Pupil);
            List.back()->SetInfo();
            break;
        case 2:
            List.push_back(new Student);
            List.back()->SetInfo();
            break;
        case 3:
            List.push_back(new Worker);
            List.back()->SetInfo();
            break;
        case 4:
            List.push_back(new Actor);
            List.back()->SetInfo();
            break;
        case 5:
            List.push_back(new Singer);
            List.back()->SetInfo();
            break;
        default:
            break;
        }
    }while(CatchKey!=6);
}
void Print(vector<Career*> &List){
    cout<<"-----Print List Career----\n";
    for(int i=0;i<List.size();i++){
        List[i]->Print();
        cout<<endl;
    }
    cout<<"--------------------------\n";
}
int main(){
    vector<Career*> ListCareer;
    ListCareer.resize(0);
    int CatchKey;
    do{
        cout<<"Manage career: \n";
        cout<<"\tPress 1 to input career information.\n";
        cout<<"\tPress 2 to print all list of career.\n";
        cout<<"\tPress 3 to exit.\n";
        while (cin>>CatchKey&&CatchKey!=1&&CatchKey!=2&&CatchKey!=3)
        {
            cout<<"Just Press in range 1,2,3. Again: ";
        }
        switch (CatchKey)
        {
        case 1:
            Input(ListCareer);
            break;
        case 2:
            Print(ListCareer);
            break;
        default:
            break;
        }
    }while(CatchKey!=3);
    for(int i=0;i<ListCareer.size();i++){
        delete ListCareer[i];
    }
    cout<<"Thanks!";
    return 0;
}

/*
1
1
Ho Xuan Ninh
24 4 2001
19
12
THPT Nguyen Duc
2
Ho Xuan
1 1 2000
20
1
UIT
Information security
3
Nguyen BA
20 9 1986
50
8
Constructor assistance
4
Huynh Tran Thanh
30 1 1989
31
10
comedian and Mc
Trang Huynh
y
Benh vien ma
n
5
Nguyen Thanh Tung
1 2 1990
30
4
Hay trao cho anh
y
Lac troi
n
6 
2
*/
