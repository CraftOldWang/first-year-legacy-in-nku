//#include<iostream>
//using namespace std;
//
//class MyInteger
//{
//	friend ostream& operator<<(ostream& a, MyInteger b);
//public:
//	MyInteger():m_num(0)
//	{
//
//	}
//
//	
//	//��Ա�����ƺ�д����������ʱҲû�������ĸ���ǰ���ĸ��Ǻ��õ�����
// //��intռλ�������֣���ռλ�������Ǻ��õ���
//	//����������Ϊ���÷���ֵ����ԭ���Ǹ�����
//	//����++(++a),�����Ƿ������ã�a��ֵֻ��+1�������������ջ�+2
//	MyInteger& operator++()
//	{
//		//��++���ٽ�������	
//		m_num++;
//		return *this;
//	}
//
//	MyInteger operator++(int)
//	{
//		MyInteger temp = *this;
//
//		m_num++;
//	
//		return temp;
//		
//	}
//
//
//	//ǰ�õݼ�����
//	MyInteger& operator--()
//	{
//		m_num--;
//		return *this;
//	}
//
//	//���õݼ�
//	MyInteger operator--(int)
//	{
//		MyInteger temp = *this;
//		m_num--;
//		return temp;
//	}
//
//private:
//	int m_num;
//};
//
////����MyInteger������&��Ϊʲô
//ostream& operator<<(ostream& a,MyInteger b)
//{
//	cout << b.m_num;
//	return a;
//}
//
//
//
//void test01()
//{
//	//MyInteger num;
//	//cout << num;
//
//	int a = 0;
//	cout << (a++) << endl;
//	//�������κ��õ�������Ϊ���õ������ص���һ��ֵ�������Ǳ���
//	//û�д���ĳ����ַ���������й��˾ͻ���ʧ�Ķ��������Ӷ������ٽ��к���orǰ��++����
//	//����Ϊ���Ƕ���Ҫ���������ǿ����޸ĵ���ֵ��
//
//	MyInteger b ;
//	b.operator++();
//			
//	cout << ++b << endl;
//	cout << b++ << endl;
//	cout << b << endl;
//	
//	MyInteger c;
//	cout << ----(--c) << endl;
//	cout << c-- << endl;
//	c.operator--();
//	cout << c << endl;
//
//
//}
//
//
//
//
//
//int main()
//{
//	test01();
//
//	return 0;
//}