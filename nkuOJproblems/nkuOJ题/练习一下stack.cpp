//#include<iostream>
//using namespace std;
//#include<stack> 
//
// //û��Ҫ����һ���ģ�ֻ�����������ʽ��ʵ��stack
// template<class T>
// class Mystack
// {
// public:
//	 struct Node
//	 {
//	 public:
//		 Node(T val) :data(val), next(nullptr) { }
//		 //~Node() {};  ��Ϊ������ʲô������ֱ����Ĭ�ϵľͺ�
//		 T data;
//		 Node* next;
//	 };
//
//	 Mystack():size(0),head(nullptr),tail(nullptr)
//	 {
//
//	 }
//
//	 ~Mystack()
//	 {
//		 clear();
//	 }
//
//	 void clear()
//	 {
//		 Node* cur = head;
//		 while (cur != nullptr)
//		 {
//			 Node* temp = cur->next;
//			 delete cur;
//			 cur = temp;
//		 }
//		 size = 0;
//		 head = nullptr;
//		 tail = nullptr;
//	 }
//
//	 void push(T a)
//	 {
//		Node* newnode=new Node(a);
//		if (head == nullptr)
//		{
//			head = tail = newnode;
//			
//		}
//		else
//		{
//			tail->next = newnode;
//			tail = newnode;
//		}
//		size++;
//	 }
//
//	 T pop()
//	 {
//		
//
//		 T temp = tail->data;
//
//		 if (head == tail)
//		 {
//			 head = tail = nullptr;
//			 size--;
//			 return temp;
//		 }
//
//		 Node* cur = head;
//		 while (cur->next != tail)
//		 {
//			 cur = cur->next;
//		 }
//		 tail = cur;
//		 delete cur->next;
//		 cur->next = nullptr;
//		 size--;
//		 return temp;
//	 }
//
//	 T peek()//size==0ʱ������
//	 {
//		 return tail->data;
//	 }
//
//	 bool isEmpty()
//	 {
//		 return size == 0;
//	 }
//
//	 int getsize()
//	 {
//		 return size;
//	 }
//
// private:
//	 Node* head;
//	 Node* tail;
//	 int size;
// };
//
//
//
//int main()
//{
//	//Mystack<int> s;
//	//s.push(10);
//	//s.push(20);
//	//cout << s.pop() << endl;
//	//cout << s.pop() << endl;
//	//cout << s.isEmpty() << endl;
//
//	//
//
//	//Mystack<char>s;
//
//
//	stack<char> s;
//	char c;
//	cin >> c;
//	s.push(c);
//	while (cin >> c)
//	{
//		if(c == ')' && s.empty() == 1)
//		{
//			cout << "false" << endl;
//			return 0;
//		}
//		else if (c == ')' && s.top() == '('  )
//		{
//			s.pop();
//		}
//		else
//		{
//			s.push(c);
//		}
//		
//	}
//	if (s.empty() == 1)
//	{
//		cout << "true" << endl;
//	}
//	else
//	{
//		cout << "false" << endl;
//	}
//	
//	return 0;
//}