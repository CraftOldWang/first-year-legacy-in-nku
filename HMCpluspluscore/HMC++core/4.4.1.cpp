//#include<iostream>
//using namespace std;
//
//class Building
//{
//	friend void goodGay(Building* building);
//	friend void badGay(Building& building);
//public:
//
//	Building()
//	{
//		this->m_SittingRoom = "客厅";
//		this->m_BedRoom = "卧室";
//	}
//
//
//public:
//	string m_SittingRoom; //客厅
//
//private:
//	string m_BedRoom; //卧室
//};
//
//void badGay(Building& building)
//{
//	cout << building.m_SittingRoom << endl;
//	cout << building.m_BedRoom;
//}
//
//void goodGay(Building* building)
//{
//	cout << "好基友正在访问： " << building->m_SittingRoom << endl;
//	cout << "好基友正在访问： " << building->m_BedRoom << endl;
//}
//
//
//void test01()
//{
//	Building b;
//	goodGay(&b);
//	badGay(b);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}
//
