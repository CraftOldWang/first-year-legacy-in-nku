//#include<iostream>
//using namespace std;
//
//void bubsort(int a[], int len)
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
////0not 1is
//int isprime(int n)
//{
//	if (n == 1 || n == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		for (int i = 2; i < n; i++)
//		{
//			if (n % i == 0)
//			{
//				return 0;
//			}
//		}
//		return 1;
//	}
//
//}
//int findprimeposition(int a[], int len)
//{
//	int count = 0;
//	for (int i = 0; i < len; i++)
//	{
//		count++;
//		if (isprime(a[i]) == 1)
//		{
//			return count;
//		}
//	}
//}
//
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int a[100];
//	for (int i = 0; i < (m * n); i++)
//	{
//		cin >> a[i];
//	}
//	bubsort(a, m * n);
//
//	int posi = findprimeposition(a, m * n);
//	int row = (posi - 1) / n + 1;
//	int col = posi % n;
//	if (col == 0)
//	{
//		col = n;
//	}
//	cout << row << " " << col;
//	return 0;
//}