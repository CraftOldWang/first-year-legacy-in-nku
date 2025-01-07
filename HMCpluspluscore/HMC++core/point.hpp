//弄得有点怪,我不太知道hpp
#include"point.h"


void point::setX(int x)
{
	m_x = x;
}
int point::getX()const
{
	return m_x;
}

void point::setY(int y)
{
	m_y = y;
}
int point::getY()const
{
	return m_y;
}

int point::distancesquare(const point& a)
{
	return pow(a.m_x - m_x, 2) + pow(a.m_y - m_y, 2);
}

