//#include<iostream>
//using namespace std;
//
////40min������������
////��˫ָ��Ū�ģ���������Ų��ܲ��������������ͬһ��˼·���Ļ���
////д��ʱ��û�����ж���ո�����Σ���oj��ɴ��
// �Լ���ʼ�滮��ʱ��û����' '��'\0'����˼·��Щ���⣬�������˺�Щʱ��
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