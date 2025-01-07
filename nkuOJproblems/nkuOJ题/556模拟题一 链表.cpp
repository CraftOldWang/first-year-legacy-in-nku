//#include<iostream>
//using namespace std;
//#include <stdlib.h>
//#include <time.h>
//
//struct Node
//{
//public:
//	Node(int val) :data(val), next(nullptr)
//	{
//
//	}
//
//	int data;
//	Node* next;
//};
//
//class List
//{
//public:
//	List():head(nullptr),tail(nullptr)//tail好像不初始化也行???
//	{
//		
//	}
//
//	~List()
//	{
//		clear();
//	}
//
//	void clear()
//	{
//		Node* cur = head;
//		while (cur != nullptr)//删到只剩tail,呃,并不用,直接删到nullptr即可
//		{
//			Node* nextcur = cur->next;
//			delete cur;
//			cur = nextcur;
//		}
//		head = nullptr;
//		tail = nullptr;
//		
//
//	}
//
//	//似乎只需要在尾部插入
//	void Insert(int val)//插入节点
//	{
//		Node* newnode = new Node(val);
//		//不知道链表大小不是没法判断n是不是在合理范围?
//		if (head == nullptr)
//		{
//
//			head = tail = newnode;
//			return;
//		}
//
//		tail->next = newnode;
//		tail = newnode;
//	}
//
//	void Print()//打印链表的数据项
//	{
//		Node* cur = head;
//		while (cur->next != nullptr)
//		{
//			cout << cur->data << " ";
//			cur = cur->next;
//		}
//		cout << cur->data << endl;
//	}
//
//	//这时候head肯定不是零...m=0已经在前面排除了
//	void Solution()
//	{
//		List result;
//
//		Node* findodd = head;
//		while(1)
//		{
//			result.Insert(findodd->data);
//			if (findodd->next == nullptr)
//			{
//				break;
//			}
//			else if (findodd->next->next == nullptr)
//			{
//				break;
//			}
//			findodd = findodd->next->next;
//
//		}
//
//
//		if(head->next!=nullptr)
//		{
//			Node* findeven = head->next;
//			while (1)
//			{
//				result.Insert(findeven->data);
//				if (findeven->next == nullptr)
//				{
//					break;
//				}
//				else if (findeven->next->next == nullptr)
//				{
//					break;
//				}
//				findeven = findeven->next->next;
//
//			}
//		}
//
//		result.Print();
//
//	}
//
//public:
//	Node* head;
//	Node* tail;
//
//};
//
//int main()
//{
//	/*srand(time(NULL));*/
//	int n = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		List L;
//		int m = 0;
//		cin >> m;
//		for (int j = 0; j < m; j++)
//		{
//			int temp = 0;
//			cin >> temp;
//			L.Insert(temp);
//		}
//
//		if (m ==0)
//		{
//			cout << "NULL" << endl;
//		}
//		else
//		{
//			L.Solution();
//		}
//
//
//	}
//
//	return 0;
//}