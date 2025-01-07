
////类似地，小于大于也可以重载

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name,int age):m_age(age),m_name(name)
//	{
//
//	}
//
//	bool operator==(const Person& p)
//	{
//		if (m_name == p.m_name && m_age == p.m_age)
//			return true;
//		else
//			return false;
//	}
//
//	bool operator!=(const Person& p)
//	{
//		if (m_name == p.m_name && m_age == p.m_age)
//			return false;
//		else
//			return true;
//	}
//
//
//	string m_name;
//	int m_age;
//};
//
//int main()
//{
//	Person p1("绘梨花", 1240);
//	Person p2("绘梨花", 10);
//	cout << (p1 != p2) << endl;
//  cout<<p1.operator!=(p2)<<endl;
//
//	return 0;
//}