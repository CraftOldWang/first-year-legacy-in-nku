//#include<iostream>
//using namespace std;
// 
////���һ��ѧ���ࣨStudent��������˽�����ݳ�Ա��
////ѧ�ţ�int�ͣ����������ɼ���int�ͣ���������Ա������Ҫ����
//
//
////���ﲻ��Array�������Ļ�,Student��������ʶArray��,����ǿ��Ե�,
//// ��������Ϊ��Ԫ��������Ҫ�õ��ඨ���....�Ͼ���Ԫ����Ҳ������...
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
//	//������ģ��Ҳ��������ʵ����
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
//	//��>�Ƚϳɼ�
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
//	//�������Array������,��Ϊ����Ļ����޸�arr�ĳ�Ա
//	//Ŷ,�봫�������Ļ�,��ȫ�ֺ�������Ԫ,�����ǳ�Ա��������ʵ��
//	//һ������ֱ��������д...�������������������ʵ��
//	//д������Ļ�,�͵�Array<T>����������һ����ģ��...
//	friend istream& operator>>(istream& cin, Array& arr)
//	{
//		for (int i = 0; i < arr.size; i++)
//		{
//			//�ƺ���������?����element��arr�ĳ�Ա,���ô�.��[]����ȡ������...
//			//����������ostream��û������,������û������
//			//ȷʵ��������...�Ͼ�������������Ե�ͳ����ϵ,xx�����yyy,����.
//			cin >> (arr.element)[i];
//		}
//
//		return cin;
//	}
//
//	friend ostream& operator<<(ostream& cout, Array& arr);//����
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
//		//ð������
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
//		//��д��ѡ������İ汾����
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