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
//	MySwap<double,int >(c, a);//�ð�������е���������ʱ���л�����������ת��..
//
//
//
//	//char k[19] = "dsf";
//	//char r[2] = "a";
//	//k = r;
//
//	//���������ַ���������..�ƺ���Ϊ������������ٸ�ֵ?
//	// ȷʵ,�����������֪����������ǿ��޸ĵ���ֵ
//	//char p[] = "ahhh";
//	//char q[] = "nku";
//	//MySwap(p q);
//	//cout << p << "   " << q << endl;
//
//}
//
//void test02()
//{
//	func();//����,�������Զ��Ƶ�����,������ʽ����
//	func<int>();
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}
