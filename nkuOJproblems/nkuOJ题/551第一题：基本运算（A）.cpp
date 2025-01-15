//水题,没什么好说的

//#include<iostream>
//using namespace std;
//
//int findmax(int a[])
//{
//	int max = a[0];
//	for (int i = 1; i < 10; i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//	}
//
//	return max;
//}
//
//int findmin(int a[])
//{
//	int min = a[0];
//	for (int i = 1; i < 10; i++)
//	{
//		if (a[i] < min)
//		{
//			min = a[i];
//		}
//	}
//
//	return min;
//
//}
//
//int findsum(int a[])
//{
//	int sum = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		sum = sum + a[i];
//	}
//
//	return sum;
//}
//
////1 is,0 not
//bool isupletter(char a)
//{
//	if (a >= 'A' && a <= 'Z')
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//
//void uptolow(char a[])
//{
//	for (int i = 0; i < 20; i++)
//	{
//		if (isupletter(a[i]) == 1)
//		{
//			a[i] = a[i] + 'a' - 'A';
//		}
//
//	}
//
//}
//
//
//int main()
//{
//	int iarr[10] = { 0 };
//	char carr[25] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> iarr[i];
//	}
//	cin >> carr;
//
//	int max = 0, min = 0, sum = 0;
//
//	max = findmax(iarr);
//	min = findmin(iarr);
//	sum = findsum(iarr);
//
//	uptolow(carr);
//
//
//	cout << max << " " << min << " " << sum << endl;
//	cout << carr;
//
//
//
//
//	return 0;
//}