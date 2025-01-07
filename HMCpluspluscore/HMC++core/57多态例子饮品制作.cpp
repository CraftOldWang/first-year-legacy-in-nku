//#include<iostream>
//using namespace std;
//
//class makedrink
//{
//public:
//	void watering()
//	{
//		cout << "get some water" << endl;
//	}
//
//	virtual void brew() = 0;
//
//	void pourintocup()
//	{
//		cout << "pour into cup" << endl;
//	}
//
//
//	virtual void addothermaterial() = 0;
//
//	void makedrinking()
//	{
//		watering();
//		brew();
//		pourintocup();
//		addothermaterial();
//	}
//};
//
//
//class makecoffee:public makedrink
//{
//public:
//
//
//	virtual void brew()
//	{
//		cout << "coffee making" << endl;
//	}
//
//	
//	void addothermaterial()
//	{
//		cout << "add sugar and mike" << endl;
//	}
//};
//
//class maketea:public makedrink
//{
//public:
//
//
//	void brew()
//	{
//		cout << "tea making" << endl;
//	}
//
//	
//	void addothermaterial()
//	{
//		cout << "add lemon" << endl;
//	}
//
//	
//};
//
////const对象不能调非const函数...怕在里面把自己改了.
//void doWork( makedrink* a)
//{
//	a->makedrinking();
//	delete	a;
//}
//
//void test01()
//{
//	
//
//	doWork(new maketea);
//
//	doWork(new makecoffee);
//
//
//}
//
//int main()
//{
//
//	test01();
//
//
//	return 0;
//}