////题目描述
////给定正整数n，按如下规则输出对称倒三角形：第一行由2n个* 组成，之后每行都比上一行减少2个* ，直到只剩下2个为止（具体见以下样例中的图示）。
////
////输入格式
////正整数n＜30。
////
////输出格式
////输出相应图形。
//#include<iostream>
//using namespace std;
// 
////easy 9min
//
//void coutstarandspace(int n, int cur)
//{
//	for (int i = 0; i < n-cur; i++)
//	{
//		cout << " ";
//	}
//	for (int i = 0; i < (2 * cur); i++)
//	{
//		cout << "*";
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	int cur = n;
//	while (cur > 0)
//	{
//		coutstarandspace(n,cur);
//		cout << endl;
//		cur--;
//	}
//
//
//	return 0;
//}