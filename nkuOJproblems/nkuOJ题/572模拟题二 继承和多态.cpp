//#include<iostream>
//using namespace std;
//#include<string>
//
////"Ӧ���������������ַ��������...ʧ�����ٿ�����"
////������������д��һ�仰....û�뵽��û��...���ԾͲ��ÿ�����ô����
////˵ʵ��Ҫ�Ǹ��Ĳ���
//// ��ʱ���� 0,1,2,3 
//// ��ʱ�� ASCII����UNICODE����UTF8����ANSI�������Ǹ��Եĳ��ȵĻ�
////�о�Ҫд�ö�if else���жϵ��׸��������� �����ַ���,�Լ�����ε���
////����Ҳ���и��򵥵İ취??
////�����������ĺ�����������ΪҪ����ô���ӵĶ���
//
////��Ŀ����
////�붨��һ���ļ�File�࣬��������TextFile���ı��ļ����࣬Ҫ�����¡�
////
////(һ) ����File�ࣺ �г�Ա����filename��filesize�ֱ��ʾ�ļ������ַ������ͣ����ļ���С�����������ͣ���
////
////(��) ������TextFile�ࣺ ������Ա����fileEncoder���ļ����뷽ʽ���������ı��뷽ʽ�����֣���ASCII������Unicode������UTF8���͡�ANSI�������������ַ�������char[]������ֵ����0��1��2��3�ֱ���Ϊ��ASCII������UNICODE������UTF8���͡�ANSI���ı�ǡ�
////
////������ӹ��캯����
////������Ա����UpdateFilesize(long size)�����޸��ļ���С��
////������̬����UpdateFile()�������ļ���Ϣ����̬����������������ʽ��
////- �������ļ����뷽ʽ��
////UpdateFile(char[] encode, int encodeLength)
////UpdateFile(int encodeFlag)
////- �����ļ����뷽ʽ�������ļ�����
////UpdateFile(char[] encode, int encodeLength, char[] name int nameLength)
////UpdateFile(int encodeFlag, char[] name, int nameLength)
////������Ա����Show()��չʾ�ļ���Ϣ��չʾ���ļ���Ϣ��ʽ���������ļ��� �ļ���С �ļ����뷽ʽ���ÿո�������磺 Main.cpp 32 ASCII
////����
////��һ��Ϊ������ʼ�ֶΣ��ļ������ļ���С���ļ����뷽ʽ�������ļ���Ϊ�ַ��������Ȳ�����256�����ļ���СΪ�������ļ����뷽ʽΪ����0����ʾASCII���룩, 1����ʾUnicode���룩, 2����ʾUTF8���룩��3����ʾANSI���룩��
////
////�ڶ���������������n��0 < n < 10������ʾ������Ҫ����n��������������ÿ����һ���������������ű�ʾ���ο��±�����ִ��һ��������ִ�й����п����漰��ȡ��һ�е�������Ϊ������������ĺ�������û�ж�Ӧ�������������No such function!����ȫӢ�ģ���̾�������ţ���
////
////	����	����	˵��
////	S	Show	��ӡ��Ϣ
////	s	UpdateFilesize	�����ļ���С�����ȡ��һ��������Ϊ����
////	E	UpdateFile	�������ļ����뷽ʽ�����ȡ��һ��������Ϊ����
////	e	UpdateFile	�����ļ����뷽ʽ�������ļ���, ���ȡ��һ��������Ϊ����
////	�����
////	��Ӧ������ִ�н����
////
////	�������룺
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
////	���������
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
//	//��ֵ����0��1��2��3�ֱ���Ϊ
//	// ��ASCII������UNICODE������UTF8���͡�ANSI���ı�ǡ�
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
//	else if (c == 'E')//Ӧ���������������ַ��������...ʧ�����ٿ�����
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