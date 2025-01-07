//#include<iostream>
//using namespace std;
// 
// 10到15分钟，中间有一次改了某个部分结果另一个部分会有问题，但是没考虑到。
// 这部分else{num *= 2;} 就是为了那个改动（把原来在if外面的num*=2移到里面）
// 而增添的
// 
//void twototen(char a[])
//{
//	int num = 0;
//	for (int i = 0; a[i] != '\0'; i++)
//	{
//		if (a[i] == '1')
//		{
//			num *= 2;
//			num+= 1;
//		}
//		else
//		{
//			num *= 2;
//		}
//		
//	}
//	cout << num;
//}
//
//int main()
//{
//	char carr[21] = { 0 };
//	cin >> carr;
//
//	for (int i = 0; carr[i] != '\0'; i++)
//	{
//		if (carr[i] != '0' && carr[i] != '1')
//		{
//			cout << "ERROR";
//			return 0;
//		}
//	}
//
//	twototen(carr);
//
//	return 0;
//}