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
	//��һ����Ķ�����Ϊ����ĳ�Ա
	Point center;
};



