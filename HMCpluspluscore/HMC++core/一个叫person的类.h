#pragma once

省得重复写，似乎头文件默认不会被编译
而cpp就算放在头文件的筛选器里也会被编译

class person
{

	friend	ostream& operator<<(ostream& cout, const person& p);
public:
	person() :m_age(0), m_phones(0)
	{
		cout << "无参构造" << endl;
	}

	person(int age, int phones) :m_age(age), m_phones(phones)
	{
		cout << "有参构造" << endl;
	}

	person(const person& m)
	{
		cout << "const &复制构造" << endl;
		m_age = m.m_age;
		m_phones = m.m_phones;
	}

	person operator+(const person& m)
	{
		cout << "成员函数加法运算符重载" << endl;
		person temp;
		temp.m_age = m.m_age + m_age;
		temp.m_phones = m.m_phones + m_phones;
		return temp;
	}


	person operator=(const person& p1)
	{
		cout << "赋值运算符重载" << endl;
		m_age = p1.m_age;
		m_phones = p1.m_phones;
	}

private:
	int m_age;
	int m_phones;

};


ostream& operator<<(ostream& cout, const person& p)
{
	cout << p.m_age << "  " << p.m_age << endl;
	return cout;
}
