//#include<iostream>
//using namespace std;
//
//struct a
//{
//	int m;
//};
//class animal
//{
//public:
//
//	virtual void speak()
//	{
//		cout << "animal" << endl;
//	}
//};
//
//class cat :public animal
//{
//public:
//	void speak()
//	{
//		cout << "cat" << endl;
//	}
//	
//};
//
//void dospeak(animal* p)
//{
//	(*p).speak();
//}
//
//void test01()
//{
//	cat c1;
//	dospeak(&c1);
//}
//
//int main()
//{
//	cat c1;
//	animal* p = &c1;
//	p->speak();
//	test01();
//
//	a e;
//	a* r = &e;
//	(*r).m;
//
//	return 0;
//}