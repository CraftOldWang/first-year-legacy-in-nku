//#include<iostream>
//#include"mybubblesort.h"
//using namespace std;
//
//
//
//class person
//{
//public:
//	//无参构造
//	//确实，构造函数里面最好要做完初始化，不然用的时候以为做了初始化但没做就完了。
//	person():m_age(0),m_phones(0)
//	{
//		cout << "无参构造" << endl;
//
//	}
//	//有参构造
//	person(int age, int phones) :m_age(age),m_phones(phones)
//	{
//		cout << "有参构造" << endl;
//	}
//	//复制构造
//	person(const person& m)
//	{
//		cout << "const &复制构造" << endl;
//		m_age = m.m_age;
//		m_phones = m.m_phones;
//	}
//
//
//
//	//成员函数重载加法
//	person operator+(const person& m)
//	{
//		cout << "成员函数加法重载" << endl;
//		//m_age += m.m_age;
//		//m_phones += m.m_phones;   //不行，哪有加法会改自己的值的
//
//		person temp;
//		cout << temp.m_age << "  " << temp.m_phones << endl;
//		temp.m_age = m.m_age + m_age;
//		temp.m_phones = m.m_phones + m_phones;
//
//
//		return temp;
//	}
//
//	//加法运算符的另一个重载
//	person operator+(int a)
//	{
//		cout << "加法重载，与int加" << endl;
//		person temp;
//		temp.m_age = m_age + a;
//		temp.m_phones = m_phones + a;
//		return temp;
//	}
//
//	//赋值重载
//	person operator=(const person& p1)
//	{
//		cout << "赋值重载" << endl;
//		m_age = p1.m_age;
//		m_phones = p1.m_phones;
//	}
//
//	int m_age;
//	int m_phones;
//
//};
//
//person operator+(const person& a, const person& b)
//{
//	cout << "全局函数加法重载" << endl;
//	person temp;
//	cout << temp.m_age << "  " << temp.m_phones << endl;
//	temp.m_age = a.m_age + b.m_age;
//	temp.m_phones = a.m_phones + b.m_phones;
//	return temp;
//}
//
//
//
////练习运算符重载.
//void test01()
//{
//	person p1(10, 20);
//	person p2(49, 70);
//
//
//	/*person p3 = p1 + p2;*/
//	//我猜首先调用重载，然后再调用复制构造
//	//结果没有调用复制构造，原因是返回值优化，p1+p2实际上在调用operator+这个函数，
//	//函数的返回值用来初始化一个新的变量。。。先不管
//	//调用了无参构造是因为加法重载的实现中用到了无参构造。
//
//	//cout << p3.m_age << " " << p3.m_phones << endl;
//	//person p4=p3.operator+(p2);		//成员函数重载
//	//cout << p4.m_age << " " << p4.m_phones << endl;
//	//person p5 = operator+(p1, p2);	//全局函数重载
//	//cout << p5.m_age << " " << p5.m_phones << endl;
//
//
//	person p6 =p1+10;  //但是想反过来10+p1 那么得再写一个重载函数。。毕竟参数列表是有顺序的
//	cout << p6.m_age << " " << p6.m_phones << endl;
//
//}
//
//
//person func()
//{
//	cout << "this is func" << endl;
//	person p;
//	return p;
//}
//
//
////练习不同的构造函数调用方法,
////用小括号法吧，大括号法在vector容器那里就有点问题了。
//void test03()
//{
//	//括号法
//	person p_1;       //无参构造确实不能用括号，只需要类型名加上变量名，因为加括号后会被识别成函数声明。
//	
//	//person p_2();	//无参构造可以用括号？不能
//	//person func();//因为这样与函数的声明没有区别，会被编译器认为是函数声明。
//
//	person p_3(19, 20);
//	person p_4(p_3);
//	cout << p_1.m_age <<"   "<<p_1.m_phones<< endl;
//	cout << p_3.m_age << "   " << p_3.m_phones << endl;
//	cout << p_4.m_age << "   " << p_4.m_phones << endl;
//
//	//显式法
//	person p_5;						//无参
//	person p_6 = person(1, 2);		//有参
//	person p_7 = person(p_5);		//复制
//
//	//隐式转换法
//	person p_8 = { 12,34 };//emmm黑马只讲了单参数的。。。那时是用小括号
//	person p_9 = p_8;
//
//	//大括号法
//	person p_10{};
//	person p_11{ 214,222 };
//	person p_12{ p_11 };
//
//	cout << p_10.m_age << "   " << p_10.m_phones << endl;
//	cout << p_11.m_age << "   " << p_11.m_phones << endl;
//	cout << p_12.m_age << "   " << p_12.m_phones << endl;
//
//}
//
//
//int main()
//{
//	
//	test01();
//
////	test03();
//	return 0;
//}