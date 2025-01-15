//#include<iostream>
//using namespace std;
// 
// 20min
// 
//class CashSuper
//{
//public:
//	//用private还能在基类调函数？
//	//还是说private的函数可以而成员不可以？
//	//并不，只是编译器当时没有反应过来，确实都不可以；private继承过去就变成不可访问了。
//	virtual int AcceptCash(int money) = 0;
//
//
//};
//
//class meq1 :public CashSuper
//{
//public:
//	int AcceptCash(int money)
//	{
//		int q;
//		cin >> q;
//		return money * q / 10;
//	}
//
//};
//
//class meq2 :public CashSuper
//{
//public:
//	int AcceptCash(int money)
//	{
//		int up;
//		int minus;
//		cin >> up >> minus;
//
//		if (money >= up)
//		{
//			return money - minus;
//		}
//		else
//		{
//			return money;
//		}
//	}
//
//};
//
//class meq3 :public CashSuper
//{
//public:
//	int AcceptCash(int money)
//	{
//		int q;
//		cin >> q;
//		money= money * q / 10;
//		int up;
//		int minus;
//		cin >> up >> minus;
//
//		if (money >= up)
//		{
//			return money - minus;
//		}
//		else
//		{
//			return money;
//		}
//	}
//};
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		int finalmoney = 0;
//		CashSuper* c;
//		int change = 0;
//		cin >> change;
//		switch (change)
//		{
//		case 1:
//			//这里调用构造函数不加括号（）表示什么？
//			//表示调用无参构造(一般是默认构造)
//			c= new meq1;
//			finalmoney = c->AcceptCash(m);
//			break;
//		case 2:
//			 c = new meq2;
//			finalmoney = c->AcceptCash(m);
//			break;
//		case 3:
//			 c = new meq3;
//			finalmoney = c->AcceptCash(m);
//			break;
//		default:
//			break;
//		}
//		cout << finalmoney << endl;
//
//	}
//
//
//	
//	return 0;
//}