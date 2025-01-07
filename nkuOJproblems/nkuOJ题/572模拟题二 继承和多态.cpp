//#include<iostream>
//using namespace std;
//#include<string>
//
////"应该有那种输入是字符串的情况...失败了再看看吧"
////这是我在下面写的一句话....没想到真没有...所以就不用考虑这么多了
////说实话要是给的参数
//// 有时候是 0,1,2,3 
//// 有时是 ASCII”“UNICODE”“UTF8”“ANSI”和它们各自的长度的话
////感觉要写好多if else来判断到底给的是数字 还是字符串,以及该如何调用
////或者也许有更简单的办法??
////他这个题面真的很容易让人以为要搞这么复杂的东西
//
////题目描述
////请定义一个文件File类，并派生出TextFile（文本文件）类，要求如下。
////
////(一) 基类File类： 有成员变量filename，filesize分别表示文件名（字符串类型），文件大小（长整数类型）。
////
////(二) 派生类TextFile类： 新增成员变量fileEncoder（文件编码方式）。常见的编码方式有四种（“ASCII”，“Unicode”，“UTF8”和“ANSI”）。可以是字符串类型char[]或者数值类型0，1，2，3分别作为“ASCII”，“UNICODE”，“UTF8”和“ANSI”的标记。
////
////自行添加构造函数。
////新增成员函数UpdateFilesize(long size)，来修改文件大小。
////新增多态函数UpdateFile()来更新文件信息。多态函数有下面两种形式：
////- 仅更新文件编码方式。
////UpdateFile(char[] encode, int encodeLength)
////UpdateFile(int encodeFlag)
////- 更新文件编码方式并更新文件名。
////UpdateFile(char[] encode, int encodeLength, char[] name int nameLength)
////UpdateFile(int encodeFlag, char[] name, int nameLength)
////新增成员函数Show()来展示文件信息。展示的文件信息格式像这样“文件名 文件大小 文件编码方式”用空格隔开，如： Main.cpp 32 ASCII
////输入
////第一行为三个初始字段，文件名，文件大小，文件编码方式。其中文件名为字符串（长度不超过256），文件大小为整数，文件编码方式为数字0（表示ASCII编码）, 1（表示Unicode编码）, 2（表示UTF8编码）或3（表示ANSI编码）。
////
////第二行首先输入整数n（0 < n < 10），表示接下来要测试n个函数，接下来每输入一个函数操作（符号表示，参看下表），便执行一个函数，执行过程中可能涉及读取下一行的数据作为参数。若输入的函数符号没有对应函数，则输出“No such function!”（全英文，有叹号无引号）。
////
////	符号	函数	说明
////	S	Show	打印信息
////	s	UpdateFilesize	更新文件大小，需读取下一行数据作为参数
////	E	UpdateFile	仅更新文件编码方式，需读取下一行数据作为参数
////	e	UpdateFile	更新文件编码方式并更新文件名, 需读取下一行数据作为参数
////	输出：
////	对应函数的执行结果。
////
////	样例输入：
////	NKU_nice_every_day.txt 4321 0
////	7
////	S
////	s
////	54321
////	E
////	1
////	S
////	e
////	2 NKU_happy_every_day.md
////	n
////	S
////	样例输出：
////	NKU_nice_every_day.txt 4321 ASCII
////	NKU_nice_every_day.txt 54321 Unicode
////	No such function!
////	NKU_happy_every_day.md 54321 UTF8
//
//
//class File
//{
//public:
//
//
//	string filename;
//
//	//数值类型0，1，2，3分别作为
//	// “ASCII”，“UNICODE”，“UTF8”和“ANSI”的标记。
//	long filesize;
//};
//
//
//class TextFile:public File
//{
//public:
//	
//	TextFile(string fn,long size ,int encode)
//	{
//		filename = fn;
//		filesize = size;
//		fileEncoder = encode;
//	}
//	
//	~TextFile() {}
//
//	void UpdateFilesize(long size)
//	{
//		this->filesize = size;
//	}
//
//	void UpdateFile(char encode[])
//	{
//		string temp = encode;
//		if (temp == "ASCII")
//		{
//			this->fileEncoder = 0;
//		}
//		else if (temp == "UNICODE")
//		{
//			this->fileEncoder = 1;
//		}
//		else if (temp == "UTF8")
//		{
//			this->fileEncoder = 2;
//		}
//		else if (temp == "ANSI")
//		{
//			this->fileEncoder = 3;
//		}
//	}
//
//	void UpdateFile(int encodeFlag)
//	{
//		this->fileEncoder = encodeFlag;
//	}
//
//	void UpdateFile(char encode[],  char name[])
//	{
//		UpdateFile(encode);
//		this->filename = name;
//		
//	}
//
//
//	void UpdateFile(int encodeFlag, char name[])
//	{
//		this->fileEncoder = encodeFlag;
//		this->filename = name;
//	}
//
//	void Show()
//	{
//		cout << this->filename << " " << this->filesize << " ";
//		switch (fileEncoder)
//		{
//		case 0:
//			cout << "ASCII" << endl;
//			break;
//		case 1:
//			cout << "UNICODE" << endl;
//			break;
//		case 2:
//			cout << "UTF8" << endl;
//			break;
//		case 3:
//			cout << "ANSI" << endl;
//			break;
//		default:
//			break;
//		}
//
//
//	}
//
//
//	int fileEncoder;
//
//
//};
//
//void callfunc(TextFile& file)
//{
//	char c;
//	cin >> c;
//	if (c == 'S')
//	{
//		file.Show();
//	}
//	else if (c == 's')
//	{
//		long size;
//		cin >> size;
//		file.UpdateFilesize(size);
//	}
//	else if (c == 'E')//应该有那种输入是字符串的情况...失败了再看看吧
//	{
//		int encoder;
//		cin >> encoder;
//		file.UpdateFile(encoder);
//
//	}
//	else if (c == 'e')
//	{
//		int encoder;
//		char fname[257];
//		cin >> encoder;
//		cin >> fname;
//		file.UpdateFile(encoder, fname);
//	}
//	else
//	{
//		cout << "No such function!" << endl;
//	}
//
//}
//
//
//int main()
//{
//	string fname;
//	long fsize;
//	int fencoder;
//	cin >> fname >> fsize >> fencoder;
//
//	TextFile file(fname, fsize,fencoder);
//
//	int n;
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//
//		callfunc(file);
//	}
//
//
//
//	return 0;
//}