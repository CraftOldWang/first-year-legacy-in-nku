////测试空的构造函数与编译器提供的构造函数的区别，，，属于是前面学的东西忘了
////。。一个类里有默认构造，默认析构，默认拷贝。
////空的构造没关系。。编译器提供的就是空构造。。但是编译器会提供默认拷贝函数，所以可以拷贝构造。。。
//// 赋值跟拷贝构造是不同的,赋值用的是赋值运算符 =（这是个operator）
////拷贝函数也属于构造函数，不过是有参构造
////拷贝构造可以用指针当参数吗？不能，那就是有参构造了，不会被认为是复制构造
//
////#include<iostream>
////using namespace std;
////
////class person
////{
////public:
////
////	person() 
////	{
////		m_age = 10;
////	}
////
////	person(const person& k)//它不是拷贝构造。。。因为创建m_3的时候没有调用它而是调用编译器给的拷贝构造函数
////	{
////		m_age =1339384;
////	}
////
////	int m_age;
////};
////
////
////person func(const person m)
////{
////	return m;
////}
////
////void test1()
////{
////	person m_1;
////	person m_2;
////	person m_3 = m_1;
////	m_2 = m_1;
////
////	person m_4 = func(m_3);
////
////	cout << m_1.m_age << endl << m_2.m_age << endl<<m_3.m_age<<endl;
////
////}
////
////int main()
////{
////
////
////	test1();
////
////	return 0;
////
////}
//
//
//
//
//#include<iostream>
//using namespace std;
//
//
//class base
//{
//public:
//	base()
//	{
//		
//
//	};
//
//	static void func()
//	{
//		cout << "base func" << endl;
//
//	}
//
//	static int m_A;
//};
//
//int base::m_A = 10;
//
//class son :public base
//{
//public:
//	son()//这里。。。没用到他，那么跟默认构造一样。。。没必要写吧hh，
//	{
//		
//	}
//
//	static void func()
//	{
//		cout << "son func" << endl;
//	}
//	
//	static int m_A;
//};
//int son::m_A = 20;
//
//void test01()//通过对象访问
//{
//	son m;
//	cout <<"son's a"<< m.m_A << endl;
//	cout << "base's a" << m.base::m_A<< endl;
//
//	m.func();
//	m.base::func();
//	
//
//}
//
//void test02()//通过类名直接访问
//{
//	cout <<"son's A"<< son::m_A << endl;
//	cout << "base's A" << son::base::m_A << endl;
//
//	son::func();
//	son::base::func();
//}
//
//int main()
//{
//
//
//	test01();
//	test02();
//	return 0;
//}
//
//
