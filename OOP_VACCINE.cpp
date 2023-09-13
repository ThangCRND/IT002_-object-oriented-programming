
#include <string.h>
#include<iostream>

using namespace std;


class Vaccine
{
private:
    char Ten[50]{};
    char NhaSanXuat[50]{};
    int  NamSX{};
    char NhaPhanPhoi[50]{};
    char DoiTuongTiem[50]{};
public:
    Vaccine();
    Vaccine(const char ten[], const char nsx[], int namsx, const char nhaphanphoi[], const char doituong[]);
    void Nhap();
    void Xuat();
    void Mua();
    void Ban();
};
Vaccine::Vaccine() {}

Vaccine::Vaccine(const char ten[],const char nsx[], int namsx, const char nhaphanphoi[],const char doituong[])
{
    strcpy_s(Ten, ten);
    strcpy_s(NhaSanXuat, nsx);
    strcpy_s(NhaPhanPhoi, nhaphanphoi);
    strcpy_s(DoiTuongTiem, doituong);
}

void Vaccine::Nhap()
{
    cout << "Nhap ten vaccine: ";
    cin.getline(Ten,30);

    cout << "Nhap ten nha san xuat: ";
    cin.getline(NhaSanXuat,30);

    cout << "Nhap nam san xuat: ";
    cin >> NamSX;
    cin.ignore();

    cout << "Nhap ten nha phan phoi: ";
    cin.getline(NhaPhanPhoi,30);

    cout << "Nhap doi tuong tiem chung: ";
    cin.getline(DoiTuongTiem,30);
}

void Vaccine::Xuat()
{
    cout << "Ten vaccine: " << Ten << endl;
    cout << "Nha san xuat: " << NhaSanXuat << endl;
    cout << "Nam san xuat: " << NamSX << endl;
    cout << "Nha phan phoi: " << NhaPhanPhoi << endl;
    cout << "Doi tuong tiem chung: " << DoiTuongTiem << endl;
}

void Vaccine::Mua()
{
    int soluong; float giaca; char congtyban[50]; long tong;

    cout << "Cong ty ban: ";
    cin.getline(congtyban,30);

    cout << "So luong mua (lieu): ";
    cin >> soluong;

    cout << "Gia thanh/lieu (dong): ";
    cin >> giaca;
    cin.ignore();

    tong = soluong * giaca;
    cout << "Cong ty ban: " << congtyban << endl;
    Xuat();
    cout << "So luong mua (lieu): " << soluong << endl;
    cout << "Gia thanh/lieu (dong): " << giaca << endl;
    cout << "Tong tien hang (dong): " << tong << endl;
}

void Vaccine::Ban()
{
    int soluong; float giaca; char congtymua[50]; long tong;

    cout << "Cong ty/nguoi mua: ";
    cin.getline(congtymua,30);
    cout << "So luong mua (lieu): ";
    cin >> soluong;
    cout << "Gia thanh/lieu (dong): ";
    cin >> giaca;
    cin.ignore();
    tong = soluong * giaca;
    cout << "Cong ty/nguoi mua: " << congtymua << endl;
    Xuat();
    cout << "So luong ban (lieu): " << soluong << endl;
    cout << "Gia thanh/lieu (dong): " << giaca << endl;
    cout << "Tong tien hang (dong): " << tong << endl;
}

int main()
{
    Vaccine A("loaaaa", "lolaa", 2020, "uuuu", "20-22");
    A.Xuat();
    cout << endl;
}
