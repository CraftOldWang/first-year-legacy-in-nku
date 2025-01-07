//弄得有点怪,我不太知道hpp

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
		cout << "点在圆里面" << endl;
	}
	else if (center.distancesquare(p) == (radius * radius))
	{
		cout << "点在圆上" << endl;
	}
	else
	{
		cout << "点在圆外" << endl;
	}
}
