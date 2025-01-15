//#include<iostream>
//using namespace std;
// 
//struct Node
//{
//public:
//	Node(int val):data(val),next(nullptr)
//	{
//
//	}
//
//	int data;
//	Node* next;
//};
//
//
//class sortedlinkedlist
//{
//public:
//	sortedlinkedlist():head(nullptr),size(0)
//	{
//
//	}
//	~sortedlinkedlist()
//	{
//		clear();
//	}
//	void clear()
//	{
//		Node* cur = head;
//		while (cur != nullptr)
//		{
//			Node* next = cur->next;
//			delete cur;
//			cur = next;
//		}
//	}
//
//	void sortedinsert(int val)
//	{
//		Node* newnode = new Node(val);
//		++size;
//		//链表是否是空的
//		if (head == nullptr)
//		{
//			head = newnode;
//			return;
//		}
//
//		//过这一关，说明val>head->data
//		if (val <= head->data)
//		{
//			newnode->next = head;
//			head = newnode;
//			return;
//		}
//		
//		Node* cur = head;
//		while ( cur->next!=nullptr)
//		{
//			if (val <= cur->next->data)
//			{
//				newnode->next = cur->next;
//				cur->next = newnode;
//				return;
//			}
//			//过的来说明val>cur->next->data,然后由
//			//数学归纳法？val其实也》cur->data(这是前面那一块比head->data的意义
//			//也许写明是>前面,<后面会比较好理解
//
//			cur = cur->next;
//
//		}
//
//		//剩下来就是cur->next==nullptr了,插入到最后
//		cur->next = newnode;
//
//
//
//
//
//	}
//
//	void deletedupli()
//	{
//		//有重复，删后面的。。。因为单向链表不好往前面找。
//		//也许我可以创两个辅助用的指针;
//		Node* cur = head;
//
//		//呃，这里如果cur->next是nullptr的话，会短路，
//		// 从而不会去计算表达式cur->next->next
//		// (next是nullptr了,不会有next->next的,正常来说应该报错)
//		//从而没事...
//		while (cur->next != nullptr&&cur->next->next!=nullptr)
//		{
//			if (cur->data == cur->next-> data)
//			{
//				Node* temp = cur->next;
//				cur->next = cur->next->next;
//				delete temp;
//				--size;
//			}
//			else
//			{
//				cur = cur->next;
//			}
//		}
//
//		//接下来是cur->next==nullptr or  cur->next->next==nullptr
//
//		//先写这个防止后面用cur->next->data出错
//		if (cur->next == nullptr)
//		{
//			return;
//		}
//
//		//相等就删,不相等就没事了
//		if (cur->data == cur->next->data)
//		{
//			delete cur->next;
//			--size;
//			cur->next = nullptr;
//			
//		}
//
//	}
//
//	void printlist()
//	{
//		Node* cur = head;
//
//		while (cur->next != nullptr)
//		{
//			cout << cur->data << " ";
//			cur = cur->next;
//		}
//		cout << cur->data << endl;
//
//	}
//
//
//	void printodd()
//	{
//		if (head == nullptr)
//		{
//			return;
//		}
//		
//		if (head->next == nullptr)
//		{
//			cout << head->data ;
//			return;
//		}
//		else
//		{
//			cout << head->data;
//		}
//
//		Node* cur = head;
//		while(cur->next != nullptr && cur->next->next != nullptr)
//		{
//			cur = cur->next->next;
//			cout <<" "<< cur->data;
//		}
//		
//
//		
//		
//		
//	}
//
//	//可以叫remove或者erase
//	void del(int i)
//	{
//		if (i<1 || i>size)
//		{
//			return;
//		}
//		
//		//考虑边界情况好麻烦www
//
//		if (size == 1)
//		{
//			delete head;
//			head = nullptr;
//			return;
//		}
//
//		//size>1的情况
//
//		Node* cur = head;
//		if (i == 1)
//		{
//			//这里cur->next需要size>1...不然没得
//			head = cur->next;
//			delete cur;
//			--size;
//		}
//		else if (i == size)
//		{
//			//我们想要的是指向第size-1个Node的指针,
//			//而我们开始是指向第1个Node的指针(head);
//			//所以我们需要移动size-1-1=size-2次
//			for (int i = 0; i < size-2; i++)
//			{
//				cur = cur->next;
//			}
//
//			delete cur->next;
//			--size;
//			cur->next = nullptr;
//
//		}
//		else//删除中间的东西
//		{	
//			//同理i-2
//			for (int j = 0; j < i-2; j++)
//			{
//				cur = cur->next;
//			}
//
//			Node* temp = cur->next;
//			cur->next = cur->next->next;
//			delete temp;
//			--size;
//		}
//	}
//
//private:
//	Node* head;
//	int size;
//};
//
//
//int main()
//{
//	
//
//	//节点去重后按照从小到大的顺序依次插入到链表当中;...呃这个好难
//	int n;
//	cin >> n;
//	
//	sortedlinkedlist* arr = new sortedlinkedlist[n];
//	for (int i = 0; i < n; i++)
//	{
//
//		int cur;
//		while (cin >> cur)
//		{
//			if (cur == 0)
//				break;
//			else
//			{
//				arr[i].sortedinsert(cur);
//			}
//		}
//
//		arr[i].deletedupli();
//		int index;
//		cin >> index;
//		arr[i].del(index);
//
//
//
//	}
//	for (int i = 0; i < n; i++)
//	{
//		arr[i].printodd();
//		if (i != n - 1)
//		{
//			cout <<endl;
//		}
//
//	}
//	delete[] arr;
//
//	cout << endl;
//	
//
//	
//
//	return 0;
//
// }
//
//
