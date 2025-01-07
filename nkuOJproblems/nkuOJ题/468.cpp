//#include<iostream>
//using namespace std;
//
////0表示有重复，1表示无重复
//int hassamelet(char a[], int preidx, int sufidx)
//{
//	for (int i = preidx; i < sufidx; i++)
//	{
//		for (int j = i + 1; j <= sufidx; j++)
//		{
//			if (a[i] == a[j])
//			{
//				return 0;
//			}
//		}
//		
//	}
//	return 1;
//}
//
//void findmaxsubstr(char a[], int len)
//{
//	int maxlen = 0;
//	for (int i = 0; i < len; i++)
//	{
//		int flag = 1;
//		for(int j=0;flag==1&&j<len;j++)
//		{
//			flag = hassamelet(a, i, j);
//			if (j-i+1 > maxlen&&flag==1)
//			{
//				maxlen = j-i+1;
//			}
//		}
//	}
//	cout << maxlen;
//}
//
//int main()
//{
//	char carr[101] = { 0 };
//	cin.getline(carr, 100);
//	int length = 0;
//	for (int i = 0; i < 101; i++)
//	{
//		if (carr[i] != '\0')
//		{
//			length++;
//		}
//	}
//	findmaxsubstr(carr, length);
//
//	return 0;
//}