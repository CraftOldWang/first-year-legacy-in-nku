////���Ծ�̬��Ա�����ļ̳У����ָ��������������๲��һ������
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
////	 //ȷʵ���������������������ֲ��ǰ��ո���ĳ�Ա�����ġ�����
////	 //������ֻ��һ����
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
//	Person& operator=(const Person& p)//��Ļ˵��ֵ���ݻ������һ��(δ����
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
//	Person p2(20);//oh,�ղű�������ΪPerson p2=p1;�ĵ��ں����ڵ���Ĭ�ϸ��ƹ�������Ǹ�ֵ�������
//	 p2 = p1;
//	cout << *p1.m_age << endl << *p2.m_age << endl;
//	
//	int a = 9;
//	a = a;
//	p2 = p2;
//	cout << *p2.m_age << endl;
//	return 0;
//}