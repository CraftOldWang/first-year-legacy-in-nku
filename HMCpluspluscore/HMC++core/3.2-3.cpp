//#include<iostream>
//#include<string>
//#include<iomanip>
//using namespace std;
//
//
//////class circle
//////{
//////public:
//////	double r;
//////
//////	double  forL()
//////	{
//////		return 3.14 * r * r;
//////	}
//////
//////
//////};
////
////
////class student
////{
////public:
////	string name;
////	string ID;
////public:
////	void setname(string a)
////	{
////		name = a;
////	}
////	void setID(string id)
////	{
////		ID = id;//注意作用域，若名字相同，会优先用内层的
////	}
////	void showname()
////	{
////		cout << name << endl;
////	}
////	void showID()
////	{
////		cout << ID << endl;
////	}
////};
////
//////
////////int main()
//////{
////	/*circle r1;
////	r1.r = 10;
////	double L=r1.forL();
////	cout <<setw(4) <<L << endl;*/
////		
////
////	class student Stu1;
////	Stu1.setname ("lihua");
////	Stu1.setID ("2222222");
////	Stu1.showname();
////	Stu1.showID();
////
////
////
////
////	return 0;
////}
//
//
//class Person
//{
//	//姓名  公共权限
//public:
//	string m_Name;
//
//	//汽车  保护权限
//protected:
//	string m_Car;
//
//	//银行卡密码  私有权限
//private:
//	int m_Password;
//
//public:
//	void func()
//	{
//		m_Name = "张三";
//		m_Car = "拖拉机";
//		m_Password = 123456;
//	}
//	void func2()
//	{
//		cout << m_Name << endl
//			<< m_Car << endl
//			<< m_Password << endl;
//	}
//};
//
//int main() {
//
//	Person p;
//	p.m_Name = "李四";
//	//p.m_Car = "奔驰";  //保护权限类外访问不到
//	//p.m_Password = 123; //私有权限类外访问不到
//	p.func();
//	p.func2();
//	system("pause");
//
//	return 0;
//}