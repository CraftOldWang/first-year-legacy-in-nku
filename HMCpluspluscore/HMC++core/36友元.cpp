//#include<iostream>
//#include<string>
//using namespace std;
//
//class yourhome
//{
//	friend class me;
//	friend void playmusic();
//private:
//	static void yourrecorder()
//	{
//		cout << "play music" << endl;
//	}
//private:
//	string yourbed = "yourbed";
//	static int desk ;		//静态成员变量不能在类内初始化，因为它在类对象创建之前就存在了
//};
//int yourhome::desk = 10;
//
//class me
//{
//public:
//	void stealyourbed(yourhome& home)
//	{
//		home.yourbed = "mybed";
//	}
//
//	void whosbed(yourhome& home)
//	{
//		cout << home.yourbed << endl;
//	}
//
//
//	yourhome anotherhome;
//
//};
//
//void playmusic()
//{
//	yourhome::yourrecorder();
//}
//
//
//
//void test01()
//{
//
//	playmusic();
//	yourhome a_home;
//
//	me ahh;
//	ahh.whosbed(a_home);
//	ahh.stealyourbed(a_home);
//	ahh.whosbed(a_home);
//	playmusic();
//	
//}
//
//int main()
//{
//
//	test01();
//
//	return 0;
//}