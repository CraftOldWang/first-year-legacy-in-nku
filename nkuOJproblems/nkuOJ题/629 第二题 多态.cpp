//#include<iostream>
//using namespace std;
// 
// 20min
// 
//class CashSuper
//{
//public:
//	//��private�����ڻ����������
//	//����˵private�ĺ������Զ���Ա�����ԣ�
//	//������ֻ�Ǳ�������ʱû�з�Ӧ������ȷʵ�������ԣ�private�̳й�ȥ�ͱ�ɲ��ɷ����ˡ�
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
//			//������ù��캯���������ţ�����ʾʲô��
//			//��ʾ�����޲ι���(һ����Ĭ�Ϲ���)
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