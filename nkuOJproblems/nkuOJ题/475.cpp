//#include<iostream>
//using namespace std;
// 
////oj�ƺ��ܼ���Ƿ����'\0'
////�����������������˵�'\0'�Ļ�����ȫwa
//// �����˾�ȫac
////
//
//
////1�ǣ�0����
//bool isnum(char a)
//{
//	if (a >= '0' && a <= '9')
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//bool isupletter(char a)
//{
//	if(a>='A'&&a<='Z')
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//bool islowletter(char a)
//{
//	if (a >= 'a' && a <= 'z')
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
//
//int main()
//{
//	char a[52] = { 0 };
//	cin >> a;
//	for (int i = 0; i < 50; i++)
//	{
//		if (isnum(a[i])==1)
//		{
//			a[i] = '\0';
//		}
//		else if (isupletter(a[i]) == 1)
//		{
//			a[i] = a[i] + 'a' - 'A';
//		}
//		else if (islowletter(a[i]) == 1)
//		{
//			a[i] = a[i] + 'A' - 'a';
//		}
//	}
//	for(int i=0;i<50;i++)
//	{
//		if(a[i]!='\0')
//		{
//			cout << a[i];
//		}
//		
//	}
//	return 0;
//}