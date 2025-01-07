//#include<iostream>
//using namespace std;
//
//int myadd01(int a, int b)
//{
//	return a + b;
//}
//
//template<typename T,typename W>
//T myadd01(T a, T b)
//{
//	return a + b;
//}
//
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	int c = 'c';
//	cout << char(myadd01(10, c)) << endl;
//	cout << myadd01<char, int>(a, c) << endl;
//}
//
//template<typename T>
//T mymul(T a, T b)
//{
//	return a * b;
//}
//
//template< typename T,typename W>
//T mytest01(W a, W b)
//{
//	return T(mymul<W>(a, b));
//}
//
//template< typename W,typename T >
//T mytest02(W a, W b)
//{
//	return T(mymul<W>(a, b));
//}
//
//void test02()
//{
//	//Ë³ĞòÓĞ¹ØÏµ...
//	cout << mytest01<int>(10.3, 20.2) << endl;
//
//	cout << mytest02<int>(10.3, 20.2) << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//}
