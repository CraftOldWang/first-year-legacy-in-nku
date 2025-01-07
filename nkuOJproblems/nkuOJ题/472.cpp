	//#include<iostream>
	//using namespace std;
 //
	////30min，这次甚至考虑不全面了，比较字典序，比出大小了就应该直接
	//// 返回，我还比下一位，导致最后是乱换，没有做到要做的事.
	//// 这个错误查了比较久
	////


	////1表示a大于b  注意字符数组长度是21
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