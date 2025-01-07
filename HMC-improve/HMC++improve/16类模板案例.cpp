#include<iostream>
using namespace std;

#include"Myarray.hpp"
#include<string>


class Person
{
public:
	Person()
	{
		m_name = '\0';
		m_age = 0;
	}

	Person(string name,int age):m_name(name),m_age(age)
	{

	}

	string m_name;
	int m_age;
};

template<class T>
void printMyarray(const MyArray<T>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
	
}


void printMyarray(const MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i].m_name <<"  "<<arr[i].m_age<< endl;
	}
}


void test01()
{
	MyArray<int>arr(10);

	arr.Push_Back(10);
	arr.Push_Back(9);
	arr.Push_Back(4);
	arr.Push_Back(1);
	arr.Push_Back(42);
	arr.Push_Back(363);
	arr.Push_Back(433);
	arr.Push_Back(33);	
	
	printMyarray(arr);

	cout << "capacity:" << arr.getcapacity() 
		<< "  size:" << arr.getSize() << endl;



	MyArray<int>arr2(arr);

	printMyarray(arr2);
	cout << "capacity:" << arr2.getcapacity()
		<< "  size:" << arr2.getSize() << endl;

	arr2.Pop_Back();
	arr2.Pop_Back();
	arr2.Push_Back(23333);

	cout << "capacity:" << arr2.getcapacity()
		<< "  size:" << arr2.getSize() << endl;

	printMyarray(arr2);
	
	MyArray<int>arr3(4);
	cout<<"arr3的capa and len"<<arr3.getcapacity() 
		<< " "<<arr3.getSize() << endl;
	printMyarray(arr3);
	arr3=arr;
	printMyarray(arr3);
	cout <<"第5个元素"<< arr3.operator[](4) 
		<< "  " << arr3[4] << endl;







}

void test02()
{
	MyArray<Person>arr(10);


	
	Person p1("Alice", 23);
	Person p2("Bob", 25);
	Person p3("Caley", 29);
	Person p4("Drichlet", 30);
	Person p5("einstain", 31);

	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);
	
	printMyarray(arr);
}

int main()
{
	//test01();
	test02();
	return 0;
}
