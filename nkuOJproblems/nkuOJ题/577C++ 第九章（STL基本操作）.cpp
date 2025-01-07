//#include<iostream>
//using namespace std;
//#include<vector> 
//
////1h左右
////中间因为erase的一些特色而为难了.
////去网上找解决方法,花了一些时间理解erase的一些运行效果
////end方法好像不是得到尾部+1的地址???
//
//
//void printvector( vector<int>& v)
//{
//	for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)
//	{
//		if (it == v.rend() -1)
//		{
//			cout << *it << endl;
//		}
//		else
//		{
//			cout << *it << " ";
//		}
//	}
//	
//
//}
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int m = 0;
//		cin >> m;
//		vector<int>v;
//		for (int j = 0; j < m; j++)
//		{
//			int k = 0;
//			cin >> k;
//			for (vector<int>::iterator it = v.begin(); it < v.end(); )
//			{
//				vector<int>::iterator it1 = v.end();
//				if (*it==k)
//				{
//					it=v.erase(it);
//					
//				}
//				else
//				{
//					it++;
//				}
//
//			}
//			v.push_back(k);
//
//			
//		}
//		printvector(v);
//
//		
//	}
//
//	
//	return 0;
//}