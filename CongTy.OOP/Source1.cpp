#include "Congty.h"

int main()
{
	int iNumberOfProductionEmploy, iNumberOfOfficer;
	
	cout << "Nhap so luong nhan vien van phong: ";
	cin >> iNumberOfOfficer;
	
	cout << "Nhap so luong nhan vien san xuat: ";
	cin >> iNumberOfProductionEmploy;
	cin.ignore();

	int i = 0, n = iNumberOfOfficer + iNumberOfProductionEmploy; 
	Employee *A[100];
	while (i < iNumberOfOfficer)
	{
		cout << "Nhap thong tin nhan vien van phong: " << endl;
		A[i] = new Officer;
		A[i]->Input();
		i++;
		
	}
	while (i < n)
	{
		cout << "Nhap thong tin nhan vien san xuat: " << endl;
		A[i] = new productionEmployee;
		A[i]->Input();
		i++;
	}

	for (i = 0; i < n; i++)
	{
		A[i]->Output();
	}
	
}