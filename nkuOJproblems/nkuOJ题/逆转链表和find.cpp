//#include<iostream>
//#include<ctime>
//#include<vector>
//using namespace std;
////дһд��ת�����find����  
//
//class lklist
//{
//	struct Node
//	{
//		int data;
//		Node* next;
//		Node(int val) :data(val), next(nullptr) {	}
//
//	};
//	Node* head;
//	Node* tail;
//
//public:
//	lklist() :head(nullptr), tail(nullptr) {}
//
//	void push_back(int val)
//	{
//		Node* newnode = new Node(val);
//		if (head == nullptr)//count==0
//		{
//			head = tail = newnode;
//			return;
//		}
//
//		Node* tmp = head;
//		while (tmp->next != nullptr)
//		{
//			tmp = tmp->next;
//		}
//		tmp->next = newnode;
//		tail = newnode;
//
//
//	}
//
//	//Լ20min
//	void myreverse()
//	{
//		if (head ==tail)//node num ==0or1
//			return;
//
//		tail = head;
//		Node* cur = head;
//		Node* tmp1 = cur->next;
//		Node* tmp2 = cur->next->next;
//		//���ԵȽ���һ��ѭ�����ٸ���tmp2��ֵ,��������ǰһ��ѭ����ĩβ����,����
//		//ÿ���ж�Ϊ����,tmp1 tmp2������nullptr,Ȼ����Ȼtmp2����=tmp1->next
//		//�Ƕ�tmp2->next�ĸ��µ���û���ҵ���һ���ڵ��,���Ǻ��ҵ�tmp2ֻ��Ҫ��
//		//tmp1����֮ǰ���¼���,���Ǻ�д�ڱ���ѭ����tmp1����ǰ�������ϴ�ѭ���Ľ�β.
//		// �����Ͳ������nullptr->next��,��ʡ��һЩ����
//		
//	
//		while (tmp2 != nullptr)
//		{
//			tmp1->next = cur;
//			cur =tmp1;
//			tmp1 = tmp2;
//			tmp2 = tmp2->next;
//
//		}
//		tmp1->next = cur;
//		head->next = nullptr;
//		head = tmp1;
//			
//
//		
//
//	}
//
//	void gptadvancedreverse()
//	{
//		if (head == tail)//node num ==0or1
//			return;
//
//		tail = head;
//		Node* prev = nullptr;
//		Node* cur = head;
//		Node* next = nullptr;
//		while (cur != nullptr)
//		{
//			next = cur->next;
//			cur->next = prev;
//			prev = cur;
//			cur = next;
//		}
//		head = prev;
//	}
//
//	//���㿪ʼ,û�ҵ�����-1
//	int find(int val)
//	{
//		//����������at����
//		//int nodecount = 0;
//		//Node* tmp = head;
//		//while (tmp != nullptr)
//		//{
//		//	tmp = tmp->next;
//		//	++nodecount;
//		//}
//		//if (<0 || pos>nodecount - 1)
//		//{
//		//	cout << "not in the range" ;
//		//	return -1;
//		//}
//		//д���ˣ�������±�����õ�
//		//Node* cur = head;
//		//for (int i = 0; i < pos; i++)
//		//{
//		//	cur = cur->next;
//		//}
//		//return cur->data;
//
//		int pos = 0;
//		Node* cur = head;
//		while (cur != nullptr)
//		{
//			
//			if (cur->data == val)
//				return pos;
//			cur = cur->next;
//			++pos;
//		}
//		return -1;
//	}
//
//	//������԰�pos����head��ƫ�ƣ����������
//	int at(int pos)
//	{
//		int nodecount = 0;
//		Node* tmp = head;
//		while (tmp != nullptr)
//		{
//			tmp = tmp->next;
//			++nodecount;
//		}
//
//		if (pos<0 || pos>nodecount - 1)
//		{
//			cout << "not in the range" ;
//			return -1;
//		}
//
//
//		Node* cur = head;
//		for (int i = 0; i < pos; i++)
//		{
//			cur = cur->next;
//		}
//		return cur->data;
//	}
//	void print()
//	{
//		Node* cur = head;
//		bool isnotfirst = false;
//		while (cur != nullptr)
//		{
//			if (isnotfirst)
//			{
//				cout << " ";
//				
//			}
//			cout << cur->data;
//			cur = cur->next;
//			isnotfirst = true;
//		}
//		cout << endl;
//
//	}
//
//};	
//
//
//void test01()
//{
//	srand((unsigned)time(NULL));
//	lklist list;
//	for (int i = 0; i < 20; i++)
//	{
//		list.push_back(rand() % 100 + 1);
//	}
//	list.print();
//
//	//test find
//	//int isnotfirst = false;
//	//for (int i = 0; i < 100; i++)
//	//{
//	//	if (isnotfirst)
//	//		cout <<"  ";
//	//	cout <<i+1<<":" << list.find(i + 1);
//	//	isnotfirst = true;
//	//}
//	//cout << endl;
//
//	//test reverse
//	list.myreverse();
//	list.print();
//
//	list.gptadvancedreverse();
//	list.print();
//
//
//
//}
//
//void test02()
//{
//	vector<int> v;
//	for (int i = 0; i < 100; i++)
//	{
//		v.push_back(rand() % 100 + 1);
//	}
//	cout << endl;
//	cout << v[2] << " " << v.size() << " " << v.capacity() << endl;
//}
//
//int main()
//{
//	test01();
//	
//	//test02();
//
//	return 0;
//}