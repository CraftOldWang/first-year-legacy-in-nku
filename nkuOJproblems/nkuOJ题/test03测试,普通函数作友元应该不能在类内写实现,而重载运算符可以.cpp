//#include<iostream>
//using namespace std;
// 
////类模板能在类内写友元,那么普通的类呢?
//
//class Person
//{
//public:
//	Person();
//	~Person();
//	friend void hi()
//	{
//		cout << "hi" << endl;
//	}
//
//
//};
//
//Person::Person()
//{
//}
//
//Person::~Person()
//{
//}
//
//template<class T>
//class array
//{
//public:
//	friend void hello()
//	{
//		cout << "hello" << endl;
//	}
//
//
//};
//
//
//int main()
//{
//	hi();
//	hello();
//	return 0;
//}