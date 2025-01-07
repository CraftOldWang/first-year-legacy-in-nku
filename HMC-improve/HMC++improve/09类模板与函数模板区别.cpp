////类模板不能自动类型推导，只能显式指定类型
//
//
//#include<iostream>
//using namespace std;
//
//
//template<class NameType,class AgeType =int>
//class Person
//{
//public:
//
//	Person(NameType name,AgeType age):m_name(name),m_age(age)
//	{
//
//	}
//
//	void showperson()
//	{
//		cout << m_name << "  " << m_age;
//	}
//	NameType m_name;
//	AgeType m_age;
//
//};
//
//
//void test01()
//{
//	Person <string>p1("tom", 18);
//	p1.showperson();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
