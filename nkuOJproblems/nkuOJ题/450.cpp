//#include<iostream>
//using namespace std;
// 
////24min，第一次用new来整多维数组，不太熟练
////然后就是有一个错误，找到并修正大概用了其中的5min
//
//
////0 means not triangle
//bool check(int* p)
//{
//	int a = p[0] ;
//	int b = p[1];
//	int c = p[2];
//	bool check = ((a + b - c > 0) && (b + c - a > 0) && (c + a - b > 0));
//	return check;
//
//}
//
//void task(int* p)
//{
//	int a = p[0]* p[0];
//	int b = p[1]* p[1];
//	int c = p[2]* p[2];
//
//	if ((a + b == c) || (b + c == a) || (c + a == b))
//	{
//		cout << "Yes" << endl;
//	}
//	else
//	{
//		cout << "No" << endl;
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	int** p = new int*[n];
//	for (int i = 0; i < n; i++)
//	{
//		p[i] = new int[3];
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> p[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		
//		if (check(p[i]) == 0)
//		{
//			cout << "Error"<<endl;
//		}
//		else
//		{
//			task(p[i]);
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		delete[](p[i]);
//		
//	}
//	delete[]p;
//
//
//	return 0;
//}