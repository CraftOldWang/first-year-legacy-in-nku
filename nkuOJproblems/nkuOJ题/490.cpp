//#include<iostream>
//#include<string>
//using namespace std;
//
// ��ʱ36min
// 
////����Ŀզ��ô�ӵ��ϣ�������֮���л���ȷʵ�ã�����һ�������
////���һ��Ҳ���л��У������ر���취ȥ���⡣
////���ǲ���������ȫPE�ˡ�������Ŀ����˵��
////����PEȷʵҲ��ͨ��...ûʲô���ˡ�
//
////++�൱��i=i+1
////��������Ϊi+2����i=i+2�˿���Ȼ�����ѭ��wtf
//void printodd(char s[],int len)
//{
//	for (int i = 0; i < len; i+=2)
//	{
//		cout << s[i];
//	}
//	
//}
//
//int findstringlen(char s[])
//{
//	int len = 0;
//	for (int i = 0;; i++)
//	{
//		if (s[i] != '\0')
//		{
//			len++;
//		}
//		else
//		{
//			return len;
//		}
//	}
//}
//
//void Lspin(char s[],int len,int times)
//{
//	for (int i = 0; i < times; i++)
//	{
//		for (int j = 0; j < len-1; j++)
//		{
//			char temp = s[j];
//			s[j] = s[j + 1];
//			s[j + 1] = temp;
//		}
//	}
//}
//
//void Rspin(char s[], int len, int times)
//{
//	for (int i = 0; i < times; i++)
//	{
//		for (int j = len-1; j >0; j--)
//		{
//			char temp = s[j];
//			s[j] = s[j - 1];
//			s[j - 1] = temp;
//		}
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		char s[20];
//		char m;
//		int	num;
//		cin >> s;
//		cin >> m >> num;
//		int len = findstringlen(s);
//		if (m == 'L')
//		{
//			Lspin(s, len,num);
//			printodd(s,len);
//		}
//		else if (m == 'R')
//		{
//			Rspin(s, len,num);
//			printodd(s,len);
//		}
//		else
//		{
//			printodd(s,len);
//		}
//		if (i != n - 1)
//		{
//			cout << endl;
//		}
//	}
//
//
//	return 0;
//}