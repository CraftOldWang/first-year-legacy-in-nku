//#include<iostream>
//using namespace std;
//#include<string> 
//
////注意,不同编译器对某些类或者函数的实现可能不同,这里遇到了vs用的编译器与
////oj用的编译器对string::compare的实现不同的情况,前者返回0.1,-1,后者
////返回ascii码表的差值
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
//			//我想string的>应该有重载过吧...然而没有
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
//	//更便捷的写法
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
//		//就是说输出了就WA,不输出就AC,
//		//那么如果返回值是1,就是WA
//		//返回值是2,就是AC
//		//输出的话,oj里应该判wa
//
//		//多输出了aahhh,这是题目不要的
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
