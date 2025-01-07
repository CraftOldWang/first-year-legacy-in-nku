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
//	//可以有指向父类对象的指针或者引用(因为引用是指针),但不能有父类对象,
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