//////#include<iostream>
//////using namespace std;
//////
//////
//////template <typename T>
//////void kswap(T &a, T &b)
//////ע�ⳣ�������ֿ��ܱ�����ĺ���ռ���ˡ���swaptm����7������
//////�һ���Ϊģ��Ĳ�ͬҲ�����أ�����ˣ���ʵ�������кܶ�����б�ͬ�Ķ��壡
//////{
//////	T temp = a;
//////	a = b;
//////	b = temp;
//////}
//////
//////
//////
//////template <typename T>
//////void selectsort(T arr[], int len)
//////{
//////	for(int i=0;i<len;i++)
//////	{
//////		int maxposi = i;
//////		for (int j = i+1; j < len; j++)//���ø��Լ�������+1
//////		{
//////			if (arr[j] > arr[maxposi])
//////			{
//////				maxposi = j;
//////			}
//////		}
//////		if (maxposi != i)
//////		{
//////
//////			kswap<a>(arr[maxposi], arr[i]);//may have trouble
//////		}
//////	}
//////	
//////}
//////
//////template<typename T>
//////void printarr(T arr[], int len)
//////{
//////	for (int i = 0; i < len; i++)
//////	{
//////		cout << arr[i] << "  ";
//////	}
//////	cout << endl;
//////}
//////	
//////
//////void test01()
//////{
//////	char arrchar[9] = "hellowor";
//////	int length = sizeof(arrchar) / sizeof(arrchar[0]);
//////	selectsort(arrchar, length);
//////	printarr(arrchar, length);
//////}
//////
//////void test02()
//////{
//////	int arrint[10] = { 1,55,3,8,54,36,75,43,87,23 };
//////	int length = sizeof(arrint) / sizeof(arrint[0]);
//////	selectsort(arrint, length);
//////	printarr(arrint, length);
//////}
//////int main()
//////{
//////	test01();
//////	test02();
//////	
//////}

//������ǰһ��д�ģ������Ǳ��Ρ�����һ��д�����أ�

//#include<iostream>
//using namespace std;
//
//template<typename T>
//void Myswap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<typename T>
//void Mysort(T arr[],int len)
//{
//	for (int i = 0; i < len-1; i++)
//	{
//		int imax = i;
//		for (int j = i+1; j < len;j++)
//		{
//			
//			if (arr[j] > arr[imax])
//			{
//				imax = j;
//			}
//
//		}
//		if(imax!=i)
//		{
//			Myswap<>(arr[imax], arr[i]);
//		}
//
//
//	}
//
//}
//
//template<typename T>
//void printarr(T a[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (i == 0)
//		{
//			cout << a[i];
//		}
//		else
//		{
//			cout << "  " << a[i];
//		}
//		
//
//
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int arr1[] = { 1,4,3,6,37,46,23,67,-1,3253 };
//	char arr2[] = "bafedc";
//	int	len1 = sizeof(arr1) / sizeof(int);
//	int	len2 = sizeof(arr2) / sizeof(char);
//
//	Mysort(arr1, len1);
//
//	Mysort(arr2, len2);
//
//	printarr(arr1, len1);
//
//	printarr(arr2, len2);
//	
//	return 0;
//}
//
