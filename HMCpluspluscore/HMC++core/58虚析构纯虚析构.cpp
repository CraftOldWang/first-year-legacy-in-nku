//#include<iostream>
//#include<string>
//using namespace std;
//
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "animal构造" << endl;
//	}
//	 ~Animal()
//	{
//		cout << "animal析构" << endl;
//	}
//
//	virtual void speak() = 0;
//
//};
//
//class Cat :public Animal
//{
//public:
//	Cat(string name):m_name(new string(name))
//	{
//		cout << "cat构造" << endl;
//	}
//	~Cat()
//	{
//		if (m_name != nullptr)
//		{
//			delete m_name;
//			m_name = nullptr;
//		}
//		cout << "cat析构" << endl;
//	}
//
//	virtual void speak()
//	{
//		cout << "cat speaking" << endl;
//	}
//	
//
//	string* m_name;
//};
//
//void dospeak(Animal* a)
//{
//	a->speak();
//}
//
//void test01()
//{
//	Animal* anim = new Cat("tom");
//	dospeak(anim);
//
//	//虚析构,delete是释放在堆区开辟的内存用的,delete的时候会调用析构函数...
//	//然后调用子类析构后会自动再调用父类析构,但是调父类不会再调子类的
//	//所以我们通过虚析构,可以调用子类的析构,然后自动调父类析构.
//	delete anim;
//
//	int a = 0;
//	int b = 0;
//}
//
//int main()
//{
//
//	test01();
//
//	return 0;
//}