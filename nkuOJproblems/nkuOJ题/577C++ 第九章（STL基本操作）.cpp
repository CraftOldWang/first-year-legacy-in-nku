//#include<iostream>
//using namespace std;
//#include<vector> 
//
////1h����
////�м���Ϊerase��һЩ��ɫ��Ϊ����.
////ȥ�����ҽ������,����һЩʱ�����erase��һЩ����Ч��
////end���������ǵõ�β��+1�ĵ�ַ???
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