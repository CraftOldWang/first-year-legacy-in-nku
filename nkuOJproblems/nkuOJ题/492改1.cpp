//#include<iostream>
//using namespace std;
//
////��ѵ������ճ����ʱ��Ҫ�����۾������
////��ʲôҪ�ĵĸϽ��ģ�����ÿ���ط���Ҫ��һ�¸Ķ�û��
////���߾������ٸ���ճ��
//
////0����������1������
//int isprime(int n)
//{
//	if (n == 1)
//	{
//		return 0;
//	}
//	else
//	{
//		for (int i = 2; i < n; i++)
//		{
//			if (n % i == 0){return 0;}
//		}
//	}
//
//	return 1;
//}
//
////1�Ļ�����-1��������,�Ͼ�������߻��ǿ��ܳ��µ�
//int flcloseprime(int n)
//{
//	if (n == 1)
//	{
//		return -1;
//	}
//	for (int i = n - 1; i > 1; i--)
//	{
//		if (isprime(i) == 1)
//		{
//			return i;
//		}
//	}
//}
//
//int frcloseprime(int n)
//{
//	for (int i = n +1;; i++)
//	{
//		if (isprime(i) == 1)
//		{
//			return i;
//		}
//	}
//}
//
//int  findcloseprime (int n)
//{
//	//������ֱ�ӷ�����
//	switch (isprime(n))
//	{
//	case 0:
//		break;
//	case 1:
//		return n;
//	}
//
//	int lcloseprime, rcloseprime;
//	lcloseprime = flcloseprime(n);
//	rcloseprime = frcloseprime(n);
//	if (lcloseprime == -1)
//	{
//		return rcloseprime;
//	}
//	else if ((n-lcloseprime) <=( rcloseprime-n))
//	{
//		return lcloseprime;
//	}
//	else
//	{
//		return rcloseprime;
//	}
//
//}
//
//int absolute(int x)
//{
//	if(x>=0)
//	{
//		return x;
//	}
//	else
//	{
//		return -x;
//	}
//}
//
//int main()
//{
//	int n, m = 0;
//	int arr[10000] = { 0 };
//	cin >> n;
//	if (n <= 0 || n > 10000)
//	{
//		cout << "INCORRECT INPUT!";
//		return 0;
//	}
//
//	int count = 0;
//	while (cin >> m)
//	{
//		if (m <= 0 || m >= 1000000)
//		{
//			cout << "INCORRECT INPUT!";
//			return 0;
//		}
//		else
//		{
//			arr[count] = m;
//			count++;
//		}
//	}
//
//	for (int i = 0; arr[i] != 0; i++)
//	{
//		int closeprime=findcloseprime(arr[i]);
//		cout << closeprime << " " << absolute(arr[i] - closeprime) ;
//		if (i != n-1)
//		{
//			cout << endl;
//		}
//	}
//
//	return 0;
//}