//Ū���е��,�Ҳ�̫֪��hpp

#include"point.h"
#include"circle.h"



void circle::setradius(int r)
{
	radius = r;
}
int circle::getradius()
{
	return radius;
}

void circle::setcenter(const point& x)
{
	center = x;
}
point circle::getcenter()
{
	return center;
}

void circle::ispointincircle(const point& p)
{
	if (center.distancesquare(p) < (radius * radius))
	{
		cout << "����Բ����" << endl;
	}
	else if (center.distancesquare(p) == (radius * radius))
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}
