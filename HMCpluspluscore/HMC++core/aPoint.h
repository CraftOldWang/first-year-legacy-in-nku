#pragma once//��ֹ��ΰ����õ�
#include<iostream>

using namespace std;

//ͷ�ļ���д����,Դ�ļ���дʵ��
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



