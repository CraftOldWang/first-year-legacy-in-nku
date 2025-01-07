//#include<iostream>
//using namespace std;
//
////找错误找了半天
////没想到是:
////else//val < cur->next->data的情况
////{
////	newnode->next = cur->next;
////	cur->next = newnode;
////}
////这个地方newnode->next = cur->next;
////写成了newnode=cur->next;
////这....然后new出来的东西找不到了...
////这是指针指向cur->next,有什么用???
////汲取教训吧,要想清楚是要用指向Node的指针
////还是要用某个Node的next成员
//
//
//struct Node
//{
//public:
//	Node(int val):data(val),next(nullptr)
//	{
//
//	}
//	~Node()
//	{
//
//	}
//
//	int data;
//	Node* next;
//
//};
//
//class Linkedlist
//{
//public:
//	Linkedlist():head(nullptr)
//	{
//
//	}
//
//	~Linkedlist()
//	{
//		clear();
//	}
//
//	void clear()
//	{
//		Node* cur = head;
//
//		while (cur != nullptr)
//		{
//			Node* temp = cur->next;
//			delete cur;
//			cur = temp;
//		}
//
//		head = nullptr;
//		
//	}
//
//
//	void insertordered(int val)
//	{
//		Node* newnode = new Node(val);
//		if (head == nullptr)
//		{
//			head = newnode;
//			return;
//		}
//
//		//或者可以再做一个insert来解耦合...不过需要在这里记录cur到达的位置
//		//如果相等也不插入emm
//
//		//过了这关的都是val>head->data的
//		if (val < head->data)
//		{
//			newnode->next = head;
//			head = newnode;
//			return;
//		}
//		else if (val == head->data)
//		{
//			delete newnode;
//			return;
//		}
//		
//		
//		Node* cur = head;
//		while (val > cur->next->data)
//		{
//			cur = cur->next;
//
//			//如果已经到了最后面
//			if (cur->next == nullptr)
//			{
//				delete newnode;
//				push_back(val);
//				return;
//			}
//
//		}
//
//		if (val == cur->next->data)
//		{
//			delete newnode;
//			return;
//		}
//		else//val < cur->next->data的情况
//		{
//			newnode->next = cur->next;
//			cur->next = newnode;
//		}
//		
//		
//	}
//
//	void push_back(int val)
//	{
//		Node* newnode = new Node(val);
//		if (head == 0)
//		{
//			head = newnode;
//		}
//		else
//		{
//			Node* cur = head;
//			while (cur->next != nullptr)
//			{
//				cur = cur->next;
//			}
//			cur->next = newnode;
//
//		}
//
//	}
//
//	void printlist()
//	{
//		Node* cur = head;
//		while (cur != nullptr)
//		{
//			if (cur->next !=nullptr)
//			{
//				cout << cur->data << " ";
//			}
//			else
//			{
//				cout << cur->data;
//			}
//			cur = cur->next;
//		}
//	}
//
//	Node* head;//创建一个指向Node类型的指针之前并不需要创建一个Node类型变量
//
//
//};
//
////1是素数
//bool isprime(int n)
//{
//	if (n < 2)
//	{
//		return false;
//	}
//
//	if (n == 2)
//	{
//		return true;
//	}
//
//	for (int i = 2; i < n; i++)
//	{
//		//好像负数传进来会出事???之前上机考试就是这里有问题..
//		if (n % i == 0)
//		{
//			return false;
//		}
//
//	}
//
//	return true;
//
//
//}
//
//int main()
//{
//	Linkedlist list;
//
//	int val;
//	while (cin >> val)
//	{
//		
//		if (isprime(val))
//		{
//			list.insertordered(val);
//		}
//		else
//			break;
//
//	}
//
//	list.printlist();
//
//	return 0;
//}