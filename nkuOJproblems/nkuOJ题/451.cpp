//#include<iostream>
//using namespace std;
// 
// 
// 13min
// 
//void task(int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "*";
//	}
//	cout << endl;
//
//	int k = n / 2;
//
//
//	for (int i = k; i > 0; i--)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			cout << "*";
//		}
//		for (int m = 0; m < n - 2 * i; m++)
//		{
//			cout << " ";
//		}
//		for (int j = 0; j < i; j++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//
//	for (int i = 2; i <= k; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			cout << "*";
//		}
//		for (int m = 0; m < n - 2 * i; m++)
//		{
//			cout << " ";
//		}
//		for (int j = 0; j < i; j++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << "*";
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	task(n);
//	return 0;
//}