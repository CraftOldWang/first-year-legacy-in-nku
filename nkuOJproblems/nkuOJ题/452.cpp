//#include<iostream>
//using namespace std;
//
////���15min��
////����ʱ��������ĿҪ���ˣ���Ϊ�ǿ���������Ȼ��WA
////���ǰ���ĿҪ��дһ�°�
//
//
//struct qqperson
//{
//	int a;
//	int h;
// };
//
//void ttk(const int A, int& H, qqperson& q)
//{
//	for (; q.h > 0;)
//	{
//		H=H-q.a;
//		q.h = q.h - A;
//		if (H <= 0) { break; }
//	}
//}
//
//int main()
//{
//	int A, H, n;
//	cin >> A >> H >> n;
//
//	qqperson* p = new qqperson[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> p[i].a;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> p[i].h;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		ttk(A, H, p[i]);
//	}
//	if ( p[n-1].h<= 0)
//	{
//		cout << "YES";
//	}
//	else
//	{
//		cout << "NO";
//	}
//	return 0;
//}