//#include<iostream>
//using namespace std;
//
////大概20min，忘记计时了
////写得时候又把内层循环写成i了，结果有一个要用到外层循环的i的变量....
//// 以及复制的时候忘记把flag1改成flag2了
//// 以及漏了写读取输入的那n个int的部分
//// 这些都导致需要花时间来调试检查错误.
////
// 
//int main()
//{
//	int n;
//	int a[10000] = { 0 };
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		int flag1 = 0;
//		int flag2 = 0;
//		for(int j=1;j<=a[i];j=j+2)
//		{
//			if (flag1 == 0)
//			{
//				cout << 1;
//				flag1 = 1;
//			}
//			else
//			{
//				cout << " " << j;
//			}
//			
//			
//		}
//		cout << endl;
//
//		for (int j = 2; j <= a[i]; j = j + 2)
//		{
//			if (flag2 == 0)
//			{
//				cout << 2;
//				flag2 = 1;
//			}
//			else
//			{
//				cout << " " << j;
//			}
//
//
//		}
//		cout << endl;
//
//		if (i != n - 1)
//		{
//			cout << endl;
//		}
//
//	}
//	
//	
//	return 0;
//}