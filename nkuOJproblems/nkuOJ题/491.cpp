//#include<iostream>
//using namespace std;
//
////17min 
//
//void inputarr(int a[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cin >> a[i];
//	}
//}
//
//void arrplus(int end[], int a[], int len1, int b[], int len2)
//{
//	for (int i = 0; i < len1; i++)
//	{
//		end[i] = a[i];
//	}
//	for (int i = 0; i < len2; i++)
//	{
//		end[i + len1] = b[i];
//	}
//}
//
//void arrsort(int a[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void arrfilterprint(int a[], int len)
//{
//	int previous;
//	for (int i = 0; i < len; i++)
//	{
//		if (i == 0)
//		{
//			cout << a[i];
//			previous = a[i];
//		}
//		else
//		{
//			if (previous != a[i])
//			{
//				cout << " "<<a[i];
//				previous = a[i];
//			}
//		}
//	}
//}
//
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	int arrend[200] = { 0 };
//	inputarr(arr1, m);
//	inputarr(arr2, n);
//	arrplus(arrend,arr1, m, arr2, n);
//	arrsort(arrend, m + n);
//	arrfilterprint(arrend, m + n);
//	return 0;
//}