//#include<iostream>
//using namespace std;
//
////1h
//// 
//// 第一个错是没审题，题目说只要输出id和姓名，但是我想都没想就全输出了
//// 
////第二个错：对于没有初始化的情况要多加小心，要思考是否有可能会涉足没初始化的区域
//// 尽可能避免掉，以及不要漏考虑（行29）
//
//struct stu
//{
//	char ID[30];
//	char name[30];
//	double math;
//	double chinese;
//	double english;
//};
//
//void printstuarr(stu a[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << a[i].ID << " " << a[i].name <<  endl;
//	}
//}
//
//void IDsmltobigsort(stu& a, stu& b)
//{
//	for (int i = 0; i < 30; i++)
//	{
//		//ID里面没有初始化，我只用了>没有<的情况。可能会比到\0后面
//		if (a.ID[i] > b.ID[i])
//		{
//			stu temp = a;
//			a = b;
//			b = temp;
//			break;
//		}
//		else if (a.ID[i] < b.ID[i])
//		{
//			break;
//		}
//		
//	}
//}
//
//void mathsort(stu a[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (a[j].math < a[j + 1].math)
//			{
//				stu temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//			else if (a[j].math == a[j + 1].math)
//			{
//				IDsmltobigsort(a[j], a[j + 1]);
//			}
//
//		}
//	}
//
//	printstuarr(a, len);
//}
//
//void chinesesort(stu a[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (a[j].chinese < a[j + 1].chinese)
//			{
//				stu temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//			else if (a[j].chinese == a[j + 1].chinese)
//			{
//				IDsmltobigsort(a[j], a[j + 1]);
//			}
//
//		}
//	}
//
//	printstuarr(a, len);
//}
//
//void englishsort(stu a[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (a[j].english < a[j + 1].english)
//			{
//				stu temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//			else if (a[j].english == a[j + 1].english)
//			{
//				IDsmltobigsort(a[j], a[j + 1]);
//			}
//
//		}
//	}
//
//	printstuarr(a, len);
//}
//
//void sortstu(stu a[], int len, int request)
//{
//	if (request == 1)
//	{
//		mathsort(a, len);
//	}
//	else if (request == 2)
//	{
//		chinesesort(a, len);
//	}
//	else if(request==3)
//	{
//		englishsort(a,len);
//	}
//	else
//	{//error应该不要换行吧。。。我的思维定势好像变成干什么都要换行了。。
//		cout << "ERROR";
//	}
//}
//
//
//int main()
//{
//	int n;
//	//100。。。多出来的空间不处理即可
//	stu arr[101] = { 0 };
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i].ID;
//		cin >> arr[i].name;
//		cin >> arr[i].math;
//		cin >> arr[i].chinese;
//		cin >> arr[i].english;
//	}
//	int request;
//	cin >> request;
//	sortstu(arr, n, request);
//
//
//
//	return 0;
//}