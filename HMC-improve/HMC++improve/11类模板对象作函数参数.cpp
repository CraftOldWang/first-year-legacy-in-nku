//#include<iostream>
//#include<string>
//using namespace std;
//
//
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age):m_name(name),m_age(age)
//	{
//
//	}
//
//	void Showperson()
//	{
//		cout << m_name << "  " << m_age << endl;
//	}
//
//
//	T1 m_name;
//	T2 m_age;
//};
//
////1.指定传入类型
//void printperson1(Person<string,int>&p)
//{
//	p.Showperson();
//}
//
//void test01()
//{
//	Person<string, int>p1("tom", 19);
//	printperson1(p1);
//}
//
//
////2.参数模板化
//
////就是用函数模板
//template<typename T1,typename T2>
//void printperson2(Person<T1,T2>&p)
//{
//	p.Showperson();
//	cout << "T1的类型为" << typeid(T1).name() << endl
//		<< "T2的类型为" << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int>p1("tom", 19);
//	printperson2<string,int>(p1);
//}
//
//
////3.整个类模板化
//
//template<class T>
//void printperson3(T& p)
//{
//	p.Showperson();
//	cout << "T1的类型为" << typeid(T).name() << endl;
//}
//
//void test03()
//{
//	Person<string, int>p1("alice", 17);
//	printperson3(p1);
//}
//
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//
//
//	return 0;
//}
