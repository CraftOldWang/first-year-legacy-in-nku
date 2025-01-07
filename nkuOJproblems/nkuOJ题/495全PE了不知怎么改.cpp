//#include<iostream>
//using namespace std;
//
// 花了2.5小时
// 
////关于耦合与解耦合
////我这题利用了只需要输出，而不用管输出是怎么实现的这个特点
////省下了多创几个数组的空间
////但是这导致输出的时候不是把一个数组里的东西输出来，而是
////有选择地输出，而每个函数的选择的需求不一样（double通过调用int的来实现的
////所以。。没关系，不过char就有关系了）
////导致输出与对应的函数耦合了
////没办法把输出单独抽出来当一个函数
////从而得写两遍，而且调试的时候找里面的问题要连着函数的其他部分一起看，
////增大了调试负担。
////解耦合大概就是尽量把需求细分，抽出共同点然后再挨个实现；
////把需求拆开还是需要能力的。
//
////ascll表只有256个东西，也就是说char type只有256个东西，超过了256又会
////从'\0'开始循环
//
//template<typename T>
//void inputarr(T a[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cin >> a[i];
//	}
//}
//
////只是让偶数没用，没有删除他们
//void selectodd(int a[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if ((a[i]%2) == 0)
//		{
//			a[i] = 0;
//		}
//	}
//}
//
////冒泡不熟练，居然写错了
//void sortodd(int a[], int len)
//{
//	for (int i = 0; i < len-1; i++)
//	{
//		for (int j = 0; j < len-1-i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void rounding(int arr[],double a[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		arr[i] = (int)(a[i] + 0.5);
//	}
//	
//}
//
//void countchar(int count[], char a[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		count[(int)a[i]]++;
//	}
//}
//
//int findoutlen(char a[])
//{
//	int len=0;
//	//i<1000是对题目中这个特殊字符串才行，，任意长度的我也不知怎么处理
//	for (int i = 0;i<1000; i++)
//	{
//		if (a[i] != '\0')
//		{
//			len++;
//		}
//		else
//		{
//			return len;
//		}
//	}
//}
//
//void OddFilter(int a[], int len)
//{
//	selectodd(a,len);
//	sortodd(a, len);
//	//因为刚好把0都放到前面了，下面用len-1才有用
//	//因此selectodd与sortodd都得是对1000而不是len的长度用
//	//第二行注释错误的，我知道长度，所以即使右边一堆
//	//0，我也可以让指标不会经过他们
//	//这个嵌套的第四层，if (i = (len - 1))又把==写成=了！！！
//	//出现负数也没关系，因为我只过滤了0
//	int flag = 0;
//	for (int i=0; i < len; i++)
//	{
//		if (a[i] != 0)
//		{
//			cout << a[i];
//			i++;
//			flag++;
//			for (; i < len; i++)
//			{
//				if (a[i] != 0)
//				{
//					cout <<" "<< a[i];
//					flag++;
//				}
//				
//			}
//			
//		}
//	}
//	if (flag == 0)
//	{
//		cout << "No Odd!";
//
//	}
//	cout << endl;
//}
//
//void OddFilter(double a[], int len)
//{
//	int Iarr[1000] = { 0 };
//	rounding(Iarr,a,len);
//	OddFilter(Iarr,len);
//}
//
//void OddFilter(char a[], int len)
//{
//	int ascarr[256] = { 0 };
//	countchar(ascarr, a,len);
//	selectodd(ascarr,256);
//	//想着找到第一个，将他与后面的分别处理，
//	//思路是里外循环共用一个指标，找到第一个，进行操作，进入
//	//里层循环，对接下来找到的进行不同操作
//	//由于共用一个指标，内层找完只后，外层也会跳出
//	int flag = 0;
//	for (int i = 0; i < 256; i++)
//	{
//		
//		if (ascarr[i] != 0)
//		{
//			cout << (char)i;
//			i++;
//			flag++;
//			for (; i < 256; i++)
//			{
//				if (ascarr[i] != 0)
//				{
//					cout << " " << (char)i;
//					flag++;
//				}
//			}
//			
//		}
//	}
//	if (flag == 0)
//	{
//		cout << "No Odd!";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int intarr[1000] = { 0 };
//	double dbarr[1000] = { 0 };
//	char charr[1000] = { 0 };
//	inputarr<int>(intarr, m);
//	inputarr<double>(dbarr, n);
//	cin >> charr;
//	int chlength = findoutlen(charr);
//	OddFilter(intarr, m);
//	OddFilter(dbarr, n);
//	OddFilter(charr, chlength);
//	return 0;
//}