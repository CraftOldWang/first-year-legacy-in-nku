//#include<iostream>
//#include<string>
//using namespace std;
//
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "animal����" << endl;
//	}
//	 ~Animal()
//	{
//		cout << "animal����" << endl;
//	}
//
//	virtual void speak() = 0;
//
//};
//
//class Cat :public Animal
//{
//public:
//	Cat(string name):m_name(new string(name))
//	{
//		cout << "cat����" << endl;
//	}
//	~Cat()
//	{
//		if (m_name != nullptr)
//		{
//			delete m_name;
//			m_name = nullptr;
//		}
//		cout << "cat����" << endl;
//	}
//
//	virtual void speak()
//	{
//		cout << "cat speaking" << endl;
//	}
//	
//
//	string* m_name;
//};
//
//void dospeak(Animal* a)
//{
//	a->speak();
//}
//
//void test01()
//{
//	Animal* anim = new Cat("tom");
//	dospeak(anim);
//
//	//������,delete���ͷ��ڶ������ٵ��ڴ��õ�,delete��ʱ��������������...
//	//Ȼ�����������������Զ��ٵ��ø�������,���ǵ����಻���ٵ������
//	//��������ͨ��������,���Ե������������,Ȼ���Զ�����������.
//	delete anim;
//
//	int a = 0;
//	int b = 0;
//}
//
//int main()
//{
//
//	test01();
//
//	return 0;
//}