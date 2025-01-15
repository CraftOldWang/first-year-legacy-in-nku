////题目描述
////勇士林克在哈特诺村服饰染色点店老板瑟吉处得知，付款20卢比的同时还得寻找各种颜色的材料才能进行染色，林克决定自行研究新的佐纳乌科技进行服饰染色。
////
////现已知佐纳乌装置需要一个十六进制的颜色代码进行染色，如”#00ffff”表示青色。但不同场景中表示颜色方式有很多种，如RGB色彩模式、CMYK印刷四分色模式。请帮助林克写一个重载函数Color2Hex()来完成不同形式颜色数据向十六进制颜色代码的转换。
////
////RGB色彩模式：常用的颜色模式，有三个整数类型颜色分量R（Red红色）G（Green绿色）B（Blue蓝色），每个分量为0到255的整数，如（0, 255, 255）就表示青色；每个分量转换成十六进制数拼接起来，（0, 255, 255）对应的十六进制颜色代码就为”#00ffff”。
////
////CMYK四分色模式：三原混色加上黑色的印刷套色模式，有四个分量C（Cyan青色）M（Magenta品红色）Y（Yellow黄色）K（blacK表示灰度），每个分量为0到1之前的浮点数，如（1.0000, 0.0000, 0.0000, 0.0000）表示青色。CMYK转换RGB的计算公式如下：
////
////R = (int)255.0 * (1 - C) * (1 - K)；
////
////G = (int)255.0 * (1 - M) * (1 - K)；
////
////B = (int)255.0 * (1 - Y) * (1 - K)；
////
////请完成下面的函数功能：
////
////Void Color2Hex(int r, int g, int b);// 实现RGB数据向十六进制颜色代码转换，并输出颜色代码
////
////Void Color2Hex(float c, float m, float y, float k); // 实现CMYK数据向十六进制颜色代码转换，并输出颜色代码
////
////输入:
////程序接受两行输入：第一行为一个字符，r（或R）表示第二行为RGB数据， c（或C）表示第二行为CMYK数据；第二行为与第一行对应的输入数据。
////
////输出 :
////针对输入数据进行转换后的十六进制颜色代码，格式为”#xxxxxx”，x为对应的十六进制符号(0~f)。如果输入的字符错误或者输入的数据不规范，输出“Wrong Input!”。
////
////样例输入
////C
////1.0 0.0 0.0 0.0
////样例输出
////#00ffff
//
//
//#include<iostream>
//using namespace std;
//
//int checkchar(char a)
//{
//	if (a == 'r' || a == 'R')
//	{
//		return 1;
//	}
//	else if (a == 'c' || a == 'C')
//	{
//		return 2;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
////0 wrong ,1rgb,2cmyk
//
//bool checkrgb(int r, int g, int b)
//{
//	if (r >= 0 && r <= 255
//		&& g >= 0 && g <= 255
//		&& b >= 0 && b <= 255)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
////0 wrong ,1ok
//bool checkcmyk(float c, float m, float y, float k)
//{
//	if (c >= 0 && c <= 1
//		&& m >= 0 && m <= 1
//		&& y >= 0 && y <= 1
//		&& k >= 0 && k <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
////0 wrong ,1ok
//
//void Color2Hex(int r, int g, int b)
//{
//
//	int arr[6] = { r / 16,r % 16,g / 16,g % 16,b / 16,b % 16 };
//	char list[16] = { '0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f' };
//	char output[8] = { '#','\0','\0','\0','\0','\0','\0','\0' };
//	for (int i = 0; i < 6; i++)
//	{
//		output[i + 1] = list[arr[i]];
//	}
//	cout << output;
//
//}
//
//void Color2Hex(float c, float m, float y, float k)
//{
//	int R = 0, G = 0, B = 0;
//	R = (int)(255.0 * (1 - c) * (1 - k));
//	G = (int)(255.0 * (1 - m) * (1 - k));
//	B = (int)(255.0 * (1 - y) * (1 - k));
//
//	Color2Hex(R, G, B);
//	//print 在int的那个重载里面
//}
//
//
//int main()
//{
//	char a = '\0';
//	cin >> a;
//
//	int flag1 = checkchar(a);
//	if (flag1 == 0)
//	{
//		cout << "Wrong Input!";
//	}
//	else if (flag1 == 1)
//	{
//		int r = 0, g = 0, b = 0;
//		cin >> r >> g >> b;
//
//		int flag2 = checkrgb(r, g, b);
//		if (flag2 == 0)
//		{
//			cout << "Wrong Input!";
//		}
//		else
//		{
//			Color2Hex(r, g, b);
//		}
//
//	}
//	else if (flag1 == 2)
//	{
//		float c = 0, m = 0, y = 0, k = 0;
//		cin >> c >> m >> y >> k;
//
//
//		int flag3 = checkcmyk(c, m, y, k);
//		if (flag3 == 0)
//		{
//			cout << "Wrong Input!";
//		}
//		else
//		{
//			Color2Hex(c, m, y, k);
//		}
//	}
//
//
//
//	return 0;
//}