//��Ŀ����
//���ֲ����㷨������һ����������飬�����������̴�������м�Ԫ�ؿ�ʼ������м�Ԫ��������Ҫ���ҵ�Ԫ�أ����������̽������� ��ĳһ�ض�Ԫ�ش��ڻ���С���м�Ԫ�أ�����������ڻ�С���м�Ԫ�ص���һ���в��ң����Ҹ���ʼһ�����м�Ԫ�ؿ�ʼ�Ƚϡ���� ��ĳһ��������Ϊ�գ�������Ҳ��������������㷨ÿһ�αȽ϶�ʹ������Χ��Сһ�롣���д����ʵ����һ����������ɲ��ң��� ��ʹ�ö��ֲ���)��
//
//�����ʽ
//���������У���һ��Ϊ����Ԫ�ظ���N(N�ķ�Χ��1��10)���ڶ���ΪN����������Ϊ����Ԫ�أ���ЩԪ�ؿ���������ģ�Ҳ������ ����ģ���û���ظ�Ԫ��)��������Ϊһ������number, ��ʾҪ���ҵ�Ԫ�ء�
//
//�����ʽ
//���Ϊ���У�
//
//��һ��Ϊ��ԭʼ�����������򣩺�����飬�ÿո������
//
//�ڶ��и�ʽΪ����ʼ״̬�Ƿ��ҵ��ҵ�λ�á����м��ÿո���������У�
//
//1������ʼ״̬Ϊ��ordered����unordered(�ֱ��ʾ����������Ƿ�����)
//
//2�����Ƿ��ҵ�Ϊ��1�͡�0��(�ֱ��ʾ�ܻ������������ҵ�number) :
//
//	3�����ҵ�λ�á�Ϊ�������������ҵ��ľ���λ�ã���λ��0��ʼ������һ�����֣�����Ҳ���ֵΪ - 1.���������������Ļ����Ҫ�� ��������)

//44min

//#include<iostream>
//using namespace std;
// 
////��û���ǵ����������n=2���Ҳ����������Ļ�����ԭ���õ��жϱ�׼
////(back-front)!=1�ͻ�û�ã���Ϊback-front==0����һֱѭ��
////Ҫ���Ǽ��������������߼�С������˵�˸�û˵һ��)
//
//
////0Ϊ����,1Ϊ����
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
////-1�Ҳ�����������λ��
//int binarysearch(int a[], int len,int wanted)
//{
//	//0��len-1֮��
//	//ע���������±�+1
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