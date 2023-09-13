#ifndef PHANSO_H_INCLUDED
#define PHANSO_H_INCLUDED

class PhanSo
{
    private:
        int Tu, Mau;
    public:
        PhanSo();
        void set(int t, int m);
        void Nhap();
        void Xuat();
        PhanSo Tong(PhanSo );
        PhanSo Hieu(PhanSo );
        PhanSo Tich(PhanSo );
        PhanSo Thuong(PhanSo );
        ~PhanSo();
};


#endif // PHANSO_H_INCLUDED
