//题目描述：
//给定两个m阶矩阵（m <= 10）A和B，按照如下要求对矩阵进行处理后得出运算结果。
//
//1、 对矩阵A和B中的素数元素加1，再求矩阵A和B的和C1，即C1 = A + B。
//
//2、 对矩阵A和B中的奇数元素减1，再求矩阵A和B的差C2，即C2 = A - B。
//
//3、 对矩阵A和B中的偶数元素乘2，再求矩阵A和B的积C3，即C3 = A * B。
//
//输入：
//第一行一个整数m（m <= 10），代表矩阵A和B的阶数。接下来有2 * m行，每行有m个整数，整数之间用空格分隔，分别代表矩阵A和B。
//
//输出：
//按照题目要求输出运算后的矩阵C1、C2、C3，共3 * m行，每行m个元素，元素之间用空格分隔，行尾无空格。
//
//样例输入：
//3
//1 2 3
//4 5 6
//7 8 9
//2 3 4
//5 6 7
//8 9 10
//样例输出：
//4 7 8
//10 12 14
//16 17 19
//- 2 0 - 2
//0 - 2 0
//- 2 0 - 2
//72 78 96
//249 192 339
//252 294 348

//这题错在c++里负奇数模2等于-1而不是1,因此错了
// 另外一方面,应该拿普遍的东西去判断,比如说这里应该用模完是否等于0而不是去看
// 是否等于1
//但是没有检查出来,一方面是积累不够
//一方面是利用输出来检查的能力不够以及不会自己找刁钻的数据测试
//(学校的电脑很垃圾,所以不太好调试)



//#include<iostream>
//using namespace std;
//
//void inputmatrixfromatob(int** a, int** b, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		b[i] = new int[m];
//		for (int j = 0; j < m; j++)
//		{
//			b[i][j] = a[i][j];
//		}
//	}
//
//}
//
////懒得delete了，有问题再改
//
////最后一行没回车，记得main里手动控制
//void printmatrix(int** a, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		if (i != 0)
//		{
//			cout << endl;
//		}
//		for (int j = 0; j < m; j++)
//		{
//			if (j == 0)
//			{
//				cout << a[i][j];
//			}
//			else
//			{
//				cout << " " << a[i][j];
//			}
//
//		}
//
//	}
//}
//
//
//
//bool isprime(int n)//1 is ,0not
//{
//	if (n <= 1)
//	{
//		return 0;
//	}
//	else
//	{
//		for (int i = 2; i <= n / 2; i++)
//		{
//			if (n % i == 0)
//			{
//				return 0;
//			}
//		}
//		return 1;
//	}
//}
//
//void primeadd1(int** a, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (isprime(a[i][j]) == 1)
//			{
//				a[i][j] += 1;
//			}
//		}
//	}
//
//}
//
//
//void oddminus1(int** a, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (a[i][j] % 2 == 1)
//			{
//				a[i][j] -= 1;
//			}
//		}
//	}
//}
//
//void eventimes2(int** a, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (a[i][j] % 2 == 0)
//			{
//				a[i][j] *= 2;
//			}
//		}
//	}
//}
//
//
//
//void addAandBtoC(int** a, int** b, int** c, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		c[i] = new int[m];
//		for (int j = 0; j < m; j++)
//		{
//			c[i][j] = a[i][j] + b[i][j];
//		}
//	}
//
//}
//
//void AminusBtoC(int** a, int** b, int** c, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		c[i] = new int[m];
//		for (int j = 0; j < m; j++)
//		{
//			c[i][j] = a[i][j] - b[i][j];
//		}
//	}
//}
//
//void AtimesBtoC(int** a, int** b, int** c, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		c[i] = new int[m];
//		for (int j = 0; j < m; j++)
//		{
//			//每次用完都有初始化所以没关系
//			int sigmarawcol = 0;
//			for (int k = 0; k < m; k++)
//			{
//				sigmarawcol += a[i][k] * b[k][j];
//			}
//			c[i][j] = sigmarawcol;
//		}
//	}
//
//
//}
//
//
//
//void taskc1(int** A, int** B, int m)
//{
//	int** a = new int* [m];
//	inputmatrixfromatob(A, a, m);
//	int** b = new int* [m];
//	inputmatrixfromatob(B, b, m);
//
//	primeadd1(a, m);
//	primeadd1(b, m);
//
//	int** c = new int* [m];
//	addAandBtoC(a, b, c, m);
//
//	printmatrix(c, m);
//
//
//}
//
//void taskc2(int** A, int** B, int m)
//{
//	int** a = new int* [m];
//	inputmatrixfromatob(A, a, m);
//	int** b = new int* [m];
//	inputmatrixfromatob(B, b, m);
//
//	oddminus1(a, m);
//	oddminus1(b, m);
//
//	int** c = new int* [m];
//	AminusBtoC(a, b, c, m);
//
//	printmatrix(c, m);
//
//
//
//}
//
//void taskc3(int** A, int** B, int m)
//{
//	int** a = new int* [m];
//	inputmatrixfromatob(A, a, m);
//	int** b = new int* [m];
//	inputmatrixfromatob(B, b, m);
//
//	eventimes2(a, m);
//	eventimes2(b, m);
//
//	int** c = new int* [m];
//	AtimesBtoC(a, b, c, m);
//
//	printmatrix(c, m);
//
//}
//
//
//int main()
//{
//	int m = 0;
//	cin >> m;
//	int** a = new int* [m];
//	for (int i = 0; i < m; i++)
//	{
//		a[i] = new int[m];
//		for (int j = 0; j < m; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//
//	int** b = new int* [m];
//	for (int i = 0; i < m; i++)
//	{
//		b[i] = new int[m];
//		for (int j = 0; j < m; j++)
//		{
//			cin >> b[i][j];
//		}
//	}
//
//
//	//注意不能修改ab里的元素，下一个task要用
//	taskc1(a, b, m);
//	cout << endl;
//	taskc2(a, b, m);
//	cout << endl;
//	taskc3(a, b, m);
//
//
//
//
//	return 0;
//}