//#include<iostream>
//using namespace std;
// 
//int main()
//{
//	int a = 97;
//	
//	char* p =(char*)(&a) ;
//
//
//	//С�˱����...��Ϊp[0]��a,Ҳ����˵int�е�λ�ķ������(��ַ��С�ĵط�)
//	cout << "1 " << p[0] << endl
//		<< "2 " << p[1] << endl
//		<< "3 " << p[2] << endl
//		<< "4 " << p[3] << endl;
//
//	return 0;
//
// 
// }

//����Ķ�������
//https://blog.csdn.net/Frederick_Fung/article/details/115333125
//#include <iostream>
//
//using namespace std;
//
//typedef unsigned int UINT;
//typedef unsigned char UCHAR;
//
//int main()
//{
//    UINT i = 0x12345678; // int 32λ��4�ֽ�
//    cout << hex << i << endl;
//    UCHAR* p = (UCHAR*)&i;          //��i�ĵ�ַ��������ָ��p��ʵ����pָ��ĵ�ַ��i���ڴ��д洢�ĵ�һ���ֽڣ���˾���0x12��С�˾���0x78
//    if ((*p == 0x78) & (*(p + 1) == 0x56))
//        cout << "С��" << endl;
//    else if ((*p == 0x12) & (*(p + 1) == 0x34))
//        cout << "���" << endl;
//    else
//        cout << "���������ֽ�˳���أ�";
//    return 0;
//}