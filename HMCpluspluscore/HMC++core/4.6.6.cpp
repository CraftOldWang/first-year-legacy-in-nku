////���ԿյĹ��캯����������ṩ�Ĺ��캯�������𣬣���������ǰ��ѧ�Ķ�������
////����һ��������Ĭ�Ϲ��죬Ĭ��������Ĭ�Ͽ�����
////�յĹ���û��ϵ�����������ṩ�ľ��ǿչ��졣�����Ǳ��������ṩĬ�Ͽ������������Կ��Կ������졣����
//// ��ֵ�����������ǲ�ͬ��,��ֵ�õ��Ǹ�ֵ����� =�����Ǹ�operator��
////��������Ҳ���ڹ��캯�����������вι���
////�������������ָ�뵱�����𣿲��ܣ��Ǿ����вι����ˣ����ᱻ��Ϊ�Ǹ��ƹ���
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
////	person(const person& k)//�����ǿ������졣������Ϊ����m_3��ʱ��û�е��������ǵ��ñ��������Ŀ������캯��
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
//	son()//�������û�õ�������ô��Ĭ�Ϲ���һ��������û��Ҫд��hh��
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
//void test01()//ͨ���������
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
//void test02()//ͨ������ֱ�ӷ���
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
