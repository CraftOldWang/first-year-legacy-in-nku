//#include<iostream>
//using namespace std;
//
//template<class T,class W>
//void  MySwap(T& a, W& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//
//}
//
//template<typename T>
//void func()
//{
//	cout << "func" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	MySwap(a, b);
//	cout << a << "  " << b << endl;
//
//
//	double c = 1.34;
//	double d = 2.35;
//	MySwap(c, d);
//	cout << c<< "  " << d << endl;
//
//	char e ='A';
//	char f = 'B';
//	MySwap(e, f);
//	cout << e << "  " << f << endl;
//
//	string m = "ahhh";
//	string n = "nku";
//	MySwap(m, n);
//	cout << m << "   " << n << endl;
//
//	MySwap<string>(m, n);
//	MySwap<int>(a, b);
//	MySwap<double,int >(c, a);//好吧这个运行到函数体里时会有会有数据类型转换..
//
//
//
//	//char k[19] = "dsf";
//	//char r[2] = "a";
//	//k = r;
//
//	//呃呃，用字符数组会出事..似乎因为数组变量不能再赋值?
//	// 确实,由上面的试验知数组变量不是可修改的左值
//	//char p[] = "ahhh";
//	//char q[] = "nku";
//	//MySwap(p q);
//	//cout << p << "   " << q << endl;
//
//}
//
//void test02()
//{
//	func();//不行,编译器自动推导不出,必须显式给出
//	func<int>();
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}
