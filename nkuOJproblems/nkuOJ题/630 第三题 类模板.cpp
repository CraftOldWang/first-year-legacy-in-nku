//#include<iostream>
//using namespace std;
//
////41min
////��Ϊ
//// 1.��ʼ������
//// 2.switch��һ��������,������û�г�ʼ���Լ���û���ظ�����.
//// 3.û��������,û������
////���ԱȽ���
//
//int maxsize = 21;
//
//
//
//template<class T>
//class myCards
//{
//
//	//��γ�ʼ����������?����ʼ�����ð�?
//	T cards[21] = { 0 };
//	//countֻ������ʣ������,�����м����һЩ0
//	//����дsort��
//	int count;
//	
//public:
//	//����������б��ʼ��Ϊȫ����0��?
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
//	//�������Ҫ����....
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
////�����ڶ���ʱ�򲢲����Զ���ʼ��,Ҳ��Ҫ�ֶ���
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