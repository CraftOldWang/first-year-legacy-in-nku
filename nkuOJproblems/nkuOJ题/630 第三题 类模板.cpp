//#include<iostream>
//using namespace std;
//
////41min
////因为
//// 1.初始化问题
//// 2.switch算一个作用域,会检查有没有初始化以及有没有重复定义.
//// 3.没看清题意,没做排序
////所以比较慢
//
//int maxsize = 21;
//
//
//
//template<class T>
//class myCards
//{
//
//	//如何初始化这种数组?不初始化不好吧?
//	T cards[21] = { 0 };
//	//count只用来记剩余牌数,数组中间插了一些0
//	//懒得写sort了
//	int count;
//	
//public:
//	//数组可以用列表初始化为全部是0吗?
//	myCards(T* a,int size):count(size)
//	{
//		
//		for (int i = 0; i < size; i++)
//		{
//			cards[i] = a[i];
//		}
//	}
//	void print()
//	{
//		for (int i = 0; i < maxsize; i++)
//		{
//			cout << cards[i] << " ";
//		}
//		cout << endl;
//	}
//
//	void match()
//	{
//		//print();
//		for (int i = 0; i < maxsize -1; i++)
//		{
//			if(cards[i]!=0)
//			{
//				for (int j = i + 1; j < maxsize; j++)
//				{
//					if (cards[i] == cards[j])
//					{
//						cards[i] = cards[j] = 0;
//						count = count - 2;
//						break;
//					}
//				}
//			}
//
//		}
//		//print();
//	}
//
//	//结果还是要排序....
//	void show()
//	{
//		cout << count << endl;
//		if (count == 0)
//		{
//			cout << "WIN" << endl;
//		}
//		else
//		{
//			sort();
//			bool flag= 0;
//			for (int i= 0; i < maxsize; i++)
//			{
//				if (cards[i] != 0)
//				{
//					if (flag == 0)
//					{
//						cout << cards[i];
//						flag = 1;
//					}
//					else
//					{
//						cout << " " << cards[i];
//		
//					}
//
//				}
//			}
//			cout << endl;
//			
//		}
//
//	}
//
//	void sort()
//	{
//		for (int i = 0; i < maxsize-1; i++)
//		{
//			for (int j = i; j < maxsize - 1 - i; j++)
//			{
//				if (cards[j] > cards[j + 1])
//				{
//					T tmp = cards[j];
//					cards[j] = cards[j + 1];
//					cards[j + 1] = tmp;
//				}
//			}
//		}
//	}
//};
//
//
//void test01()
//{
//
//	int n;
//	cin >> n;
//	int no_use;
//	int len = 0;
//	if (n == 0)
//	{
//		char tmp = 0;
//
//		cin >> no_use;
//
//		char arr[21] = { 0 };
//
//		while (cin >> tmp)
//		{
//			arr[len] = tmp;
//			len++;
//		}
//		myCards<char> c(arr, len);
//		c.match();
//		c.show();
//	}
//	else if (n == 1)
//	{
//		int tmp = 0;
//
//		cin >> no_use;
//
//		int arr[21] = { 0 };
//
//		while (cin >> tmp)
//		{
//			arr[len] = tmp;
//			len++;
//		}
//		myCards<int> i(arr, len);
//		i.match();
//		i.show();
//	}
//
//}
//
//
////创建在堆区时候并不会自动初始化,也需要手动做
//void test02()
//{
//	
//	int* p = new int[100];
//	for (int i = 0; i < 100; i++)
//	{
//		cout << p[i] << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	test01();
//	//test02();
//
//		
//
//	return 0;
//}