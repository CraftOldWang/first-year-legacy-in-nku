//#include<iostream>
//using namespace std;
//
////���20min�����Ǽ�ʱ��
////д��ʱ���ְ��ڲ�ѭ��д��i�ˣ������һ��Ҫ�õ����ѭ����i�ı���....
//// �Լ����Ƶ�ʱ�����ǰ�flag1�ĳ�flag2��
//// �Լ�©��д��ȡ�������n��int�Ĳ���
//// ��Щ��������Ҫ��ʱ�������Լ�����.
////
// 
//int main()
//{
//	int n;
//	int a[10000] = { 0 };
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		int flag1 = 0;
//		int flag2 = 0;
//		for(int j=1;j<=a[i];j=j+2)
//		{
//			if (flag1 == 0)
//			{
//				cout << 1;
//				flag1 = 1;
//			}
//			else
//			{
//				cout << " " << j;
//			}
//			
//			
//		}
//		cout << endl;
//
//		for (int j = 2; j <= a[i]; j = j + 2)
//		{
//			if (flag2 == 0)
//			{
//				cout << 2;
//				flag2 = 1;
//			}
//			else
//			{
//				cout << " " << j;
//			}
//
//
//		}
//		cout << endl;
//
//		if (i != n - 1)
//		{
//			cout << endl;
//		}
//
//	}
//	
//	
//	return 0;
//}