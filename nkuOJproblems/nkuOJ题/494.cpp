//#include<iostream>
//using namespace std;
// 
////�����Ҳ��ᴫ��ά���飬���Բ�֪��ô�ѻ�ת��������������
//
////�����0��ʼ���������ţ���Ȼ֪����ƫ����������ʱ�������������죬
////������ʱ�͸���ˣ����������ж���ģ�xx-1�������޸ĺۼ���
////���������ж�д�÷ǳ����׶����Լ����һ�鶼�Ѿ�����֪�������Ż�....
////��Щ�ⶼû�д𰸣��е㲻ˬ����Ҫд������Ҳ��������������������ο������ɻ�ϰ�ߣ�������������ô��Ҳ��
////����֪�Ķ������������ѧ�����µļ��ɣ��Լ��뵽�ļ���һ��Ƚϳ�ª��
//// ������Ҳ�Ƚϲһ���ǶԵ�ǰ������ƣ����ҿ��ǲ�һ����ȫ����
//
//
////1h.16min
//// ������һ��ac�İ�
////���ʣ��ѵ������Զ�֪���Լ��Ǽ�ά���飿��ȷʵ���У������Ҳ�֪������ô����
//void inputarr(int a[], int n)
//{
//
//	for (int j = 0; j < n; j++)
//	{
//		cin >> a[j];
//	}
//}
//
//void snakeprint(int a[], int row, int n)
//{
//	if (row % 2 == 0)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (row == 0 && i == 0)
//			{
//				cout << a[i];
//			}
//			else
//			{
//				cout << " " << a[i];
//			}
//		}
//	}
//	else
//	{
//		for (int i = n - 1; i >= 0; i--)
//		{
//			cout << " " << a[i];
//		}
//	}
//}
//
//
//
//
//int main()
//{
//	int a[10][10] = { 0 };
//	int m, n;
//	cin >> m >> n;
//	//ÿ�е���һ��������������������Ҫ��m���ˣ���֪��ô����ά����
//
//	for (int i = 0; i < m; i++)
//	{
//		inputarr(a[i], n);
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		snakeprint(a[i], i,n);
//		
//	}
//	cout << endl;
//
//
//	{
//		int row = m, column = n;
//		int Rbarrier = 0, Cbarrier = 0;
//		int R = 0, C = 0;
//
//		//ע�⿼�Ǳ߽磬���ڲ��ȼ������
//		//���˼���������ȫ�����ʱͣ�������Ӷ�����ȥ��������Ǹ����е�����д���жϣ���û�뵽��ʲô��������
//	
//		int counter = 0;
//		while (1)
//		{
//			
//			if (counter == row* column)
//			{
//				break;
//			}
//			if (R == 0&&C == 0)
//			{
//				cout << a[R][C];
//				C++;
//				counter++;
//			}
//			else if (R  == Rbarrier&&C!=(column-1)-Cbarrier)
//			{
//				cout << " " << a[R][C];
//				C++;
//				counter++;
//			}
//			else if (C ==( column-1) - Cbarrier && R  != (row-1)- Rbarrier)
//			{
//				cout << " " << a[R][C];
//				R++;
//				counter++;
//			}
//			else if (R  ==( row-1) - Rbarrier && C != Cbarrier)
//			{
//				cout << " " << a[R][C];
//				C--;
//				counter++;
//			}
//			else if (C == Cbarrier && R - 1 != Rbarrier)
//			{
//				cout << " " << a[R][C];
//				R--;
//				counter++;
//			}
//			else if (C == Cbarrier && R - 1 == Rbarrier)
//			{
//				cout << " " << a[R][C];
//				C++;
//				counter++;
//				Rbarrier++;
//				Cbarrier++;
//			}
//
//
//		}
//	}
//	
//
//
//	return 0;
//}