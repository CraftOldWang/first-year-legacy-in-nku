//#include<iostream>
//using namespace std;
//
//
//class person
//{
//public:
//	int age;
//};
//template<class T,class K>
//void myswap(T a, T b,K c)
//{
//	cout << "普通模板" << endl;
//}
//
//template<> void myswap(person a, person b,person c)
//{
//	cout << "具体化重载模板" << endl;
//}
//
//void test01()
//{
//	int a=0, b=0;
//	person c = { 2 }, d = { 4 };
//	/*myswap(a, b);
//	myswap(c, d);*/
//	myswap< >(a, b,c);
//}
//
//int main()
//{
//	test01();
//}
