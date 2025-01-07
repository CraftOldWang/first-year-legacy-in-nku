//#include<iostream>
//using namespace std;
//
////40min，折腾死我了
////用双指针弄的，如果不会大概不能拆出来作函数（用同一种思路做的话）
////写的时候没考虑有多个空格的情形，被oj薄纱了
// 以及开始规划的时候没分清' '与'\0'导致思路有些问题，修正花了好些时间
//
//void reversechar(char* pa, char* pb)
//{
//	char* p1 = pa;
//	char* p2 = pb - 1;
//	while (p1 < p2)
//	{
//		char temp = *p1;
//		*p1 = *p2;
//		*p2 = temp;
//		p1++;
//		p2--;
//	}
//}
//
//
//
//int main()
//{
//	char arr[40] = { 0 };
//	cin.getline(arr, 40);
//	int len;
//	for (int i = 39; ; i--)
//	{
//		if (arr[i] != '\0')
//		{
//			len = i + 1;
//			break;
//		}
//	}
//
//	char* p = arr;
//	char* p1 = p;
//	while (1)
//	{
//		if (*p1 == '\0')
//		{
//			reversechar(p, p1);
//			break;
//		}
//		else if (*p1 == ' ')
//		{
//			reversechar(p, p1);
//			p = p1 + 1;
//			if (*p == '\0')
//			{
//				break;
//			}
//		}
//		p1++;
//	}
//
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i];
//	}
//
//
//
//	return 0;
//}