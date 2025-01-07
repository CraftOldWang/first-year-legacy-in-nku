//#include<iostream>
//using namespace std;
// 
////16min
//
////1 is ,0 not
//bool isnum(char a)
//{
//	if(a >= '0' && a <= '9')
//	{
//		return 1;
//	}
//	else 
//	{
//		return 0;
//	}
//}
//
//void swapchar(char &a, char &b)
//{
//	char temp = a;
//	a = b;
//	b = temp;
//}
//
//void inversearr(char a[],int front,int back)
//{
//	for (int i = 0; front + i < back - i;i++)
//	{
//		swapchar(a[front + i], a[back - i]);
//	}
//}
//
//int main()
//{
//	char a[51] = { 0 };
//	cin >> a;
//	int len = 0;
//	for (int i = 0;; i++)
//	{
//		if (a[i] == '\0')
//		{
//			len = i;
//			break;
//		}
//	}
//
//	for (int i = 0; i < len; i++)
//	{
//		//极端情况，比如i=len-1会怎么样？
//		//似乎里面那层循环不会走，因此无事发生
//		if (isnum(a[i])==1)
//		{
//			for (int j = i+1; i < len; j++)
//			{
//				if (isnum(a[j]) == 0)
//				{
//					inversearr(a,i, j-1);
//					i = j;
//					break;
//				}
//
//			}
//				
//		}
//
//	}
//
//
//	cout << a;
//	return 0;
//}