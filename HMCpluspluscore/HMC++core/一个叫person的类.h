#pragma once

ʡ���ظ�д���ƺ�ͷ�ļ�Ĭ�ϲ��ᱻ����
��cpp�������ͷ�ļ���ɸѡ����Ҳ�ᱻ����

class person
{

	friend	ostream& operator<<(ostream& cout, const person& p);
public:
	person() :m_age(0), m_phones(0)
	{
		cout << "�޲ι���" << endl;
	}

	person(int age, int phones) :m_age(age), m_phones(phones)
	{
		cout << "�вι���" << endl;
	}

	person(const person& m)
	{
		cout << "const &���ƹ���" << endl;
		m_age = m.m_age;
		m_phones = m.m_phones;
	}

	person operator+(const person& m)
	{
		cout << "��Ա�����ӷ����������" << endl;
		person temp;
		temp.m_age = m.m_age + m_age;
		temp.m_phones = m.m_phones + m_phones;
		return temp;
	}


	person operator=(const person& p1)
	{
		cout << "��ֵ���������" << endl;
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
