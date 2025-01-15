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
//		//�����Ƿ��ǿյ�
//		if (head == nullptr)
//		{
//			head = newnode;
//			return;
//		}
//
//		//����һ�أ�˵��val>head->data
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
//			//������˵��val>cur->next->data,Ȼ����
//			//��ѧ���ɷ���val��ʵҲ��cur->data(����ǰ����һ���head->data������
//			//Ҳ��д����>ǰ��,<�����ȽϺ����
//
//			cur = cur->next;
//
//		}
//
//		//ʣ��������cur->next==nullptr��,���뵽���
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
//		//���ظ���ɾ����ġ�������Ϊ������������ǰ���ҡ�
//		//Ҳ���ҿ��Դ����������õ�ָ��;
//		Node* cur = head;
//
//		//�����������cur->next��nullptr�Ļ������·��
//		// �Ӷ�����ȥ������ʽcur->next->next
//		// (next��nullptr��,������next->next��,������˵Ӧ�ñ���)
//		//�Ӷ�û��...
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
//		//��������cur->next==nullptr or  cur->next->next==nullptr
//
//		//��д�����ֹ������cur->next->data����
//		if (cur->next == nullptr)
//		{
//			return;
//		}
//
//		//��Ⱦ�ɾ,����Ⱦ�û����
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
//	//���Խ�remove����erase
//	void del(int i)
//	{
//		if (i<1 || i>size)
//		{
//			return;
//		}
//		
//		//���Ǳ߽�������鷳www
//
//		if (size == 1)
//		{
//			delete head;
//			head = nullptr;
//			return;
//		}
//
//		//size>1�����
//
//		Node* cur = head;
//		if (i == 1)
//		{
//			//����cur->next��Ҫsize>1...��Ȼû��
//			head = cur->next;
//			delete cur;
//			--size;
//		}
//		else if (i == size)
//		{
//			//������Ҫ����ָ���size-1��Node��ָ��,
//			//�����ǿ�ʼ��ָ���1��Node��ָ��(head);
//			//����������Ҫ�ƶ�size-1-1=size-2��
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
//		else//ɾ���м�Ķ���
//		{	
//			//ͬ��i-2
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
//	//�ڵ�ȥ�غ��մ�С�����˳�����β��뵽������;...���������
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
