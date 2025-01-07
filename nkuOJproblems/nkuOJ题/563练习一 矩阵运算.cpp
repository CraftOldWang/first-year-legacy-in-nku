//#include<iostream>
//using namespace std;
// 
////先写一个很丑陋的,然后再用函数写
//
////呃,但耦合程度还是太高了
//
//void inputmatrix(int** a,int row,int column)
//{
//
//	for (int i = 0; i < row; i++)
//	{
//		a[i] = new int[column];
//	}
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < column; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//}
//
//void addmatrix(int** a, int** b, int** c,int row,int column)
//{
//	for (int i = 0; i < row; i++)
//	{
//
//		c[i] = new int[column];
//		for (int j = 0; j < column; j++)
//		{
//			c[i][j] = a[i][j] + b[i][j];
//		}
//	}
//
//
//}
//
//void printmatrix(int** a, int row, int column)
//{
//	for (int i = 0; i < row; i++)
//	{
//
//		for (int j = 0; j < column; j++)
//		{
//			if (j == 0)
//			{
//				cout << a[i][j];
//			}
//			else
//			{
//				cout << " " << a[i][j];
//			}
//		}
//		if (i < row - 1)
//		{
//			cout << endl;
//		}
//
//	}
//
//}
//
//void deletematrix(int** a, int row)
//{
//	for (int i = 0; i < row; i++)
//	{
//		delete[] a[i];
//	}
//	delete a;
//}
//
//int main()
//{
//	int row, column;
//	cin>>row >> column;
//
//	int** a = new int* [row];
//	inputmatrix(a, row, column);
//	
//	int** b = new int* [row];
//	inputmatrix(b, row, column);
//		
//	int** c = new int* [row];
//	addmatrix(a, b, c, row, column);
//
//	printmatrix(c, row, column);
//
//
//	deletematrix(a, row);
//	deletematrix(b, row);
//	deletematrix(c, row);
//
//
//	return 0;
//}