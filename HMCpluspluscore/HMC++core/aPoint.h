#pragma once//防止多次包含用的
#include<iostream>

using namespace std;

//头文件里写声明,源文件里写实现
class Point
{
public:
	void setX(int x);
	int getX()const;
	void setY(int y);
	int getY()const;
	int distancesquare(const Point& a);

private:
	int m_x;
	int m_y;
};



