	//#include<iostream>
	//using namespace std;
 //
	////30min������������ǲ�ȫ���ˣ��Ƚ��ֵ��򣬱ȳ���С�˾�Ӧ��ֱ��
	//// ���أ��һ�����һλ������������һ���û������Ҫ������.
	//// ���������˱ȽϾ�
	////


	////1��ʾa����b  ע���ַ����鳤����21
	//bool isAgreaterthanB(char* p1,char*p2 )
	//{
	//	for (int i = 0; i < 20; i++)
	//	{
	//		if (int(*(p1+i) - *(p2+i)) > 0)
	//		{
	//			return 1;
	//		}
	//		else if (int(*(p1 + i) - *(p2 + i)) < 0)
	//		{
	//			return 0;
	//		}
	//	}
	//	return 0;
	//}

	//void sortname(char* p[], int len)
	//{
	//	for (int i = 0; i < len - 1; i++)
	//	{
	//		for (int j = 0; j < len - 1 - i; j++)
	//		{
	//			if (isAgreaterthanB(p[j], p[j + 1])==1)
	//			{
	//				char* temp = p[j];
	//				p[j] = p[j + 1];
	//				p[j + 1] = temp;
	//			}
	//		}
	//	}
	//}

	//void printname(char* p[], int len)
	//{
	//	for (int i = 0; i < len; i++)
	//	{
	//		cout << p[i] << endl;
	//	}
	//}

	//int main()
	//{
	//	int n;
	//	cin >> n;
	//	char* p[30] = {0};
	//	for (int i = 0; i < n; i++)
	//	{
	//		p[i] = new char[21];
	//		cin >> p[i];
	//	}

	//	sortname(p,n);
	//	printname(p, n);
	//	return 0;
	//}