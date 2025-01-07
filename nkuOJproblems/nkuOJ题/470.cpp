//题目描述
//二分查找算法：对于一个有序的数组，它的搜索过程从数组的中间元素开始，如果中间元素正好是要查找的元素，则搜索过程结束；如 果某一特定元素大于或者小于中间元素，则在数组大于或小于中间元素的那一半中查找，而且跟开始一样从中间元素开始比较。如果 在某一步骤数组为空，则代表找不到。这种搜索算法每一次比较都使搜索范围缩小一半。请编写程序实现在一个数组中完成查找（推 荐使用二分查找)。
//
//输入格式
//输入有三行，第一行为数组元素个数N(N的范围是1到10)，第二行为N个整数，作为数组元素（这些元素可能是有序的，也可能是 无序的，但没有重复元素)，第三行为一个整数number, 表示要查找的元素。
//
//输出格式
//输出为两行：
//
//第一行为对原始数组排序（升序）后的数组，用空格隔开：
//
//第二行格式为“初始状态是否找到找到位置”，中间用空格隔开。其中，
//
//1、“初始状态为“ordered“和unordered(分别表示输入的数组是否有序)
//
//2、“是否找到为“1和“0”(分别表示能或不能在数组中找到number) :
//
//	3、“找到位置”为在有序数组中找到的具体位置（从位置0开始），是一个数字，如果找不到值为 - 1.（输入的数组无序的话你就要先 排序，升序)

//44min

//#include<iostream>
//using namespace std;
// 
////我没考虑到极端情况，n=2且找不到，这样的话，我原来用的判断标准
////(back-front)!=1就会没用，因为back-front==0，会一直循环
////要考虑极端情况，极大或者极小（好像说了跟没说一样)
//
//
////0为有序,1为无序
//int bubblesort(int a[],int len)
//{
//	int flag = 0;
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				flag = 1;
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//
//	return flag;
//}
//
////-1找不到，其他是位置
//int binarysearch(int a[], int len,int wanted)
//{
//	//0与len-1之间
//	//注意序数是下标+1
//
//	int front = 0;
//	int back = len - 1;
//	if (a[front] == wanted)
//	{
//		return front ;
//	}
//	else if (a[back] == wanted)
//	{
//		return back ;
//	}
//	else
//	{ 
//		while((back-front)>1)
//		{
//			int middle = (front + back) / 2;
//			if (a[middle] == wanted)
//			{
//				return middle;
//			}
//			else if (a[middle] > wanted)
//			{
//				back = middle;
//			}
//			else
//			{
//				front = middle;
//			}
//
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	int arr[10] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	int wanted = 0;
//	cin >> wanted;
//
//	int isordered = bubblesort(arr,n);
//
//	int position = binarysearch(arr,n,wanted);
//
//
//	for (int i = 0; i < n; i++)
//	{
//		if (i == 0)
//		{
//			cout << arr[i];
//		}
//		else
//		{
//			cout << " " << arr[i];
//		}
//	}
//	cout << endl;
//
//	if (isordered == 0)
//	{
//		cout << "ordered ";
//	}
//	else
//	{
//		cout << "unordered ";
//	}
//
//
//	if (position == -1)
//	{
//		cout << "0 ";
//		cout << -1;	
//	}
//	else
//	{
//		cout << "1 ";
//		cout << position;
//	}
//
//	return 0;
//}