#include<iostream>
using namespace std;

//easy 16min
//arr1与arr2调成长度为4的话会stack corrupted why？

//void chartoint(char a[], int b[])
//{
//	for (int i = 0; i < 4; i++)
//	{
//		if (a[i] == '0')
//		{
//			b[i] = 0;
//		}
//		else
//		{
//			b[i] = 1;
//		}
//	}
//}
//
//void addandprint(int a[],int b[])
//{
//	//全部加到一个数组里
//	for (int i = 0; i < 4; i++)
//	{
//		a[i] += b[i];
//	}
//
//	for (int i = 3; i > 0; i--)
//	{
//		if (a[i] >= 2)
//		{
//			a[i - 1]++;
//			a[i] = a[i] - 2;
//		}
//	}
//
//	if (a[0] >= 2)
//	{
//		a[0] = a[0] - 2;
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		cout << a[i];
//	}
//
//
//}
//
//int main()
//{
//	char arr1[5] = { 0 };
//	char arr2[5] = { 0 };
//	cin >> arr1;
//	cin >> arr2;
//
//	int ia1[5] = { 0 };
//	int ia2[5] = { 0 };
//
//	chartoint(arr1, ia1);
//	chartoint(arr2, ia2);
//
//	
//	addandprint(ia1, ia2);
//
//	return 0;
//}