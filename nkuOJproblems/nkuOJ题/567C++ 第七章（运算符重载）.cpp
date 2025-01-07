//#include<iostream>
//using namespace std;
// 
////���һ��Rational�࣬���д����������㡣Ҫ��
////
////��1����������������Ա������ʾ���Ӻͷ�ĸ��
////
////��2������һ���������������ʼ���Ĺ��캯�������ṩ����ʱ�����캯��Ӧ�ṩĬ��ֵ��������ųɼ���ʽ�����������2 / 4��Ӧ�ڶ����д�ųɷ���1�ͷ�ĸ2����ʽ��
////
////��3�����ó�Ա�����ķ�ʽ���ؼӷ��������������������Ԫ�����ķ�ʽ���س˷��ͳ����������ʵ�����¹��ܣ�
////
////a������Rationalֵ��ӣ��������ɼ���ʽ�������
////b������Rationalֵ������������ɼ���ʽ�������
////c������Rationalֵ��ˣ��������ɼ���ʽ�������
////d������Rationalֵ������������ɼ���ʽ�������
////e������++�������ʵ�ֶ�����Rationalֵ�������������������ɼ���ʽ�������1 / 2++�Ľ��Ϊ3 / 2����
////f������һ�������Rational R1��R2; ���ظ�ֵ������� = ��, ������Rationalֵ���Ӻͷ�ĸ�ߵ�λ�ú󣬸�ֵ��R1��R2�������������2 / 3 ��Ϊ 3 / 2�������ĸ��1��ֱ�����������ʽ����
////g������������������a / b��ʽ��ӡRationalֵ������aΪ���ӣ�bΪ��ĸ��
////����Ϊ���У�ÿ�д���һ��������ÿ��������int���͵����֣��ֱ��������ķ��Ӻͷ�ĸ
////
////��������ղ��裨3��������ķ���ֵ�����Ӻͷ�ĸ�á� / ���ָ���ÿ������һ�С�
//
//class Rational
//{
//public:
//	Rational():m_numerator(0),m_denominator(1)
//	{
//
//	}
//	Rational(int nume, int deno):m_numerator(nume),m_denominator(deno)
//	{
//		
//	}
//	~Rational() = default;
//
//	Rational operator+(const Rational& a)
//	{
//		Rational temp;
//		int tempnume = m_numerator * a.m_denominator + a.m_numerator * m_denominator;
//		int tempdeno = m_denominator *a.m_denominator;
//		temp.m_numerator = tempnume;
//		temp.m_denominator = tempdeno;
//		temp.simplify();
//		return temp;
//	}
//	
//	Rational operator-(Rational a)
//	{
//		Rational temp;
//		int tempnume = m_numerator * a.m_denominator - a.m_numerator * m_denominator;
//		int tempdeno = m_denominator * a.m_denominator;
//		temp.m_numerator = tempnume;
//		temp.m_denominator = tempdeno;
//		temp.simplify();
//		return temp;
//	}
//
//	friend Rational operator*(Rational a, Rational b);
//	friend Rational operator/(Rational a, Rational b);
//
//	//����++
//	Rational operator++(int)
//	{
//		Rational temp = *this;
//		temp.m_numerator += temp.m_denominator;
//		return temp;
//	}
//
//	Rational operator=(Rational a)
//	{
//		Rational t1=*this;
//		int temp = t1.m_denominator;
//		t1.m_denominator = t1.m_numerator;
//		t1.m_numerator = temp;
//		return t1;
//
//	}
//
//	int findgcd(const Rational& a)
//	{
//		int tem1 = a.m_numerator, tem2 = a.m_denominator;
//		if (tem1 < tem2)
//		{
//			int temp = tem1;
//			tem1 = tem2;
//			tem2 = temp;
//		}
//
//		int maybegcd = tem2;
//
//		while (tem2!=0&&tem1 % tem2 != 0)
//		{
//			tem1 = tem1 % tem2;
//
//			int temp = tem1;
//			tem1 = tem2;
//			tem2 = temp;
//
//			maybegcd = tem2;
//			if (tem2 == 0)
//			{
//				break;
//			}
//
//		}
//
//
//		return maybegcd;
//	}
//
//
//	void simplify( )
//	{
//		int gcd=findgcd(*this);
//		m_numerator /= gcd;
//		m_denominator /= gcd;
//		if (m_numerator > 0 && m_denominator < 0)
//		{
//			m_numerator = -m_numerator;
//			m_denominator = -m_denominator;
//		}
//	}
//
//
//public:
//	int m_numerator;//����
//	int m_denominator;//��ĸ
//
//};
//
//ostream& operator<<(ostream& a, const Rational& b)
//{
//	if (b.m_denominator == 1)
//	{
//		a << b.m_numerator;
//	}
//	else
//	{
//		a << b.m_numerator << '/' << b.m_denominator;
//	}
//	return a;
//}
//
//Rational operator*(Rational a,Rational b)
//{
//	Rational temp;
//	temp.m_numerator = a.m_numerator * b.m_numerator;
//	temp.m_denominator = a.m_denominator * b.m_denominator;
//	temp.simplify();
//	return temp;
//}
//
//Rational operator/(Rational a, Rational b)
//{
//	Rational temp;
//	temp.m_numerator = a.m_numerator * b.m_denominator;
//	temp.m_denominator = a.m_denominator * b.m_numerator;
//	temp.simplify();
//	return temp;
//}
//
//int main()
//{
//	Rational R1, R2;
//	cin >> R1.m_numerator >> R1.m_denominator
//		>> R2.m_numerator >> R2.m_denominator;
//	cout << R1 + R2 << endl;
//
//	cout << R1 - R2 << endl;
//	cout << R1 * R2 << endl;
//	cout << R1 / R2 << endl;
//	cout << R1++ << ' ' << R2++ << endl;
//	cout << (R1 = R1) << " " << (R2 = R2);
//
//	return 0;
//}