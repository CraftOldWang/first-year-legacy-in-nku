//#include<iostream>
//#include"mybubblesort.h"
//using namespace std;
//
//
//
//class person
//{
//public:
//	//�޲ι���
//	//ȷʵ�����캯���������Ҫ�����ʼ������Ȼ�õ�ʱ����Ϊ���˳�ʼ����û�������ˡ�
//	person():m_age(0),m_phones(0)
//	{
//		cout << "�޲ι���" << endl;
//
//	}
//	//�вι���
//	person(int age, int phones) :m_age(age),m_phones(phones)
//	{
//		cout << "�вι���" << endl;
//	}
//	//���ƹ���
//	person(const person& m)
//	{
//		cout << "const &���ƹ���" << endl;
//		m_age = m.m_age;
//		m_phones = m.m_phones;
//	}
//
//
//
//	//��Ա�������ؼӷ�
//	person operator+(const person& m)
//	{
//		cout << "��Ա�����ӷ�����" << endl;
//		//m_age += m.m_age;
//		//m_phones += m.m_phones;   //���У����мӷ�����Լ���ֵ��
//
//		person temp;
//		cout << temp.m_age << "  " << temp.m_phones << endl;
//		temp.m_age = m.m_age + m_age;
//		temp.m_phones = m.m_phones + m_phones;
//
//
//		return temp;
//	}
//
//	//�ӷ����������һ������
//	person operator+(int a)
//	{
//		cout << "�ӷ����أ���int��" << endl;
//		person temp;
//		temp.m_age = m_age + a;
//		temp.m_phones = m_phones + a;
//		return temp;
//	}
//
//	//��ֵ����
//	person operator=(const person& p1)
//	{
//		cout << "��ֵ����" << endl;
//		m_age = p1.m_age;
//		m_phones = p1.m_phones;
//	}
//
//	int m_age;
//	int m_phones;
//
//};
//
//person operator+(const person& a, const person& b)
//{
//	cout << "ȫ�ֺ����ӷ�����" << endl;
//	person temp;
//	cout << temp.m_age << "  " << temp.m_phones << endl;
//	temp.m_age = a.m_age + b.m_age;
//	temp.m_phones = a.m_phones + b.m_phones;
//	return temp;
//}
//
//
//
////��ϰ���������.
//void test01()
//{
//	person p1(10, 20);
//	person p2(49, 70);
//
//
//	/*person p3 = p1 + p2;*/
//	//�Ҳ����ȵ������أ�Ȼ���ٵ��ø��ƹ���
//	//���û�е��ø��ƹ��죬ԭ���Ƿ���ֵ�Ż���p1+p2ʵ�����ڵ���operator+���������
//	//�����ķ���ֵ������ʼ��һ���µı����������Ȳ���
//	//�������޲ι�������Ϊ�ӷ����ص�ʵ�����õ����޲ι��졣
//
//	//cout << p3.m_age << " " << p3.m_phones << endl;
//	//person p4=p3.operator+(p2);		//��Ա��������
//	//cout << p4.m_age << " " << p4.m_phones << endl;
//	//person p5 = operator+(p1, p2);	//ȫ�ֺ�������
//	//cout << p5.m_age << " " << p5.m_phones << endl;
//
//
//	person p6 =p1+10;  //�����뷴����10+p1 ��ô����дһ�����غ��������Ͼ������б�����˳���
//	cout << p6.m_age << " " << p6.m_phones << endl;
//
//}
//
//
//person func()
//{
//	cout << "this is func" << endl;
//	person p;
//	return p;
//}
//
//
////��ϰ��ͬ�Ĺ��캯�����÷���,
////��С���ŷ��ɣ������ŷ���vector����������е������ˡ�
//void test03()
//{
//	//���ŷ�
//	person p_1;       //�޲ι���ȷʵ���������ţ�ֻ��Ҫ���������ϱ���������Ϊ�����ź�ᱻʶ��ɺ���������
//	
//	//person p_2();	//�޲ι�����������ţ�����
//	//person func();//��Ϊ�����뺯��������û�����𣬻ᱻ��������Ϊ�Ǻ���������
//
//	person p_3(19, 20);
//	person p_4(p_3);
//	cout << p_1.m_age <<"   "<<p_1.m_phones<< endl;
//	cout << p_3.m_age << "   " << p_3.m_phones << endl;
//	cout << p_4.m_age << "   " << p_4.m_phones << endl;
//
//	//��ʽ��
//	person p_5;						//�޲�
//	person p_6 = person(1, 2);		//�в�
//	person p_7 = person(p_5);		//����
//
//	//��ʽת����
//	person p_8 = { 12,34 };//emmm����ֻ���˵������ġ�������ʱ����С����
//	person p_9 = p_8;
//
//	//�����ŷ�
//	person p_10{};
//	person p_11{ 214,222 };
//	person p_12{ p_11 };
//
//	cout << p_10.m_age << "   " << p_10.m_phones << endl;
//	cout << p_11.m_age << "   " << p_11.m_phones << endl;
//	cout << p_12.m_age << "   " << p_12.m_phones << endl;
//
//}
//
//
//int main()
//{
//	
//	test01();
//
////	test03();
//	return 0;
//}