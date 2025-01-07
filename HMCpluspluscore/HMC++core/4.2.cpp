/////using namespace std;
//////#include<iostream>
//////
//////
//////{
//////
//////int main()
//////	int arr[199] = {};
//////	for (int i = 0; i < 199; i++)
//////	{
//////		cout << arr[i];
//////
//////	}
//////	return 0;
//////}
////
////#include<iostream>
////using namespace std;
////
////
////
////class Person
////{
////public:
////	Person()
////	{
////		cout << 111 << endl;
////	}
////	Person(const Person & p)
////	{
////		cout << "copy" << endl;
////	}
////	~Person()
////	{
////		cout << 222 << endl;
////	}
////};
////
////void test01()
////{
////	Person p;
////
////	Person p1(p);
////}
////
////int main() {
////
////	test01();
////
////	//局部变量在函数运行完成之后被释放
////	system("pause");
////
////	return 0;
////}
//
//
//#include <iostream>
//using namespace std;
//
//class person
//{
//public:
//	person()
//	{
//		cout << "default" << endl;
//
//	}
//	person(int a)
//	{
//		 m_age = a;
//		 cout << "parameter" << endl;
//	}
//	person(const person &a)
//	{
//		m_age = a.m_age;
//		cout << "const&" << endl;
//	}
//	~person()
//	{
//		cout << "~" << endl;
//	}
//public:
//	int  m_age;
//};
//
//
//void test01()
//{
//	person p1(20);
//	person p2(39);
//	cout << p1.m_age << p2.m_age << endl;
//	
//}
//
//person test02()
//{
//	person p1=10;
//	p1.m_age = 1;
//
//	cout << (int)&p1 << endl;
//	if (1)
//	{
//
//		return p1;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//void dowork(person p)
//{
//
//}
//void test03()
//{
//	person pk;
//	dowork(pk);
//	system("pause");
//}
//int main()
//{
//	//test01();
//	/*person PP (test02());
//	cout << PP.m_age << endl;*/
//	
//	test03();
//	system("pause");
//	return 0;
//}