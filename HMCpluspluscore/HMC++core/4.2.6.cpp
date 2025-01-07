//#include<iostream>
//#include<string>
//using namespace std;
//
//class student
//{
//public:
//
//	student()
//	{
//		cout << "default" << endl;
//	}
//	//student(int age,string name):m_age(age),m_name(name)  //不写这个的话下面是不是没法搞？
//	//{
//	//	cout << "construct" << endl;
//	//}
//	~student()
//	{
//		cout << "destroy" << endl;
//	}
//	int m_age;
//	string m_name;
//};
//
//
//class teacher
//{
//public:
//	//这里自动给我们做了 student temp(Sage,Sname)or student temp=studnet(Sage,Sname)
//	teacher(int Tage, /*int Sage*//*, */string Tname/*, *//*string Sname*/):age(Tage), name(Tname ),S()/*,S(Sage,Sname)*/
//	{
//		cout << "construct" << endl;
//	}
//
//	~teacher()
//	{
//		cout << "destroy" << endl;
//	}
//	int age;
//	string name;
//	student S;
//
//};
//
//
//int main()
//{
//	teacher hu = { 22,"a" };
//
//
//	system("pause");
//	return 0;
//}