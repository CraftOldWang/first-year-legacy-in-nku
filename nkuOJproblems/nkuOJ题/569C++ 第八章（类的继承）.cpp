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
//	//��Щ����������Ҫ�õ�size
//	void insert(char val, int pos)
//	{
//		if (pos<1 || pos>(getsize()+1))
//		{
//			cout << str << endl;
//		}
//		else
//		{
//			//Ҳ��Ӧ�ÿ�������insert�����ʵ�ֵ�
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
//			//pos-1Ӧ���ǵ�һ��Ԫ�ذ�,�Ҽǵ�Ӧ���Ǵ�0��ʼ��
//			str.erase(pos - 1, 1);
//			cout << str << endl;
//		}
//	}
//	
//	void replace(char val, int pos)
//	{
//
//		//�����ַ�����תһ��̫����,��ʲô�취�Ľ���?
//		//�������±����at������ȡ�������ַ�...
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