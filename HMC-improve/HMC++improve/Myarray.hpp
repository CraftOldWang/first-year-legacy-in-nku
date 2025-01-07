#pragma once
#include<iostream>
using namespace std;

//��ģ����ļ���дһ��Ľ������������ʵ��дһ��Ȼ�����hpp(hppֻ��Լ������)

#include<string>

template<class T>
class MyArray
{
public:
	MyArray(int capacity);

	~MyArray();

	MyArray( const MyArray& arr);

	MyArray& operator=( const MyArray& arr);

	T& operator[](int index)const;

	void Push_Back(const T& val);

	void Pop_Back();

	int getSize()const;

	int getcapacity()const;


private:
	T* pAddress;
	int m_Capacity;
	int m_Size;
};


//���Ա�������Լ����Ǹ������Ԫ,�������ǿ���������˽�г�Ա
template<class T>
MyArray<T>::MyArray( int capacity)/*:pAddress(new T[capacity]),m_Capacity(capacity)*/
{

	cout << " �вι���" << endl;

	m_Capacity = capacity;
	m_Size = 0;

	pAddress = new T[m_Capacity];
	
}

template<class T>
MyArray<T>::~MyArray()
{
	

	//ɾ��֮ǰҪ���һ���ǲ���Ϊ��,Ϊ�ղ����ͷŵ�...
	if (pAddress != nullptr)
	{
		cout << "����" << endl;
		delete[] pAddress;
		pAddress = nullptr;
	}

	
}

template<class T>
MyArray<T>::MyArray(const MyArray& arr)
{
	
	//cout << "���ƹ���" << endl;

	m_Capacity = arr.getcapacity();
	m_Size = arr.getSize();
	pAddress = new T[m_Size];

	for (int i = 0; i < m_Size; i++)
	{
		(*this)[i] = arr[i];
	}
	

}

template<class T>
MyArray<T>& MyArray<T>::operator=(const MyArray& arr)
{
	//�����Լ�...
	//����Լ����Լ���ֵ��ô��???
	//�����ж��Ƿ���� ��"=="Ҳ��д����??

	//cout << "��ֵ�����" << endl;

	if (pAddress == arr.pAddress)
	{
		return *this;
	}

	if (pAddress != nullptr)
	{
		delete[] pAddress;
		pAddress = nullptr;
		m_Capacity = 0;
		m_Size = 0;
	}

	m_Capacity = arr.m_Capacity;
	m_Size = arr.m_Size;

	pAddress = new T[m_Capacity];
	for (int i = 0; i < m_Size; i++)
	{
		(*this)[i] = arr[i];
	}



	return *this;
}


//������ֻ���ں���ʵ���ڲ������޸ĳ�Ա����,����֮��Ĳ��Ĳ���������,
// ���Ҳ��ǳ��ĳ�Ա����Ҳ���Ե��ó�������,����֮�󷵻صĶ�����Ȼ�����޸�
//���������±귵�صĶ�����Ȼ�����ڵ��õķ� ������ ��Ա �����޸�.
template<class T>
T& MyArray<T>::operator[](int index)const 
{
	//cout << "�±������" << endl;
	return this->pAddress[index];
}

template<class T>
void MyArray<T>::Push_Back(const T& val)
{
	//cout << "β��" << endl;
	
	//ԭ��voidҲ����return��

	if (this->getSize() == this->getcapacity())
	{
		cout << " ����,����β��" << endl;
		return;
	}

	(*this)[getSize()] = val;
	m_Size++;

}


template<class T>
void MyArray<T>::Pop_Back()
{
	//cout << "βɾ" << endl;

	//���û����ʲ����������߼���ɾ����...size-1��ok
	if (this->getSize()== 0)
	{
		return;
	}
	m_Size--;
	
}

template<class T>
int MyArray<T>::getSize()const
{
	//cout << "���ô�С" << endl;
	return m_Size;
}

template<class T>
int MyArray<T>::getcapacity()const
{
	//cout << "����" << endl;
	return m_Capacity;
}