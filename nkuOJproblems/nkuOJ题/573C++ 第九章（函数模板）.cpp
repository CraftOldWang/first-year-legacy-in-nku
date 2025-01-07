//#include<iostream>
//using namespace std;
//#include<string>
//
//template<class T>
//void arrinput(T* p, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cin >> p[i];
//	}
//}
//
//
////n是要print多少而不是前n个元素的意思
//template <class T> 
//void Print(T* p, int n) 
//{ 
//	for (int i = 0; i < n; i++)
//	{
//		if(i==0)
//		{
//			cout << p[i];
//		}
//		else
//		{
//			cout << " " << p[i];
//		}
//	}
//
//}
//
//
//template<class T>
//void putfront(T* p, int pos);
//
////前n个元素中大于lever的东西移到最前端
//template <class T> 
//void GtLever(T* p, int n, T lever) 
//{ 
//	int howmanygtlever = 0;
//
//	for (int i = 0, count = 0; count<n;count++ )
//	{
//		if (p[n - i - 1] > lever)
//		{
//			//这里因为刚好把前一个元素后移了,所以不用i++
//			putfront(p, n - i - 1);
//			howmanygtlever++;
//		}
//		else
//		{
//			i++;
//		}
//	}
//
//	Print(p, howmanygtlever);
//
//}
//
////move to front 检查的时候从后往前...这样都调完之后不会逆序
////将pos位置的移到第一个
//template<class T>
//void putfront(T* p, int pos)
//{
//	T temp = p[pos];
//	for(int i=pos;i>0;i--)
//	{
//		p[i] = p[i - 1];
//	}
//	p[0] = temp;
//
//}
//
//
//template<class T>
//void Solution(int length,int n)
//{
//	T* p = new T[length];
//	T lever;
//	
//	arrinput(p, length);
//	cin >> lever;
//
//	GtLever(p, n, lever);
//}
//
//
//int main()
//{
//	string type;
//	int length;
//	int n;
//
//	cin >> type;
//	cin >> length;
//	cin >> n;		//前n个元素...
//
//	if (type == "char")
//	{
//		Solution<char>(length, n);
//	}
//	else if (type == "int")
//	{
//		Solution<int>(length, n);
//	}
//	else if (type == "float")
//	{
//		Solution<float>(length, n);
//	}
//
//
//	return 0;
//}