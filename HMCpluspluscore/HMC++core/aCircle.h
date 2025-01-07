#pragma once
#include<iostream>
#include"aPoint.h"

using namespace std;

class Circle
{
public:
	void setradius(int r);
	int getradius();
	void setcenter(const Point& x);
	Point getcenter();
	void ispointincircle(const Point& p);
	
private:
	int radius;
	//另一个类的对象作为本类的成员
	Point center;
};



