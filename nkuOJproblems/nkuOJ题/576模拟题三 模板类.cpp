//#include<iostream>
//using namespace std;
// 
////设计一个学生类（Student），包括私有数据成员：
////学号（int型），姓名，成绩（int型），函数成员根据需要定义
//
//
////这里不放Array的声明的话,Student里面能认识Array吗,结果是可以的,
//// 可能是因为友元声明不需要用到类定义吧....毕竟友元声明也是声明...
//
////template<class T>
////class Array;
//
//class Student
//{
//public:
//	
//	template<class T>
//	friend class Array;
//
//	
//
//	//不是类模板也可以类内实现吗
//	friend ostream& operator<<(ostream& out, Student& stu)
//	{
//		out << stu.stuid;
//		return out;
//		
//	}
//
//
//	friend istream& operator>>(istream& cin, Student& stu)
//	{
//		cin >> stu.stuid >> stu.name >> stu.grade;
//		return cin;
//	}
//
//	//用>比较成绩
//	bool operator>(Student b)
//	{
//		return this->grade > b.grade;
//	}
//
//	//friend void hello()
//	//{
//	//	cout << "hello" << endl;
//	//}
//
//private:
//
//	int stuid;
//	char name[100];
//	int grade;
//};
//
////ostream& operator<<(ostream& cout, Student& stu)
////{
////	cout << stu.stuid;
////	return cout;
////}
//
////istream& operator>>(istream& cin, Student& stu)
////{
////	cin >> stu.stuid >> stu.name >> stu.grade;
////	return cin;
////}
//
//
//template<class T>
//class Array 
//{
//
//public:
//
//
//	Array(int n) :size(n)
//	{
//		this->element = new T[size];
//	}
//
//	~Array()
//	{
//		if (this->element != nullptr)
//		{
//			delete[] element;
//		}
//		size = 0;
//	}
//
//	//这里必须Array的引用,因为输入的话得修改arr的成员
//	//哦,想传俩参数的话,得全局函数做友元,而不是成员函数类内实现
//	//一个可以直接在类内写...另外可以类内声明类外实现
//	//写在类外的话,就得Array<T>来表明这是一个类模板...
//	friend istream& operator>>(istream& cin, Array& arr)
//	{
//		for (int i = 0; i < arr.size; i++)
//		{
//			//似乎不用括号?这里element是arr的成员,它得从.到[]才能取出东西...
//			//于是我下面ostream的没用括号,看看有没有问题
//			//确实不用括号...毕竟点运算符有明显的统属关系,xx下面的yyy,这样.
//			cin >> (arr.element)[i];
//		}
//
//		return cin;
//	}
//
//	friend ostream& operator<<(ostream& cout, Array& arr);//声明
//	/*{
//		for (int i = 0; i < arr.size; i++)
//		{
//			if (i == 0)
//			{
//				cout << arr.element[i];
//			}
//			else
//			{
//				cout <<" "<< arr.element[i];
//			}
//			
//		}
//		
//
//		return cout;
//	}*/
//
//	void sort()
//	{
//		//冒泡排序
//		for (int i = 0; i < size-1; i++)
//		{
//			for (int j = 0; j < size - 1 - i; j++)
//			{
//				if (element[j] > element[j + 1])
//				{
//					T temp = element[j];
//					element[j] = element[j + 1];
//					element[j + 1] = temp;
//				}
//			}
//		}
//
//
//		//再写个选择排序的版本看看
//		/*for (int i = 0; i < size - 1; i++)
//		{
//			int minindex=i;
//			for (int j = i+1; j < size; j++)
//			{
//				if (element[minindex]>element[j])
//					minindex = j;
//				
//			}
//			if (minindex != i)
//			{
//				T temp = element[minindex];
//				element[minindex] = element[i];
//				element[i] = temp;
//			}
//
//			
//		}*/
//	}
//
//private:
//	int size;
//	T* element;
//
//};
//
//
////
//template<class T>
//ostream& operator<<(ostream& cout, Array<T>& arr)
//{
//	for (int i = 0; i < arr.size; i++)
//	{
//		if (i == 0)
//		{
//			cout << arr.element[i];
//		}
//		else
//		{
//			cout << " " << arr.element[i];
//		}
//
//	}
//
//
//	return cout;
//}
//
//
//int main()
//{
//	int num;								
//	cin >> num;
//	
//
//
//	Array<int> array_int(num);				
//	cin >> array_int;						
//	array_int.sort();						
//	cout << array_int << endl;				
//
//	Array<double> array_double(num);
//	cin >> array_double;
//	array_double.sort();
//	cout << array_double << endl;
//
//	Array<char> array_char(num);
//	cin >> array_char;
//	array_char.sort();
//	cout << array_char << endl;
//
//	Array<Student> array_Student(num);
//	cin >> array_Student;
//	array_Student.sort();
//	cout << array_Student;
//
//
//
//	return 0;
//
//
//}