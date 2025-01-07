//#include<iostream>
//using namespace std;
// 
////设计一个Rational类，进行带分数的运算。要求：
////
////（1）包含两个整数成员变量表示分子和分母。
////
////（2）包含一个对所声明对象初始化的构造函数。不提供参数时，构造函数应提供默认值。分数存放成简化形式，例如分数“2 / 4”应在对象中存放成分子1和分母2的形式。
////
////（3）采用成员函数的方式重载加法、减法运算符，采用友元函数的方式重载乘法和除法运算符，实现如下功能：
////
////a）两个Rational值相加，结果保存成简化形式并输出。
////b）两个Rational值相减，结果保存成简化形式并输出。
////c）两个Rational值相乘，结果保存成简化形式并输出。
////d）两个Rational值相除，结果保存成简化形式并输出。
////e）重载++运算符，实现对两个Rational值的自增操作，结果保存成简化形式并输出（1 / 2++的结果为3 / 2）。
////f）声明一个类对象Rational R1，R2; 重载赋值运算符” = ”, 将两个Rational值分子和分母颠倒位置后，赋值给R1和R2，并简化输出。（2 / 3 变为 3 / 2，如果分母是1，直接输出整数形式。）
////g）重载输出运算符，按a / b形式打印Rational值，其中a为分子，b为分母。
////输入为两行，每行代表一个分数，每行有两个int类型的数字，分别代表分数的分子和分母
////
////输出：按照步骤（3）操作后的分数值，分子和分母用“ / ”分隔，每个操作一行。
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
//	//后置++
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
//	int m_numerator;//分子
//	int m_denominator;//分母
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