#pragma once
#include<iostream>
using namespace std;

//类模板分文件编写一般的解决方案是声明实现写一起，然后改名hpp(hpp只是约定名称)

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


//类成员函数们自己就是该类的友元,所以他们可以随便访问私有成员
template<class T>
MyArray<T>::MyArray( int capacity)/*:pAddress(new T[capacity]),m_Capacity(capacity)*/
{

	cout << " 有参构造" << endl;

	m_Capacity = capacity;
	m_Size = 0;

	pAddress = new T[m_Capacity];
	
}

template<class T>
MyArray<T>::~MyArray()
{
	

	//删除之前要检查一下是不是为空,为空不能释放的...
	if (pAddress != nullptr)
	{
		cout << "析构" << endl;
		delete[] pAddress;
		pAddress = nullptr;
	}

	
}

template<class T>
MyArray<T>::MyArray(const MyArray& arr)
{
	
	//cout << "复制构造" << endl;

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
	//返回自己...
	//如果自己给自己赋值怎么办???
	//好像判断是否相等 的"=="也得写重载??

	//cout << "赋值运算符" << endl;

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


//常函数只是在函数实现内部不能修改成员变量,返回之后改不改不关它的事,
// 并且不是常的成员函数也可以调用常函数的,调完之后返回的东西当然可以修改
//所以这里下标返回的东西当然可以在调用的非 常函数 成员 那里修改.
template<class T>
T& MyArray<T>::operator[](int index)const 
{
	//cout << "下标运算符" << endl;
	return this->pAddress[index];
}

template<class T>
void MyArray<T>::Push_Back(const T& val)
{
	//cout << "尾插" << endl;
	
	//原来void也能用return啊

	if (this->getSize() == this->getcapacity())
	{
		cout << " 过多,不能尾插" << endl;
		return;
	}

	(*this)[getSize()] = val;
	m_Size++;

}


template<class T>
void MyArray<T>::Pop_Back()
{
	//cout << "尾删" << endl;

	//让用户访问不到即可在逻辑上删除掉...size-1就ok
	if (this->getSize()== 0)
	{
		return;
	}
	m_Size--;
	
}

template<class T>
int MyArray<T>::getSize()const
{
	//cout << "已用大小" << endl;
	return m_Size;
}

template<class T>
int MyArray<T>::getcapacity()const
{
	//cout << "容量" << endl;
	return m_Capacity;
}