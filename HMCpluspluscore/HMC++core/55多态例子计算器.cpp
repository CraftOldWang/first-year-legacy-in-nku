//#include<iostream>
//using namespace std;
//
//class AbstractCaculator
//{
//public:
//	virtual int GetResult()
//	{
//		return 0;
//	}
//
//	int num_1;
//	int num_2;
//};
//
//
//class AddCaculator :public AbstractCaculator
//{
//public:
//	int GetResult()
//	{
//		return num_1 + num_2;
//	}
//
//};
//
//class SubCaculator :public AbstractCaculator
//{
//public:
//	int GetResult()
//	{
//		return num_1 - num_2;
//	}
//
//};
//
//class MulCaculator :public AbstractCaculator
//{
//public:
//	int GetResult()
//	{
//		return num_1 * num_2;
//	}
//
//};
//
//
//void test01()
//{
//	AddCaculator add;
//	add.num_1 = 10;
//	add.num_2 = 20;
//	cout << add.GetResult() << endl;
//
//	SubCaculator sub;
//	sub.num_1 = 10;
//	sub.num_2 = 20;
//	cout << sub.GetResult() << endl;
//
//	MulCaculator mul;
//	mul.num_1 = 10;
//	mul.num_2 = 20;
//	cout << mul.GetResult() << endl;
//
//}
//
//
//void test02()
//{
//	//用指针试试
//	AddCaculator* add = new AddCaculator;
//	add->num_1 = 100;
//	add->num_2 = 20;
//	cout << add->GetResult() << endl;
//
//	//要把堆区开辟的东西销毁掉
//	delete add;
//
//}
//
//
//int main()
//{
//	//test01();
//	test02();
//
//	return 0;
//}