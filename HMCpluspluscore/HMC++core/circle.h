#pragma once   //防止重复编译  在main.cpp中 前几行会包含这个circle.h，
// 在circle.h中还会被包含一次，当程序进行所有.cpp文件的连接之后，
//所有.cpp会连成一个cpp文件，那么此时就会出现两次#include "circle.h"
#include "point.h"

class Circle
{
public:
	void setR(double R);
	void setCenter(double x, double y);
	Point getCenter();
	double getR();

private:
	Point m_Center;
	double m_r;
};