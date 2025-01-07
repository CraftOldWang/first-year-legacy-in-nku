//#include<iostream>
//#include<string>
//using namespace std;
//
////写头文件就不用按定义的顺序布置这些东西了。。。
////比如这里那个具体化模板必须放在person后面，
//// 因为放前面的话person没定义不能用
//
//template<typename T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b)
//		return true;
//	else
//		return false;
//}
//
//class Person
//{
//public:
//	Person(string name,int age):m_age(age),m_name(name)
//	{
//
//	}
//
//
//	string m_name;
//	int m_age;
//
//};
//
//
//
//void test01()
//{
//	Person p1("tom", 19);
//	Person p2("alice", 18);
//	Person p3("alice", 18);
//	cout << myCompare(p1, p2) << endl
//		<< myCompare(p3, p2) << endl;
//}
//
//
//int main()
//{
//	test01();
//	
//	return 0;
//}
