#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>

using namespace std;

#pragma warning(disable : 4996).
class team
{
	char name[20]{};
	int member{};// max is 4 

	char name1[20]{};
	char name2[20]{};
	char name3[20]{};
	char name4[20]{};
public:
	team() {}
	team(const char a[20], int b, const char m1[20], const char m2[20] = NULL, const char m3[20] = NULL, const char m4[20] = NULL)
	{
		strcpy(name, a);
		strcpy(name1, m1);
		strcpy(name2, m2);
		strcpy(name3, m3);
		strcpy(name4, m4);
		member = b;

	}
	~team() {}

	void inputATeam();
	long numberofTeams();
	void printTeams();
};

void team::printTeams()
{
	cout << "Ten doi la: " << name << endl;
	cout << "So thanh vien la: " << member << endl;
	for (int i = 1; i <= member; i++)
	{
		cout << "Ten thanh vien thu " << i << " la: ";

		switch (i)
		{
		case 1:
		{
			cout << name1 << endl;
			break;
		}
		case 2:
		{
			cout << name2 << endl;;
			break;
		}
		case 3:
		{
			cout << name3 << endl;

			break;
		}
		case 4:
		{
			cout << name4 << endl;
			break;
		}
		}
	}
}

void team::inputATeam()
{
	cout << "Vui long nhap vao ten doi: ";
	cin.getline(name, 30);

	cout << "Nhap vao so luong thanh vien cua doi: ";
	cin >> member;

	cin.ignore();

	for (int i = 1; i <= member; i++)
	{
		cout << "Ten thanh vien thu " << i << " la: ";

		switch (i)
		{
		case 1:
		{
			cin.getline(name1, 30);
			break;
		}
		case 2: cin.getline(name2, 30);
			break;
		case 3: cin.getline(name3, 30);
			break;
		case 4: cin.getline(name4, 30);
			break;
		}
	}
}

class CTF
{
	char name[20]{};
	char date[20]{};
	char format[20]{};
	char host[20]{};
	vector<team>A;
	char rules[100]{};
	short one_quarter{};
	int number_OfTeams{};
public:
	CTF() {}
	CTF(const char a[20], const char b[20], const char c[20], const char d[20], const char e[20], short one_quarter)
	{
		strcpy(name, a);
		strcpy(date, b);
		strcpy(format, c);
		strcpy(host, d);
		strcpy(rules, e);
		this->one_quarter = one_quarter;
	}

	void input();
	void increseTeams(team B);
	void increseAListOfTeams(team A[], int n);
	void print_ListOfTeams();

	void printtop3InAQuarTer(vector<CTF>& A, vector<CTF>& B, vector<CTF>& C, vector<CTF>& D);
	void defineWhichCompetitionInOneQuarter(vector<CTF>& A, vector<CTF>& B, vector<CTF>& C, vector<CTF>& D, CTF topush);

	void set_numberOfTeams();
	int get_numberOfTeams();
	char* get_name();
};

char* CTF::get_name()
{
	return name;
}

void CTF::printtop3InAQuarTer(vector<CTF>& A, vector<CTF>& B, vector<CTF>& C, vector<CTF>& D)
{
	cout << "==================================Danh sach cac cuoc thi co sl nhieu nhat trong quy===============================" << endl;
	for (int i = 1; i <= 4; i++)
	{
		cout << "Quy " << i << " gom : " << endl;
		switch (i)
		{
		case 1:
			for (int i = 0; i < A.size() && i < 3; i++)
			{
				cout << "TOP " << i + 1 << " :" << A[i].get_name() << endl;
			}
			break;
		case 2:
			for (int i = 0; i < B.size() && i < 3; i++)
			{
				cout << "TOP " << i + 1 << " :" << B[i].get_name() << endl;
			}
			break;
		case 3:
			for (int i = 0; i < C.size() && i < 3; i++)
			{
				cout << "TOP " << i + 1 << " :" << C[i].get_name() << endl;
			}
			break;
		case 4:
			for (int i = 0; i < A.size() && i < 3; i++)
			{
				cout << "TOP " << i + 1 << " :" << D[i].get_name() << endl;
			}
			break;
		}
	}
}

void CTF::defineWhichCompetitionInOneQuarter(vector<CTF>& A, vector<CTF>& B, vector<CTF>& C, vector<CTF>& D, CTF topush)
{
	switch (one_quarter)
	{
	case 1:
	{
		A.push_back(topush);
		break;
	}
	case 2:
	{
		B.push_back(topush);
		break;
	}
	case 3:
	{
		C.push_back(topush);
		break;
	}
	case 4:
	{
		D.push_back(topush);
		break;
	}
	}
}

int CTF::get_numberOfTeams()
{
	return number_OfTeams;
}

void CTF::set_numberOfTeams()
{
	number_OfTeams = A.size();
}

void CTF::print_ListOfTeams()
{
	cout << "====================Danh sach cac doi thi=======================" << endl;
	for (int i = 0; i < number_OfTeams; i++)
	{
		A[i].printTeams();
	}
}

void CTF::input()
{
	cout << "Vui long cho biet thong tin cuoc thi: " << endl;

	cout << "Ten cuoc thi: ";
	cin.getline(name, 20);

	cout << "Ngay thi: ";
	cin.getline(date, 20);

	cout << "Hinh thuc thi: ";
	cin.getline(format, 20);

	cout << "Don vi to chuc: ";
	cin.getline(host, 20);

	cout << "Quy cua cuoc thi: ";
	cin >> one_quarter;

	cin.ignore();


}

void CTF::increseTeams(team B)
{
	A.push_back(B);
}


void CTF::increseAListOfTeams(team B[], int n)
{
	for (int i = 0; i < n; i++)
	{
		A.push_back(B[i]);

	}
}

void inputAListOfTeams(team A[], int& n)
{
	cout << "Nhap vao so luong doi: ";
	cin >> n;
	cin.ignore();
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		team s;
		s.inputATeam();
		A[i] = s;
	}
}

bool comp(CTF A, CTF B)
{
	return A.get_numberOfTeams() > B.get_numberOfTeams();
}

void arrangetop3InQuarter(vector <CTF>& A)
{
	sort(A.begin(), A.end(), comp);
}

int main()
{
	vector<CTF> quy1;
	vector<CTF> quy2;
	vector<CTF> quy3;
	vector<CTF> quy4;

	CTF B;
	CTF C("2332", "FEEFEF", "2r32r23r", "EFEFEF", "#fewfwfwef", 2);
	CTF D("BUTILUKI", "EFEFEFEF", "EFEFEFE", "FEFEFEFW", "EFEFEFX", 2);

	team* a;
	a = new team;

	team* A;
	A = new team[100];

	int n;

	inputAListOfTeams(A, n);

	B.input();// mac dinh chua co doi nao 

	B.increseTeams(*a);
	B.increseAListOfTeams(A, n);
	B.set_numberOfTeams();

	B.print_ListOfTeams();


	C.increseTeams(*a);
	C.increseTeams(*a);
	C.increseAListOfTeams(A, n);
	C.set_numberOfTeams();

	D.increseTeams(*a);
	D.increseAListOfTeams(A, n);
	D.increseAListOfTeams(A, n);
	D.set_numberOfTeams();

	B.defineWhichCompetitionInOneQuarter(quy1, quy2, quy3, quy4, B);
	C.defineWhichCompetitionInOneQuarter(quy1, quy2, quy3, quy4, C);
	D.defineWhichCompetitionInOneQuarter(quy1, quy2, quy3, quy4, D);
	arrangetop3InQuarter(quy2);

	CTF K;
	K.printtop3InAQuarTer(quy1, quy2, quy3, quy4);




}

