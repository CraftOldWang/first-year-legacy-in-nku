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
//		cout << "�޲ι���" << endl;
//	}
//
//	person(int age, int phones) :m_age(age),m_phones(phones)
//	{
//		cout << "�вι���" << endl;
//	}
//	
//	person(const person& m)
//	{
//		cout << "const &���ƹ���" << endl;
//		m_age = m.m_age;
//		m_phones = m.m_phones;
//	}
//
//	//�ܳ�ĳ�Ա����ʵ��<<����
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
////Ϊʲô���ܼ�const..
////�������÷�ʽ���أ���Ȼ����ʱ��Ҫ���ƹ���ostream���󣬶����ǲ������
////˳������Ӱ���
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