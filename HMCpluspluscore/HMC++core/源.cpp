//#include <iostream>
//#include <math.h>
//#include "point.h"
//#include "circle.h"
//using namespace std;
//
//
//void isinCircle(Circle& c, Point& p)  //减少内存浪费
//{   // 类的成员函数如果返回一个类，那么还可以继续用点来向下调用成员函数
//	double dist = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	double rDist = c.getR() * c.getR();
//	if (dist == rDist)
//	{
//		cout << "on circle" << endl;
//	}
//	else if (dist > rDist)
//	{
//		cout << "out" << endl;
//	}
//	else
//	{
//		cout << "in" << endl;
//	}
//
//}
//int main(int argc, char* argv[])
//{
//	std::cout << "Hello world!" << std::endl;
//	Circle c1;
//	c1.setCenter(10, 0);
//	c1.setR(10);
//
//	Point p;
//	p.setXY(10, 1);
//
//	isinCircle(c1, p);
//}