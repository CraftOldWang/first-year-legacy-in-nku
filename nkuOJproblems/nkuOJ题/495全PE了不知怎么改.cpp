//#include<iostream>
//using namespace std;
//
// ����2.5Сʱ
// 
////�������������
////������������ֻ��Ҫ����������ù��������ôʵ�ֵ�����ص�
////ʡ���˶ഴ��������Ŀռ�
////�����⵼�������ʱ���ǰ�һ��������Ķ��������������
////��ѡ����������ÿ��������ѡ�������һ����doubleͨ������int����ʵ�ֵ�
////���ԡ���û��ϵ������char���й�ϵ�ˣ�
////����������Ӧ�ĺ��������
////û�취����������������һ������
////�Ӷ���д���飬���ҵ��Ե�ʱ�������������Ҫ���ź�������������һ�𿴣�
////�����˵��Ը�����
////����ϴ�ž��Ǿ���������ϸ�֣������ͬ��Ȼ���ٰ���ʵ�֣�
////������𿪻�����Ҫ�����ġ�
//
////ascll��ֻ��256��������Ҳ����˵char typeֻ��256��������������256�ֻ�
////��'\0'��ʼѭ��
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
////ֻ����ż��û�ã�û��ɾ������
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
////ð�ݲ���������Ȼд����
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
//	//i<1000�Ƕ���Ŀ����������ַ������У������ⳤ�ȵ���Ҳ��֪��ô����
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
//	//��Ϊ�պð�0���ŵ�ǰ���ˣ�������len-1������
//	//���selectodd��sortodd�����Ƕ�1000������len�ĳ�����
//	//�ڶ���ע�ʹ���ģ���֪�����ȣ����Լ�ʹ�ұ�һ��
//	//0����Ҳ������ָ�겻�ᾭ������
//	//���Ƕ�׵ĵ��Ĳ㣬if (i = (len - 1))�ְ�==д��=�ˣ�����
//	//���ָ���Ҳû��ϵ����Ϊ��ֻ������0
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
//	//�����ҵ���һ�������������ķֱ���
//	//˼·������ѭ������һ��ָ�꣬�ҵ���һ�������в���������
//	//���ѭ�����Խ������ҵ��Ľ��в�ͬ����
//	//���ڹ���һ��ָ�꣬�ڲ�����ֻ�����Ҳ������
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