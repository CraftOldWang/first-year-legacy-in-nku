#pragma once
#include <iostream>
class Point
{
public:
	void setXY(double x, double y);
	double getX();
	double getY();
private:
	double m_x;
	double m_y;
};