//#include<iostream>
//#include<math.h>
//using namespace std;
//
////0不是素数，1是素数
//int isprime(int n)
//{
//	if (n == 1)
//	{
//		return 0;
//	}
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//void closestprime(int n)
//{
//	int closeprime = 0;
//	int forwardprime = 0;
//	int backwardprime = 0;
//
//	if (isprime(n) == 1)
//	{
//		cout << n << " " << 0 << endl;
//	}
//	else
//	{
//
//		for (int i = 1;; i++)
//		{
//			if (isprime(n + i) == 1)
//			{
//				forwardprime = n + i;
//				break;
//			}
//		}
//		for (int i = 1;; i++)
//		{
//			if (n - i <= 0) 
//			{ 
//				backwardprime = -1;
//				break; 
//			}
//			if(isprime(n-i)==1)
//			{
//				backwardprime = n -i;
//				break;
//			}
//
//		}
//
//		if (backwardprime == -1)
//		{
//			closeprime = forwardprime;
//		
//		}
//		else
//		{
//			if (forwardprime - n >= n - backwardprime)
//			{
//				closeprime = backwardprime;
//			}
//			else
//			{
//				closeprime = forwardprime;
//			}
//		}
//
//		cout << closeprime << " " << abs(closeprime - n);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	if (n >= 10001 || n <= 0)
//	{
//		cout << "INCORRECT INPUT!";
//		return 0;
//	}
//
//	int arr[10000] = { 0 };
//	for (int i = 0,M=0; cin>>M; i++)
//	{
//		if (i >= n)
//		{
//			cout << "INCORRECT INPUT!";
//			return 0;
//		}
//		else
//		{
//			if (M > 0 && M < 1000000)
//			{
//				arr[i] = M;
//			}
//			else
//			{
//				cout << "INCORRECT INPUT!";
//				return 0;
//			}
//		}
//		
//	}
//	
//
//	for (int i = 0; i < n; i++)
//	{
//		closestprime(arr[i]);
//		if (i != n - 1)
//		{
//			cout << endl;
//		}
//	}
//
//
//	return 0;
//}