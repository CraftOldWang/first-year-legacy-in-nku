//#include<iostream>
//using namespace std;
//
////�Ҵ������˰���
////û�뵽��:
////else//val < cur->next->data�����
////{
////	newnode->next = cur->next;
////	cur->next = newnode;
////}
////����ط�newnode->next = cur->next;
////д����newnode=cur->next;
////��....Ȼ��new�����Ķ����Ҳ�����...
////����ָ��ָ��cur->next,��ʲô��???
////��ȡ��ѵ��,Ҫ�������Ҫ��ָ��Node��ָ��
////����Ҫ��ĳ��Node��next��Ա
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
//		//���߿�������һ��insert�������...������Ҫ�������¼cur�����λ��
//		//������Ҳ������emm
//
//		//������صĶ���val>head->data��
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
//			//����Ѿ����������
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
//		else//val < cur->next->data�����
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
//	Node* head;//����һ��ָ��Node���͵�ָ��֮ǰ������Ҫ����һ��Node���ͱ���
//
//
//};
//
////1������
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
//		//�����������������???֮ǰ�ϻ����Ծ�������������..
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