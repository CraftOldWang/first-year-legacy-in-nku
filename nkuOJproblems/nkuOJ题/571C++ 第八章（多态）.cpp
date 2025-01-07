//#include<iostream>
//using namespace std;
// 
//class Distance
//{
//public:
//	virtual void printdistance() = 0;
//
//
//
//	int x1;
//	int y1;
//	int x2;
//	int y2;
//
//};
//
//class ManhatonDistance:public Distance
//{
//public:
//	ManhatonDistance(int x1, int y1,int x2,int y2)
//	{
//		this->x1 = x1;
//		this->y1 = y1;
//		this->x2 = x2;
//		this->y2 = y2;
//	}
//
//
//	void printdistance()
//	{
//		cout << abs(x1 - x2) + abs(y1 - y2) << " ";
//	}
//
//
//
//};
//
//class EuclideanDistance:public Distance
//{
//public:
//	EuclideanDistance(int x1, int y1, int x2, int y2)
//	{
//		this->x1 = x1;
//		this->y1 = y1;
//		this->x2 = x2;
//		this->y2 = y2;
//	}
//
//
//	void printdistance()
//	{
//		cout << (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) <<" ";
//	}
//
//};
//
//
//int main()
//{
//	int x1;
//	int y1;
//	int x2;
//	int y2;
//
//	cin >> x1 >> y1 >> x2 >> y2;
//
//	
//	Distance* p1 =new  ManhatonDistance(x1, y1, x2, y2);
//	p1->printdistance();
//	//用完要记得释放内存(是ManhatonDistance(x1, y1, x2, y2)占用的内存)
//	delete p1;
//
//	p1 = new EuclideanDistance(x1, y1, x2, y2);
//	p1->printdistance();
//	delete p1;
//
//
//
//
//
//
//
//	return 0;
//}