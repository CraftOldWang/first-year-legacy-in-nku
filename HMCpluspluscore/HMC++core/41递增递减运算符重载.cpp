//#include<iostream>
//using namespace std;
//
//class MyInteger
//{
//	friend ostream& operator<<(ostream& a, MyInteger b);
//public:
//	MyInteger():m_num(0)
//	{
//
//	}
//
//	
//	//成员函数似乎写两个，调用时也没法区分哪个是前置哪个是后置递增，
// //用int占位参数区分，有占位参数的是后置递增
//	//返回引用是为了让返回值还是原来那个东西
//	//比如++(++a),若不是返回引用，a的值只会+1，返回引用最终会+2
//	MyInteger& operator++()
//	{
//		//先++，再将自身返回	
//		m_num++;
//		return *this;
//	}
//
//	MyInteger operator++(int)
//	{
//		MyInteger temp = *this;
//
//		m_num++;
//	
//		return temp;
//		
//	}
//
//
//	//前置递减重载
//	MyInteger& operator--()
//	{
//		m_num--;
//		return *this;
//	}
//
//	//后置递减
//	MyInteger operator--(int)
//	{
//		MyInteger temp = *this;
//		m_num--;
//		return temp;
//	}
//
//private:
//	int m_num;
//};
//
////这里MyInteger不能用&，为什么
//ostream& operator<<(ostream& a,MyInteger b)
//{
//	cout << b.m_num;
//	return a;
//}
//
//
//
//void test01()
//{
//	//MyInteger num;
//	//cout << num;
//
//	int a = 0;
//	cout << (a++) << endl;
//	//不能两次后置递增，因为后置递增返回的是一个值。而不是变量
//	//没有存在某个地址。。。这行过了就会消失的东西。。从而不能再进行后置or前置++操作
//	//（因为它们都需要操作对象是可以修改的左值。
//
//	MyInteger b ;
//	b.operator++();
//			
//	cout << ++b << endl;
//	cout << b++ << endl;
//	cout << b << endl;
//	
//	MyInteger c;
//	cout << ----(--c) << endl;
//	cout << c-- << endl;
//	c.operator--();
//	cout << c << endl;
//
//
//}
//
//
//
//
//
//int main()
//{
//	test01();
//
//	return 0;
//}