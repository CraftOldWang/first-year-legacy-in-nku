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
////n��Ҫprint���ٶ�����ǰn��Ԫ�ص���˼
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
////ǰn��Ԫ���д���lever�Ķ����Ƶ���ǰ��
//template <class T> 
//void GtLever(T* p, int n, T lever) 
//{ 
//	int howmanygtlever = 0;
//
//	for (int i = 0, count = 0; count<n;count++ )
//	{
//		if (p[n - i - 1] > lever)
//		{
//			//������Ϊ�պð�ǰһ��Ԫ�غ�����,���Բ���i++
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
////move to front ����ʱ��Ӻ���ǰ...����������֮�󲻻�����
////��posλ�õ��Ƶ���һ��
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
//	cin >> n;		//ǰn��Ԫ��...
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