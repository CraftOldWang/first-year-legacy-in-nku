//题目描述
//请实现一个基础类型坐标点结构体point，结构体成员包含x轴、y轴坐标x、y。
//
//实现一个直线结构体line，结构体成员包含直线上两个点的坐标 point a、point b 。现要求依次输入两个直线的四个点坐标，请判断两个直线是否平行，若平行输出“True”，否则输出“False”。需要明确的是，不考虑直线重叠的情况。
//
//实现一个矩形结构体rect，结构体成员包含左下角和右上角的两个点坐标 point a、point b 。现要求依次输入两个矩形的四个点坐标，请判断两个矩形是否重叠，若重叠输出两个矩形重叠部分形成矩形的面积，否则输出“False”。需要明确的是，矩形的边与坐标轴垂直 / 平行，只在角或边接触的两个矩形不构成重叠。
//
//注意，本题必须使用结构体实现，否则记零分。
//
//输入
//x1 y1 x2 y2
//x3 y3 x4 y4
//x5 y5 x6 y6
//x7 y7 x8 y8
//其中x1 y1 x2 y2为第一个直线的点坐标，x3 y3 x4 y4为第二个直线的点坐标，均为整数。
//
//其中x5 y5 x6 y6为第一个矩形的点坐标，x7 y7 x8 y8为第二个矩形的点坐标，均为整数。
//
//输出
//True / False
//area / False
//样例输入
//0 0 0 1
//1 0 1 1
//0 0 2 2
//1 1 3 3
//样例输出
//True
//1

//我做错了,似乎可以用坐标运算来判断而不是像我这样分一堆类然后一堆if
//核心是先思考低维(这里是1)的问题,然后把这个二维问题拆成一维的
//就是说先思考再动手


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
//		//ldown比较大就换一下
//		if (ldown.x > rup.x && ldown.y > rup.y)
//		{
//			point temp = ldown;
//			ldown = rup;
//			rup = temp;
//		}
//	}
//
//
//	//这里还不知道哪个是左下角，哪个右上角。
//	//oh..两个点，看一下谁的x大就好
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
////平行True ，不平行False
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
//	//重叠分内，边,按re2入re1分
//	//内
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
//	//边
//	else if (re2.ldown.x == re1.rup.x || re2.ldown.y == re1.rup.y)
//	{
//		cout << "False";
//	}
//	//已经排除掉了右边上边以及那三个顶点
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