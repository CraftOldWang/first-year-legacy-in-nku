//#include<iostream>
//using namespace std;
//
//
//class Base
//{
//public: 
//	virtual void hello() = 0;
//};
//
//class Son:public Base
//{
//public:
//
//	void hello()
//	{
//		cout<<"hello"<<endl;
//	}
//};
//
//int main()
//{
//	Son a;
//	a.hello();
//
//
//	//������ָ��������ָ���������(��Ϊ������ָ��),�������и������,
//	
//	Base& b = *(new Son);
//
//	Base* c = new Son;
//	c->hello();
//
//	b.hello();
//
//	return 0;
//}