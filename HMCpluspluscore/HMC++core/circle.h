#pragma once   //��ֹ�ظ�����  ��main.cpp�� ǰ���л�������circle.h��
// ��circle.h�л��ᱻ����һ�Σ��������������.cpp�ļ�������֮��
//����.cpp������һ��cpp�ļ�����ô��ʱ�ͻ��������#include "circle.h"
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