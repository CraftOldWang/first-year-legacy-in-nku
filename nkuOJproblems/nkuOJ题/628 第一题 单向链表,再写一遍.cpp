//#include<iostream>
//using namespace std;
////дһд��ת�����find���� 
//
////Ҳ����԰ѳ�Ա����������,Ȼ��Ѻ���������,�����򿪶����ʱ��ÿ���ʲô
////��,�ڲ�̫�ϵ�������ʲô������ʱ��,����ȷʵ����.
////������Ϥ�Ļ�,������Ҳok....
////���߸ɴ�����ʵ�ְ�
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
//			// �޴˿�����Ϊ����ǰһ�����Ѿ���tail->data�ȹ�������ǰ����
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
//		//����ķ�������ΪҪ��head����tail
//		//���ÿ���count==1�����
//		if (count == 1)
//		{
//			delete head;
//			head = tail = nullptr;
//		}
//		else if (pos == 1)//һ��count>=2
//		{
//			tmp = head->next;
//			delete head;
//			head = tmp;
//		}
//		else //����д�ظ���..�������ldr�ʵ�
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