//#include<iostream>
//using namespace std;
//#include<string> 
//
//class String
//{
//public:
//
//	void input(string a)
//	{
//		str = a;
//	}
//
//	string returnstr()
//	{
//		return this->str;
//	}
//
//	int getsize()
//	{
//		return str.size();
//	}
//
//	string str;
//};
//
//class EditableString :public String
//{
//public:
//	//这些操作基本都要用到size
//	void insert(char val, int pos)
//	{
//		if (pos<1 || pos>(getsize()+1))
//		{
//			cout << str << endl;
//		}
//		else
//		{
//			//也许应该看看它的insert是如何实现的
//			str.insert(pos - 1, 1, val);
//			cout << str << endl;
//		}
//	}
//
//	void del(int pos)
//	{
//		if (pos<1 || pos>getsize())
//		{
//			cout << str << endl;
//		}
//		else
//		{
//			//pos-1应该是第一个元素吧,我记得应该是从0开始的
//			str.erase(pos - 1, 1);
//			cout << str << endl;
//		}
//	}
//	
//	void replace(char val, int pos)
//	{
//
//		//呃用字符数组转一下太丑了,有什么办法改进吗?
//		//可以用下标或者at方法来取单个的字符...
//		if (pos<1 || pos>getsize())
//		{
//			cout << str << endl;
//		}
//		else
//		{
//			str[pos - 1] = val;
//			cout << str << endl;
//		}
//		
//	}
//	
//
//
//
//};
//
//int main()
//{
//	char control;
//	EditableString str;
//	str.str = "1234567890";
//
//	while (cin >> control)
//	{
//		if (control != 'i' && control != 'd' && control != 'r')
//		{
//			break;
//		}
//		
//		if (control == 'i')
//		{
//			int pos;
//			char a;
//			cin >> pos;
//			cin >> a;
//			str.insert(a, pos);
//		}
//		else if (control == 'd')
//		{
//			int pos;
//			cin >> pos;
//			str.del(pos);
//		}
//		else if (control == 'r')
//		{
//			int pos;
//			char a;
//			cin >> pos;
//			cin >> a;
//			str.replace(a, pos);
//		}
//
//
//	}
//
//
//	return 0;
//}