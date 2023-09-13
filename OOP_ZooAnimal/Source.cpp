#include <iostream>
#include "zoo.h"
using namespace std;
int main()
{
	date x;
	x.set_Ngay(23);
	x.set_Thang(4);
	x.set_Nam(2004);
	date y;
	y.set_Ngay(26);
	y.set_Thang(2);
	y.set_Nam(2005);
	zooAnimal A("lulu", 32, x, 34);
	cout << A.countDateWeight(y);

}