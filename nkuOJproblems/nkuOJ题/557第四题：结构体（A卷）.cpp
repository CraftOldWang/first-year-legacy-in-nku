//��Ŀ����
//��ʵ��һ���������������ṹ��point���ṹ���Ա����x�ᡢy������x��y��
//
//ʵ��һ��ֱ�߽ṹ��line���ṹ���Ա����ֱ��������������� point a��point b ����Ҫ��������������ֱ�ߵ��ĸ������꣬���ж�����ֱ���Ƿ�ƽ�У���ƽ�������True�������������False������Ҫ��ȷ���ǣ�������ֱ���ص��������
//
//ʵ��һ�����νṹ��rect���ṹ���Ա�������½Ǻ����Ͻǵ����������� point a��point b ����Ҫ�����������������ε��ĸ������꣬���ж����������Ƿ��ص������ص�������������ص������γɾ��ε���������������False������Ҫ��ȷ���ǣ����εı��������ᴹֱ / ƽ�У�ֻ�ڽǻ�߽Ӵ����������β������ص���
//
//ע�⣬�������ʹ�ýṹ��ʵ�֣��������֡�
//
//����
//x1 y1 x2 y2
//x3 y3 x4 y4
//x5 y5 x6 y6
//x7 y7 x8 y8
//����x1 y1 x2 y2Ϊ��һ��ֱ�ߵĵ����꣬x3 y3 x4 y4Ϊ�ڶ���ֱ�ߵĵ����꣬��Ϊ������
//
//����x5 y5 x6 y6Ϊ��һ�����εĵ����꣬x7 y7 x8 y8Ϊ�ڶ������εĵ����꣬��Ϊ������
//
//���
//True / False
//area / False
//��������
//0 0 0 1
//1 0 1 1
//0 0 2 2
//1 1 3 3
//�������
//True
//1

//��������,�ƺ������������������ж϶���������������һ����Ȼ��һ��if
//��������˼����ά(������1)������,Ȼ��������ά������һά��
//����˵��˼���ٶ���


//#include<iostream>
//using namespace std;
//
//
//struct point
//{
//	int x;
//	int y;
//
//
//};
//
//struct line
//{
//	void inputline()
//	{
//		cin >> a1.x >> a1.y
//			>> a2.x >> a2.y;
//	}
//
//
//	point a1;
//	point a2;
//
//};
//
//struct rect
//{
//	void inputrect()
//	{
//		cin >> ldown.x >> ldown.y
//			>> rup.x >> rup.y;
//	}
//
//	void findldonwandrup()
//	{
//		//ldown�Ƚϴ�ͻ�һ��
//		if (ldown.x > rup.x && ldown.y > rup.y)
//		{
//			point temp = ldown;
//			ldown = rup;
//			rup = temp;
//		}
//	}
//
//
//	//���ﻹ��֪���ĸ������½ǣ��ĸ����Ͻǡ�
//	//oh..�����㣬��һ��˭��x��ͺ�
//	point ldown;
//	point rup;
//};
//
//int minof(int a, int b)
//{
//	if (a > b)
//	{
//		return b;
//	}
//	else
//	{
//		return a;
//	}
//
//}
//
//int maxof(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//
//
//}
//
////ƽ��True ����ƽ��False
//void isparrallel(line a, line b)
//{
//	double k1 = 0, k2 = 0;
//
//	if (a.a1.x == a.a2.x)
//	{
//		if (b.a1.x == b.a2.x)
//		{
//			cout << "True" << endl;
//		}
//		else
//		{
//			cout << "False" << endl;
//		}
//	}
//	else if (b.a1.x == b.a2.x)
//	{
//		if (a.a1.x == a.a2.x)
//		{
//			cout << "True" << endl;
//		}
//		else
//		{
//			cout << "False" << endl;
//		}
//	}
//	else
//	{
//		k1 = (a.a1.y - a.a2.y) / (a.a1.x - a.a2.x);
//		k2 = (b.a1.y - b.a2.y) / (b.a1.x - b.a2.x);
//		if (k1 == k2)
//		{
//			cout << "True" << endl;
//		}
//		else
//		{
//			cout << "False" << endl;
//		}
//	}
//
//}
//
////1 is ,0not
//bool isAinrecB(point a, rect b)
//{
//	if (a.x > b.ldown.x
//		&& a.y > b.ldown.y
//		&& a.x < b.rup.x
//		&& a.y < b.rup.y)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//point xyminpoint(point a, point b)
//{
//	point c;
//	c.x = minof(a.x, b.x);
//	c.y = minof(a.y, b.y);
//	return c;
//}
//
//point xymaxpoint(point a, point b)
//{
//	point c;
//	c.x = maxof(a.x, b.x);
//	c.y = maxof(a.y, b.y);
//	return c;
//}
//
//void isdieandarea(rect re1, rect re2)
//{
//	//�ص����ڣ���,��re2��re1��
//	//��
//	if (isAinrecB(re2.ldown, re1) == 1)
//	{
//		if (isAinrecB(re2.rup, re1) == 1)
//		{
//			cout << (re2.rup.x - re2.ldown.x) * (re2.rup.y - re2.ldown.y);
//		}
//		else
//		{
//			int area = 0;
//			point timesrup;
//			timesrup.x = minof(re1.rup.x, re2.rup.x);
//			timesrup.y = minof(re1.rup.y, re2.rup.y);
//			area = (timesrup.x - re2.ldown.x) * (timesrup.y - re2.ldown.y);
//			cout << area;
//		}
//	}
//	else if (isAinrecB(re2.rup, re1) == 1)
//	{
//		if (isAinrecB(re2.ldown, re1) == 1)
//		{
//			cout << (re2.rup.x - re2.ldown.x) * (re2.rup.y - re2.ldown.y);
//		}
//		else
//		{
//			int area = 0;
//			point timesldown;
//			timesldown.x = maxof(re1.ldown.x, re2.ldown.x);
//			timesldown.y = maxof(re1.ldown.y, re2.ldown.y);
//			area = (re2.rup.x - timesldown.x) * (re2.rup.y - timesldown.y);
//			cout << area;
//		}
//	}
//	//��
//	else if (re2.ldown.x == re1.rup.x || re2.ldown.y == re1.rup.y)
//	{
//		cout << "False";
//	}
//	//�Ѿ��ų������ұ��ϱ��Լ�����������
//	else if (re2.ldown.x == re1.ldown.x || re2.ldown.y == re1.ldown.y)
//	{
//		point fortimes = xyminpoint(re2.rup, re1.rup);
//		int area = (fortimes.x - re2.ldown.x) * (fortimes.y - re2.ldown.y);
//		cout << area;
//	}
//	else if (re2.rup.x == re1.ldown.x || re2.rup.y == re1.ldown.y)
//	{
//		cout << "False";
//	}
//	else if (re2.rup.x == re1.rup.x || re2.rup.y == re1.rup.y)
//	{
//		point fortimes = xymaxpoint(re2.ldown, re1.ldown);
//		int area = (re2.rup.x - fortimes.x) * (re2.rup.y - fortimes.y);
//		cout << area;
//	}
//
//
//}
//
//int main()
//{
//	line L1;
//	line L2;
//	rect re1;
//	rect re2;
//
//	L1.inputline();
//	L2.inputline();
//	re1.inputrect();
//	re2.inputrect();
//
//	isparrallel(L1, L2);
//
//
//	re1.findldonwandrup();
//	re2.findldonwandrup();
//
//	isdieandarea(re1, re2);
//
//
//
//	return 0;
//}