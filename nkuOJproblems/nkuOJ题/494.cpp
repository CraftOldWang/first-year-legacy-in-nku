//#include<iostream>
//using namespace std;
// 
////由于我不会传二维数组，所以不知怎么把回转输出抽出来当函数
//
////数组从0开始，这点很困扰，虽然知道是偏移量，但有时会跟行数列数搞混，
////做这题时就搞混了，后面那坨判断里的（xx-1）就是修改痕迹。
////后面那坨判断写得非常不易读，自己检查一遍都费劲，不知道怎样优化....
////这些题都没有答案，有点不爽：主要写出来了也看不出哪里能提升；其次可能养成坏习惯；而且这样再怎么搞也是
////把已知的东西变得熟练，学不到新的技巧（自己想到的技巧一般比较丑陋，
//// 泛用性也比较差（一般是对当前所需设计，而且考虑不一定周全））
//
//
////1h.16min
//// 还真有一次ac的啊
////疑问，难道数组自动知道自己是几维数组？呃确实不行，而且我不知数组怎么工作
//void inputarr(int a[], int n)
//{
//
//	for (int j = 0; j < n; j++)
//	{
//		cin >> a[j];
//	}
//}
//
//void snakeprint(int a[], int row, int n)
//{
//	if (row % 2 == 0)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (row == 0 && i == 0)
//			{
//				cout << a[i];
//			}
//			else
//			{
//				cout << " " << a[i];
//			}
//		}
//	}
//	else
//	{
//		for (int i = n - 1; i >= 0; i--)
//		{
//			cout << " " << a[i];
//		}
//	}
//}
//
//
//
//
//int main()
//{
//	int a[10][10] = { 0 };
//	int m, n;
//	cin >> m >> n;
//	//每行当成一个数组来整。。。但是要整m次了；不知怎么传二维数组
//
//	for (int i = 0; i < m; i++)
//	{
//		inputarr(a[i], n);
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		snakeprint(a[i], i,n);
//		
//	}
//	cout << endl;
//
//
//	{
//		int row = m, column = n;
//		int Rbarrier = 0, Cbarrier = 0;
//		int R = 0, C = 0;
//
//		//注意考虑边界，最内部等极端情况
//		//用了计数器来在全部输出时停下来，从而不用去根据最后那个点有的特征写个判断（真没想到有什么特征）。
//	
//		int counter = 0;
//		while (1)
//		{
//			
//			if (counter == row* column)
//			{
//				break;
//			}
//			if (R == 0&&C == 0)
//			{
//				cout << a[R][C];
//				C++;
//				counter++;
//			}
//			else if (R  == Rbarrier&&C!=(column-1)-Cbarrier)
//			{
//				cout << " " << a[R][C];
//				C++;
//				counter++;
//			}
//			else if (C ==( column-1) - Cbarrier && R  != (row-1)- Rbarrier)
//			{
//				cout << " " << a[R][C];
//				R++;
//				counter++;
//			}
//			else if (R  ==( row-1) - Rbarrier && C != Cbarrier)
//			{
//				cout << " " << a[R][C];
//				C--;
//				counter++;
//			}
//			else if (C == Cbarrier && R - 1 != Rbarrier)
//			{
//				cout << " " << a[R][C];
//				R--;
//				counter++;
//			}
//			else if (C == Cbarrier && R - 1 == Rbarrier)
//			{
//				cout << " " << a[R][C];
//				C++;
//				counter++;
//				Rbarrier++;
//				Cbarrier++;
//			}
//
//
//		}
//	}
//	
//
//
//	return 0;
//}