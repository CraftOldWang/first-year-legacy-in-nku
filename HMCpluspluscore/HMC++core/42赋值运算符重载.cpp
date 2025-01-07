////测试静态成员变量的继承，发现父类与所有派生类共享一份数据
////#include<iostream>
////using namespace std;
////
////class Base
////{
////public:
////	static int a;
////
////};
////int Base::a = 10;
////
////class son :public Base
////{
////public:
////
////
////};
////
//// int main()
////{
////	 son person;
////	 person.Base::a++;
////	 //确实会有俩。。。。派生类又不是按照父类的成员来整的。。。
////	 //并不，只有一个。
////	 person.a++;
////	 cout << Base::a << endl << son::a << endl;
////
////	return 0;
////}




//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_age = new int(age);
//	}
//
//	~Person()
//	{
//		delete m_age;
//	}
//
//
//	Person& operator=(const Person& p)//弹幕说用值传递会崩，看一下(未看）
//	{
//		if (p.m_age == m_age)
//		{ 
//			return *this;
//		}
//
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//
//		m_age = new int(*p.m_age);
//
//		return *this;
//	}
//
//	int* m_age;
//
//
//};
//
//
//int main()
//{
//
//	Person p1(10);
//	Person p2(20);//oh,刚才崩溃是因为Person p2=p1;的等于号是在调用默认复制构造而不是赋值运算符。
//	 p2 = p1;
//	cout << *p1.m_age << endl << *p2.m_age << endl;
//	
//	int a = 9;
//	a = a;
//	p2 = p2;
//	cout << *p2.m_age << endl;
//	return 0;
//}