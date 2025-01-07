//////#include<iostream>
//////using namespace std;
//////
//////class abstraction
//////{
//////	virtual void func()=0 ;
//////	
//////};
//////
//////class son1:public abstraction
//////{
//////	 void func() 
//////	 {
//////
//////	 }
//////};
//////
//////void test01()
//////{
//////	son1 a;
//////	int* p = new int;
//////
//////}
//////
//////int main()
//////{
//////	test01();
//////
//////
//////	return 0;
//////}
////#include<iostream>
////using namespace std;
////
////class makedrink
////{
////public:
////	virtual void boilwater() = 0;
////	virtual void brewing() = 0;
////	virtual void pourintocup() = 0;
////	virtual void assist() = 0;
////};
////
////class coffee :public makedrink
////{
////	 void boilwater() = 0;
////	 void brewing() = 0;
////	 void pourintocup() = 0;
////	 void assist() = 0;
////};
////
////class tea :public makedrink
////{
////	void boilwater()
////	{
////
////	}
////	void brewing()
////	void pourintocup()
////		void assist() { cout << "" << endl; }
////};
////
////int main()
////{
////
////
////
////	return 0;
////}
//
//
//#include<iostream>
//using namespace std;
//
//class cpu
//{
//public:
//	virtual void runcpu() = 0;
//};
//
//
//class gpu
//{
//public:
//	virtual void rungpu() = 0;
//	
//};
//
//class ram
//{
//public:
//	virtual void runram() = 0;
//	
//};
//
//class intel :public cpu, public gpu, public ram
//{
//public:
//	void runcpu()
//	{
//	cout << "intelcpu" << endl;
//	}
//	
//	void rungpu()
//	{
//		cout << "intelgpu" << endl;
//	}
//
//	void runram()
//	{
//		cout << "intelram" << endl;
//	}
//
//
//	
//};
//
//class Lenovo :public cpu, public gpu, public ram
//{
//public:
//	void runcpu()
//	{
//	cout << "Lenovocpu" << endl;
//	}
//
//	void rungpu()
//	{
//		cout << "Lenovogpu" << endl;
//	}
//
//	void runram()
//	{
//		cout << "Lenovoram" << endl;
//	}
//
//
//
//};
//
//
//class computer:public intel,public Lenovo
//{
//	void runcpu()
//	{
//
//	}
//
//
//};
//
//int main()
//{
//
//
//
//	return 0;
//}
