//#include<iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	virtual void dospeak()
//	{
//		cout << "Animal says" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//
//	void dospeak()
//	{
//		cout << "cat says" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//	virtual void dospeak()
//	{
//		cout << "dog says" << endl;
//	}
//};
//
//void speak(Animal& anim)
//{
//	anim.dospeak();
//}
//
//
//
//int main()
//{
//	
//	Cat cat;
//	speak(cat);
//	Dog dog;
//	speak(dog);
//	Animal ani;
//	cout << sizeof(ani) << endl;
//	cout << sizeof(Cat) << endl;
//
//	cout<<&speak<<endl;
//	return 0;
//}