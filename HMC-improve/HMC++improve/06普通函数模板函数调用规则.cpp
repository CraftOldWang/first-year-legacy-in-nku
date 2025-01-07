//#include<iostream>
//using namespace std;
//
////普通函数与函数模板调用规则
//void myPrint(int a, int b)
//{
//	cout << "调用的普通函数" << endl;
//}
//
//template<typename T>
//void myPrint(T a, T b)
//{
//	cout << "调用的模板" << endl;
//}
//
//template<typename T>
//void myPrint(T a, T b, T c)
//{
//	cout << "调用重载的模板" << endl;
//}
//
//void myPrint(int a, int b, int c)
//{
//	cout << "ah" << endl;
//}
//
//void test01()
//{
//	//都能实现时，优先调用普通函数
//	int c = 10, d = 20;
//	myPrint(c, d);
//
//
//	char a = 'a', b = 'b', c = 'c';
//	myPrint(a,b);
//	myPrint<>(a, b);
//}
//
//int main()
//{
//	test01();
//}
