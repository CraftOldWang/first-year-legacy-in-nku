//#include<iostream>
//using namespace std;
//
//class father
//{
//public:
//	father()
//	{
//		A = 10;//构造函数???有什么用,为什么要在这里赋初值?忘了
//	}
//
//	void func()
//	{
//		cout << "father_func" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "father_func_samename" << endl;
//	}
//
//	int A;
//
//};
//
//class son :public father
//{
//public:
//	son()
//	{
//		A = 100;
//	}
//	void func()
//	{
//		cout << "son's func" << endl;
//
//	}
//
//	int A;
//};
//
//
//void test01()
//{
//	son m;
//	cout << "son's A" << m.A << endl;
//	cout << "father's A" <<m.father::A<< endl;
//}
//
//void test02()
//{
//	son m_1;
//	m_1.func();
//	m_1.father::func(233);
//	m_1.father::func();
//
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}