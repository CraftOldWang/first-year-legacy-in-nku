////一般比较少用到多继承
//
//#include<iostream>
//using namespace std;
//
//class Animal
//{
//	int m_age;
//};
//
//class Sheep :virtual public Animal
//{
//	
//};
//
//
//class Tuo :virtual public Animal
//{
//
//};
//
//
//class SheepTuo:public Sheep, public Tuo
//{
//
//};
//
//
//int main()
//{
//	cout << sizeof(Animal) << endl
//		<< sizeof(Sheep) << endl
//		<< sizeof(Tuo) << endl
//		<< sizeof(SheepTuo) << endl;
//	int a = 10;
//	int* p = &a;
//	cout << sizeof(p) << endl;
//
//	return 0;
//}