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
//	List():head(nullptr),tail(nullptr)//tail���񲻳�ʼ��Ҳ��???
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
//		while (cur != nullptr)//ɾ��ֻʣtail,��,������,ֱ��ɾ��nullptr����
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
//	//�ƺ�ֻ��Ҫ��β������
//	void Insert(int val)//����ڵ�
//	{
//		Node* newnode = new Node(val);
//		//��֪�������С����û���ж�n�ǲ����ں���Χ?
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
//	void Print()//��ӡ�����������
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
//	//��ʱ��head�϶�������...m=0�Ѿ���ǰ���ų���
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