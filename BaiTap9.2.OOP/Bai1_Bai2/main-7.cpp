// 
//Nhóm:
//Tên tv 1 : Trần Vĩnh Tuân ,MASV: 20522127
//Tên tv 2 : Lê Viết Tài Mẫn ,MASV:20521593
//Tên tv 3 : Đỗ Quang Thắng ,MASV: 20521893
//Tên tv 4 : Dương Đỗ Khoa ,MASV: 20521465
//Tên tv 5 : Hoàng Thanh Lâm ,MASV: 20521513


#include "TruongDaiHoc.hpp"
#include "HeDaiHoc.hpp"
#include "HeCaoDang.hpp"
#include <iostream>


int main(int argc, const char * argv[]) {
    
// Cau 1
    int n,m;
    cout << "Nhap so luong sinh vien he dai hoc: ";
    cin >> n; cout << endl;
    HeDaiHoc *dh = new HeDaiHoc[n];
    

    for(int i = 0; i < n; i++)
    {
        cout << "\nSinh vien thu " << i + 1 << " :" << endl;
        dh[i].nhap();
    }
    
    cout << "Nhap so luong sinh vien he cao dang: ";
    cin >> m; cout << endl;
    HeCaoDang *cd = new HeCaoDang[m];

    for(int i = 0; i < m; i++)
    {
        cout << "\nSinh vien thu " << i + 1 << " :" << endl;
        cd[i].nhap();
    }
    
 // Cau 2
    for(int i = 0; i < n; i++)
    {
        dh[i].xetTotNghiep();
    }
    for(int i = 0; i < m; i++)
    {
        cd[i].xetTotNghiep();
    }
    TruongDaiHoc A;
    int count = A.getSoSvTotNghiep();
    cout << "So sinh vien du dieu kien tot nghiep: " << count << endl;
    
// cau 3
// tim sinh vien he dai hoc diem cao nhat
    cout << endl;
    HeDaiHoc max1 = dh[0];
    for(int i = 1; i < n; i++)
    {
        if(dh[i].getDiemTrungBinh() > max1.getDiemTrungBinh())
            max1 = dh[i];
    }
    
    HeCaoDang max2 = cd[0];
    for(int i = 1; i < m; i++)
    {
        if(cd[i].getDiemTrungBinh() > max2.getDiemTrungBinh())
            max2 = cd[i];
    }
    
    cout << "Sinh vien he dai hoc cao diem nhat: \n";
    max1.xuat();
    
    cout << endl;
    cout << "Sinh vien he cao dang cao diem nhat: \n";
    max2.xuat();
    
    return 0;
}
