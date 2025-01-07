//#include<iostream>
//using namespace std;
//
////教训，复制粘贴的时候要擦亮眼睛，想好
////有什么要改的赶紧改，改完每个地方都要看一下改对没有
////或者尽量减少复制粘贴
//
////0不是素数，1是素数
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
////1的话返回-1来作区别,毕竟往左边走还是可能出事的
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
//	//是素数直接返回了
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