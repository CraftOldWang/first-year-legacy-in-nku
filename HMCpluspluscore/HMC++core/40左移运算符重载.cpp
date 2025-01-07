//#include<iostream>
//using namespace std;
//
//
//class person
//{
//
//
//	friend	ostream& operator<<(ostream& cout, const person& p);
//public:
//	person():m_age(0),m_phones(0)
//	{
//		cout << "无参构造" << endl;
//	}
//
//	person(int age, int phones) :m_age(age),m_phones(phones)
//	{
//		cout << "有参构造" << endl;
//	}
//	
//	person(const person& m)
//	{
//		cout << "const &复制构造" << endl;
//		m_age = m.m_age;
//		m_phones = m.m_phones;
//	}
//
//	//很丑的成员函数实现<<重载
//	void operator<<( ostream& a)
//	{
//		a << m_age << "  " << m_phones << endl;
//		
//	}
//
//private:
//	int m_age;
//	int m_phones;
//
//};
//
////为什么不能加const..
////得以引用方式返回，不然返回时需要复制构造ostream对象，而这是不允许的
////顺序是有影响的
//ostream& operator<<( ostream& cout, const person& p)
//{
//	cout << p.m_age << "  " << p.m_age << endl;
//	return cout;
//}
//
//
//void test01()
//{
//	person p1(19,30);
//	person p2;
//	
//	//p1.operator<<(cout);
//	//p1 << cout;
//
//	cout << p1<<p2;
//
//}
//
//
//
//int main()
//{
//	test01();
//
//
//	return 0;
//}