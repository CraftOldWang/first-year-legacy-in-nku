//#include<iostream>
//using namespace std;
//#include<string> 
//
////ע��,��ͬ��������ĳЩ����ߺ�����ʵ�ֿ��ܲ�ͬ,����������vs�õı�������
////oj�õı�������string::compare��ʵ�ֲ�ͬ�����,ǰ�߷���0.1,-1,����
////����ascii���Ĳ�ֵ
//
//
//template<class T>
//class Data
//{
//public:
//	Data(int len);
//	~Data();
//	void mysort();
//	void print();
//private:
//	T* p;
//	int m_size;
//};
//
//
//
//template<class T>
//Data<T>::Data(int len):m_size(len)
//{
//	p = new T[m_size];
//	for (int i = 0; i < m_size; i++)
//	{
//		cin >> p[i];
//	}
//}
//template<class T>
//Data<T>::~Data()
//{
//	if(p!=nullptr)
//	{
//		delete[] p;
//		p = nullptr;
//		
//	}
//	m_size = 0;
//}
//
//template<class T>
//void Data<T>::mysort()
//{
//	for (int i = 0; i < m_size-1; i++)
//	{
//		for (int j = 0; j < m_size - i - 1; j++)
//		{
//			//����string��>Ӧ�������ع���...Ȼ��û��
//			if (this->p[j] > this->p[j + 1])
//			{
//				T temp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = temp;
//						
//			}
//		}
//	}
//}
//
//template<class T>
//void Data<T>::print()
//{
//	for (int i = 0; i < m_size; i++)
//	{
//		if (i == 0)
//		{
//			cout << p[i];
//		}
//		else
//		{
//			cout << " " << p[i];
//		}
//	}
//	cout << endl;
//}
//
//
//
//
//bool operator>(string a, string b)
//{
//	//����ݵ�д��
//	return a.compare(b) >0;
//
//	//if (a.compare(b) == 1)
//	//{
//	//	return true;
//	//}
//	//else
//	//{
//	//	return false;
//	//}
//}
//
//template<class T>
//void solution()
//{
//	int len;
//	cin >> len;
//	Data<T> arr(len);
//	arr.mysort();
//	arr.print();
//
//
//}
//
//
//
//void Solutions()
//{
//	static int counter = 0;
//
//	if (counter == 0)
//	{
//		solution<int>();
//
//		/*string a = "c", b = "a";
//		if (a.compare(b) == 2)
//		{
//			cout << "aahhh" << endl;
//		}*/
//		//����˵����˾�WA,�������AC,
//		//��ô�������ֵ��1,����WA
//		//����ֵ��2,����AC
//		//����Ļ�,oj��Ӧ����wa
//
//		//�������aahhh,������Ŀ��Ҫ��
//
//	}
//	else if (counter == 1)
//	{
//		solution<char>();
//	}
//	else if (counter == 2)
//	{
//		solution<string>();
//	}
//
//
//	counter++;
//}
//
//int main()
//{
//	Solutions();
//	Solutions();
//	Solutions();
//	
//	return 0;
//}
//
