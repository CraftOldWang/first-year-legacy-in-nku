//#include<iostream>
//#include<string>
//using namespace std;
//
// 用时36min
// 
////这题目咋这么坑爹嘞，行与行之间有换行确实好，但是一般的做法
////最后一行也会有换行，除非特别想办法去避免。
////但是不这样做就全PE了。。。题目还不说明
////不过PE确实也算通过...没什么大不了。
//
////++相当于i=i+1
////但是我以为i+2就是i=i+2了靠，然后就死循环wtf
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