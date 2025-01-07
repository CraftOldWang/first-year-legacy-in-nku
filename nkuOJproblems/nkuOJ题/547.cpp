//#include<iostream>
//#include<string>
//using namespace std;
//
//struct player
//{
//	string name;
//	int score;
//};
//
//int findmax(int a[], int len)
//{
//	int max = a[0];
//	for (int i = 0; i < len; i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//	}
//	return max;
//}
//int findmin(int a[], int len)
//{
//	int min = a[0];
//	for (int i = 0; i < len; i++)
//	{
//		if (a[i] < min)
//		{
//			min = a[i];
//		}
//	}
//	return min;
//}
//int findscore()
//{
//	int scoarr[7] = { 0 };
//	for (int i = 0; i < 7; i++)
//	{
//		cin >> scoarr[i];
//	}
//	int max = findmax(scoarr, 7);
//	int min = findmin(scoarr, 7);
//	int score = 0;
//	for (int i = 0; i < 7; i++)
//	{
//		score += scoarr[i];
//	}
//	score = score - max - min;
//	return score;
//}
//
//void sortplayer(player a[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (a[j].score < a[j + 1].score)
//			{
//				player temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//}
//void printplayer(player a[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << a[i].name << " " << a[i].score << endl;
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	player parr[10];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> parr[i].name;
//		parr[i].score = findscore();
//	}
//
//	sortplayer(parr, n);
//	printplayer(parr, n);
//
//	return 0;
//}