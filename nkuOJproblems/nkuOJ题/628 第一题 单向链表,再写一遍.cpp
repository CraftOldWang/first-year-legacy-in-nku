//#include<iostream>
//using namespace std;
////写一写逆转链表和find函数 
//
////也许可以把成员变量放上面,然后把函数放下面,这样打开定义的时候好看有什么
////呃,在不太认得类里有什么变量的时候,这样确实更好.
////但很熟悉的话,放下面也ok....
////或者干脆类外实现吧
//struct Node
//{
//	Node(int val) :data(val), next(nullptr)
//	{
//	
//	}
//
//	int data;
//	Node* next;
//};
//
//class lklist
//{
//public:
//	lklist()
//	{
//		head = tail = nullptr;
//	}
//
//	~lklist()
//	{
//		Node* cur = head;
//		while (cur != nullptr)
//		{
//			Node* tmp = cur->next;
//			delete cur;
//			cur = tmp;
//		}
//		
//
//	}
//	void insert(int val)
//	{
//		Node* newnode = new Node(val);
//
//		if (head == nullptr)
//		{
//			head = tail = newnode;
//			return;
//		}
//
//		if (val == head->data || val == tail->data)
//		{
//			return;
//		}
//
//		if (val < head->data)
//		{
//			newnode->next = head;
//			head = newnode;
//		}
//		else if (val > tail->data)
//		{
//			tail->next = newnode;
//			tail = newnode;
//		}
//		else//nodenum>=2and val>head->data,val<tail->data
//		{
//			Node* cur = head;
//			while (cur->next != nullptr && cur->next->data < val)
//			{
//				cur = cur->next;
//			}
//			//if(cur->next==nullptr)
//			// 无此可能因为在这前一步就已经与tail->data比过而不向前走了
//			if (cur->next->data == val)
//			{
//				return;
//			}
//			else
//			{
//				newnode->next = cur->next;
//				cur->next = newnode;
//				return;
//			}
//
//		}
//
//
//	}
//
//	void erase(int pos)
//	{
//		int count = 0;
//		Node* cur = head;
//		while (cur!= nullptr)
//		{
//			cur = cur->next;
//			count++;
//		}
//
//		if (pos<1 || pos>count)
//		{
//			return;
//		}
//
//		Node* tmp = head;
//		//下面的分类是因为要动head或者tail
//		//还得考虑count==1的情况
//		if (count == 1)
//		{
//			delete head;
//			head = tail = nullptr;
//		}
//		else if (pos == 1)//一下count>=2
//		{
//			tmp = head->next;
//			delete head;
//			head = tmp;
//		}
//		else //好像写重复了..跟昨天跟ldr问的
//		{
//			for (int i = 0; i < pos - 2; i++)
//			{
//				tmp = tmp->next;
//			}
//			Node* tmp2 = tmp->next->next;
//			delete tmp->next;
//			tmp->next = tmp2;
//			
//		}
//
//
//	}
//	
//	void printodd()
//	{
//		Node* cur = head;
//		int x = 0;
//		while (cur != nullptr)
//		{
//			if (x% 2 == 0)
//			{
//				if (x == 0)
//				{
//					cout << cur->data;
//				}
//				else
//				{
//					cout << " " << cur->data;
//				}
//				
//			}
//			cur = cur->next;
//			++x;
//
//		}
//
//	}
//
//private:
//	Node* head;
//	Node* tail;
//};
//
//
//void test01()
//{
//	int n = 0;
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (i!=0)
//		{
//			cout << endl;
//		}
//		lklist list;
//		int input = 0;
//		while (cin >> input)
//		{
//			if (input != 0)
//			{
//				list.insert(input);
//			}
//			else
//			{
//				break;
//			}
//		}
//		int pos = 0;
//		cin >> pos;
//		list.erase(pos);
//		list.printodd();
//		
//
//	}
//
//}
//
//int main()
//{
//	test01();
//	
//	return 0;
//}