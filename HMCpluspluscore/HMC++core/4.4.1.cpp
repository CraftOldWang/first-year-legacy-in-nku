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
//		this->m_SittingRoom = "����";
//		this->m_BedRoom = "����";
//	}
//
//
//public:
//	string m_SittingRoom; //����
//
//private:
//	string m_BedRoom; //����
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
//	cout << "�û������ڷ��ʣ� " << building->m_SittingRoom << endl;
//	cout << "�û������ڷ��ʣ� " << building->m_BedRoom << endl;
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
