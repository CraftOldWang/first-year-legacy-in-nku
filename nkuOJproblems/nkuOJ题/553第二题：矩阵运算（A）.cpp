//��Ŀ������
//��������m�׾���m <= 10��A��B����������Ҫ��Ծ�����д����ó���������
//
//1�� �Ծ���A��B�е�����Ԫ�ؼ�1���������A��B�ĺ�C1����C1 = A + B��
//
//2�� �Ծ���A��B�е�����Ԫ�ؼ�1���������A��B�Ĳ�C2����C2 = A - B��
//
//3�� �Ծ���A��B�е�ż��Ԫ�س�2���������A��B�Ļ�C3����C3 = A * B��
//
//���룺
//��һ��һ������m��m <= 10�����������A��B�Ľ�������������2 * m�У�ÿ����m������������֮���ÿո�ָ����ֱ�������A��B��
//
//�����
//������ĿҪ����������ľ���C1��C2��C3����3 * m�У�ÿ��m��Ԫ�أ�Ԫ��֮���ÿո�ָ�����β�޿ո�
//
//�������룺
//3
//1 2 3
//4 5 6
//7 8 9
//2 3 4
//5 6 7
//8 9 10
//���������
//4 7 8
//10 12 14
//16 17 19
//- 2 0 - 2
//0 - 2 0
//- 2 0 - 2
//72 78 96
//249 192 339
//252 294 348

//�������c++�︺����ģ2����-1������1,��˴���
// ����һ����,Ӧ�����ձ�Ķ���ȥ�ж�,����˵����Ӧ����ģ���Ƿ����0������ȥ��
// �Ƿ����1
//����û�м�����,һ�����ǻ��۲���
//һ����������������������������Լ������Լ��ҵ�������ݲ���
//(ѧУ�ĵ��Ժ�����,���Բ�̫�õ���)



//#include<iostream>
//using namespace std;
//
//void inputmatrixfromatob(int** a, int** b, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		b[i] = new int[m];
//		for (int j = 0; j < m; j++)
//		{
//			b[i][j] = a[i][j];
//		}
//	}
//
//}
//
////����delete�ˣ��������ٸ�
//
////���һ��û�س����ǵ�main���ֶ�����
//void printmatrix(int** a, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		if (i != 0)
//		{
//			cout << endl;
//		}
//		for (int j = 0; j < m; j++)
//		{
//			if (j == 0)
//			{
//				cout << a[i][j];
//			}
//			else
//			{
//				cout << " " << a[i][j];
//			}
//
//		}
//
//	}
//}
//
//
//
//bool isprime(int n)//1 is ,0not
//{
//	if (n <= 1)
//	{
//		return 0;
//	}
//	else
//	{
//		for (int i = 2; i <= n / 2; i++)
//		{
//			if (n % i == 0)
//			{
//				return 0;
//			}
//		}
//		return 1;
//	}
//}
//
//void primeadd1(int** a, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (isprime(a[i][j]) == 1)
//			{
//				a[i][j] += 1;
//			}
//		}
//	}
//
//}
//
//
//void oddminus1(int** a, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (a[i][j] % 2 == 1)
//			{
//				a[i][j] -= 1;
//			}
//		}
//	}
//}
//
//void eventimes2(int** a, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (a[i][j] % 2 == 0)
//			{
//				a[i][j] *= 2;
//			}
//		}
//	}
//}
//
//
//
//void addAandBtoC(int** a, int** b, int** c, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		c[i] = new int[m];
//		for (int j = 0; j < m; j++)
//		{
//			c[i][j] = a[i][j] + b[i][j];
//		}
//	}
//
//}
//
//void AminusBtoC(int** a, int** b, int** c, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		c[i] = new int[m];
//		for (int j = 0; j < m; j++)
//		{
//			c[i][j] = a[i][j] - b[i][j];
//		}
//	}
//}
//
//void AtimesBtoC(int** a, int** b, int** c, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		c[i] = new int[m];
//		for (int j = 0; j < m; j++)
//		{
//			//ÿ�����궼�г�ʼ������û��ϵ
//			int sigmarawcol = 0;
//			for (int k = 0; k < m; k++)
//			{
//				sigmarawcol += a[i][k] * b[k][j];
//			}
//			c[i][j] = sigmarawcol;
//		}
//	}
//
//
//}
//
//
//
//void taskc1(int** A, int** B, int m)
//{
//	int** a = new int* [m];
//	inputmatrixfromatob(A, a, m);
//	int** b = new int* [m];
//	inputmatrixfromatob(B, b, m);
//
//	primeadd1(a, m);
//	primeadd1(b, m);
//
//	int** c = new int* [m];
//	addAandBtoC(a, b, c, m);
//
//	printmatrix(c, m);
//
//
//}
//
//void taskc2(int** A, int** B, int m)
//{
//	int** a = new int* [m];
//	inputmatrixfromatob(A, a, m);
//	int** b = new int* [m];
//	inputmatrixfromatob(B, b, m);
//
//	oddminus1(a, m);
//	oddminus1(b, m);
//
//	int** c = new int* [m];
//	AminusBtoC(a, b, c, m);
//
//	printmatrix(c, m);
//
//
//
//}
//
//void taskc3(int** A, int** B, int m)
//{
//	int** a = new int* [m];
//	inputmatrixfromatob(A, a, m);
//	int** b = new int* [m];
//	inputmatrixfromatob(B, b, m);
//
//	eventimes2(a, m);
//	eventimes2(b, m);
//
//	int** c = new int* [m];
//	AtimesBtoC(a, b, c, m);
//
//	printmatrix(c, m);
//
//}
//
//
//int main()
//{
//	int m = 0;
//	cin >> m;
//	int** a = new int* [m];
//	for (int i = 0; i < m; i++)
//	{
//		a[i] = new int[m];
//		for (int j = 0; j < m; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//
//	int** b = new int* [m];
//	for (int i = 0; i < m; i++)
//	{
//		b[i] = new int[m];
//		for (int j = 0; j < m; j++)
//		{
//			cin >> b[i][j];
//		}
//	}
//
//
//	//ע�ⲻ���޸�ab���Ԫ�أ���һ��taskҪ��
//	taskc1(a, b, m);
//	cout << endl;
//	taskc2(a, b, m);
//	cout << endl;
//	taskc3(a, b, m);
//
//
//
//
//	return 0;
//}