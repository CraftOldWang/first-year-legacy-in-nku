//#include<iostream>
//using namespace std;
// 
// //��Ŀ����N.�ַ����������2
// 
////20min+1h13min+10min
// 
// OJƽ̨����'\0'
// ûע�⵽����������Ҳ�������
//// 
//
//
////1�Ļ���end
//bool isEND(char a[])
//{
//	if (a[0] == 'E' && a[1] == 'N' && a[2] == 'D'&&a[3]=='\0')
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
////1�Ļ���50
//bool check50(char a[])
//{
//	int len = 0;
//	for (int i = 0;; i++)
//	{
//		if (a[i] == '\0')
//		{
//			len = i;
//			break;
//		}
//	}
//	if(len>50)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//	
//
//}
//
//void swap(char &a, char &b)
//{
//	char temp = a;
//	a = b;
//	b = temp;
//
//}
//
//void inversechar(char a[], int len)
//{
//	for (int i = 0;i<len-1-i ; i++)
//	{
//		swap(a[i], a[len - 1 - i]);
//	}
//}
//
//int  deleterepeat(char a[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (a[i] == a[j])
//			{
//				a[i] = '\0';
//			}
//		}
//	}
//
//	for (int i = 0; i < len; i++)
//	{
//		if (a[i] == '\0')
//		{
//			for (int j = i; j < len-1; j++)
//			{
//				a[j] = a[j + 1];
//				
//			}
//			len--;
//		}
//	}
//
//	return len;
//
//}
//
//void notrepeatprintfromend(char a[])
//{
//	
//	int len = 0;
//	for (int i = 0;; i++)
//	{
//		if (a[i] == '\0')
//		{
//			len = i;
//			break;
//		}
//	}
//	inversechar(a, len);
//
//	int remainlen = deleterepeat(a, len);
//	
//
//	for (int i = 0; i < remainlen; i++)
//	{
//		if(a[i]!='\0')
//		{
//			cout << a[i];
//		}
//		
//	}
//	
//}
//
//
//
//int main()
//{
//	int num = 0;
//	char a[1000][100] = { 0 };
//	for (int i = 0;; i++)
//	{
//		cin.getline(a[i], 100);
//		if (isEND(a[i]) == 1)
//		{
//			//num�ǲ�����end���ַ�������
//			num = i;
//			break;
//		}
//	}
//
//	for (int i = 0; i < num; i++)
//	{
//		if (check50(a[i]) == 1)
//		{
//			cout << "OUT" ;
//		}
//		else
//		{
//			notrepeatprintfromend(a[i]);
//		}
//		if (i != num - 1)
//		{
//			cout << endl;
//		}
//	}
//	
//	return 0;
//}