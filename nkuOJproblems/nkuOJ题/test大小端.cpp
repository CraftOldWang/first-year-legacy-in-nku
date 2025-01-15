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
//	//小端编码吧...因为p[0]是a,也就是说int中低位的放在左边(地址较小的地方)
//	cout << "1 " << p[0] << endl
//		<< "2 " << p[1] << endl
//		<< "3 " << p[2] << endl
//		<< "4 " << p[3] << endl;
//
//	return 0;
//
// 
// }

//下面的东西来自
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
//    UINT i = 0x12345678; // int 32位是4字节
//    cout << hex << i << endl;
//    UCHAR* p = (UCHAR*)&i;          //将i的地址传给数组指针p，实际上p指向的地址是i在内存中存储的第一个字节，大端就是0x12，小端就是0x78
//    if ((*p == 0x78) & (*(p + 1) == 0x56))
//        cout << "小端" << endl;
//    else if ((*p == 0x12) & (*(p + 1) == 0x34))
//        cout << "大端" << endl;
//    else
//        cout << "这是神马字节顺序呢？";
//    return 0;
//}