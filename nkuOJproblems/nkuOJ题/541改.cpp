//#include<iostream>
//using namespace std;
//
//
////���ԭ�棬���ǰ�����������ˣ��������������������ÿ����������󶼻����һ��
//
//void NoRepeatPrintint(int a[], int len)
//{
//
//	for (int i = 0; i < len; i++)
//	{
//		//ֻ����Ԫ��֮���ÿո�Ļ����Ͷ��ڵ�һ��Ԫ�����⴦��
//		if (i == 0)
//		{
//			cout << a[i];
//
//		}
//		else if (a[i] != a[i - 1])
//		{
//			cout << " " << a[i];
//
//		}
//	}
//	cout << endl;
//
//}
//
//void sortint(int a[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//
//		}
//
//	}
//
//}
//
//int strtonum(char carr[], int narr[])
//{
//	int ni = 0;
//	//��ָ�֮�������
//	int curnum = 0;
//	int flag = 0;
//	//flag=1��������������
//
//	for (int i = 0;; i++)
//	{
//		if (carr[i] == '\0')
//		{
//			if (flag == 1)
//			{
//				narr[ni] = curnum;
//				ni++;
//				curnum = 0;
//				flag = 0;
//			}
//			return ni;
//
//		}
//		//��������жϿ�����һ������������̫����
//		if (!(carr[i] == '5' ||
//			(carr[i] >= 'A' && carr[i] <= 'Z') ||
//			(carr[i] >= 'a' && carr[i] <= 'z')))
//		{
//			flag = 1;
//			curnum *= 10;
//			curnum += carr[i] - '0';
//		}
//		else
//		{
//			if (flag == 1)
//			{
//				narr[ni] = curnum;
//				ni++;
//				curnum = 0;
//				flag = 0;
//			}
//
//		}
//
//
//	}
//
//
//
//
//
//
//}
//
//void finishtask(char input[])
//{
//
//	int allnumber[500] = { 0 };
//	int stramount = strtonum(input, allnumber);
//	sortint(allnumber, stramount);
//	NoRepeatPrintint(allnumber, stramount);
//
//}
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	char inputstr[100][1000] = { '\0' };
//	for (int i = 0; i < n; i++)
//	{
//		cin >> inputstr[i];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		finishtask(inputstr[i]);
//	}
//
//	return 0;
//}