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
////1.ָ����������
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
////2.����ģ�廯
//
////�����ú���ģ��
//template<typename T1,typename T2>
//void printperson2(Person<T1,T2>&p)
//{
//	p.Showperson();
//	cout << "T1������Ϊ" << typeid(T1).name() << endl
//		<< "T2������Ϊ" << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int>p1("tom", 19);
//	printperson2<string,int>(p1);
//}
//
//
////3.������ģ�廯
//
//template<class T>
//void printperson3(T& p)
//{
//	p.Showperson();
//	cout << "T1������Ϊ" << typeid(T).name() << endl;
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
