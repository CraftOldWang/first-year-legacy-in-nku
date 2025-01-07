//#include<iostream>
//using namespace std;
//#include<string>
//
//
//template<class T1,class T2>
//class Person;
//
//template<class T1, class T2>
//void printperson2(Person<T1, T2>& p)
//{
//	cout << p.m_name << "  " << p.m_age << endl;
//}
//
//
//
//template<class T1, class T2>
//class Person
//{
//	//全局函数类内实现   这里用了参数模板化...Person<T1,T2>&p
//	friend void printperson(Person<T1,T2>&p)
//	{
//		cout << p.m_name << "  " << p.m_age << endl;
//	}
//
//	friend void printperson2<>(Person<T1, T2>& p);
//
//public:
//	Person(T1 name, T2 age):m_name(name),m_age(age)
//	{
//		
//	}
//
//
//private:
//	T1 m_name;
//	T2 m_age;
//};
//
//
//
//
//void test01()
//{
//	Person<string, int> p1("tom", 18);
//	printperson(p1);
//}
//
//void test02()
//{
//	Person<string, int> p1("tom", 18);
//	printperson2(p1);
//}
//
//int main()
//{
//	
//	test01();
//	test02();
//	return 0;
//}
//
//
