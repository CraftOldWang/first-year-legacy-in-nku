////ʵ��һ��ѭ�����е��� CircularQueue��֧�����²�����
////
////CircularQueue(int k)�����캯������ʼ�����У����ö��еĴ�СΪ k ��
////bool enqueue(int value)����ѭ�����в���һ��Ԫ�ء�����ɹ������򷵻� true �����򷵻� false ��������ʱ�޷�������Ԫ�ء�
////bool dequeue()����ѭ��������ɾ��һ��Ԫ�ء�����ɹ�ɾ���򷵻� true �����򷵻� false ��
////int front()����ȡ����Ԫ�ء��������Ϊ�գ����� - 1 ��
////int rear()����ȡ��βԪ�ء��������Ϊ�գ����� - 1 ��
////bool isEmpty()�����ѭ�������Ƿ�Ϊ�ա�
////bool isFull()�����ѭ�������Ƿ�������
////
////#include<iostream>
////using namespace std;
//// 
////class CircularQueue
////{
////public:
////	CircularQueue(int k);
////	~CircularQueue();
////	bool enqueue(int value);
////	bool dequeue();
////	int front();
////	int rear();
////	bool isEmpty();
////	bool isFull();
////
////private:
////	int* m_queue;
////	int capacity;
////	int size;
////
////};
////CircularQueue::CircularQueue(int k) :m_queue(new int[k]), capacity(k), size(0)
////{
////	
////}
////
////CircularQueue::~CircularQueue()
////{
////	delete[] m_queue;
////}
////
////bool CircularQueue::enqueue(int value)
////{
////	if (this->isEmpty() == 1||this->isFull()==1)
////	{
////		return false;
////	}
////	else
////	{
////		m_queue[size] = value;
////		return true;
////	}
////}
////
////
////bool CircularQueue::dequeue()
////{
////	if (this->isEmpty()==1)
////	{
////		return 0;
////	}
////	else
////	{
////
////	}
////}
////int CircularQueue::front()
////{
////	if (size == 0)
////	{
////		return -1;
////	}
////	else
////	{
////		return m_queue[0];
////	}
////}
////int CircularQueue::rear() 
////{
////	if (size == 0)
////	{
////		return -1;
////	}
////	else
////	{
////		return m_queue[size - 1];
////	}
////
////}
////bool CircularQueue::isEmpty()
////{
////	return size == 0;
////}
////bool CircularQueue::isFull()
////{
////	return size == capacity;
////}
////
////
////int main()
////{
////	
////	return 0;
////}
//
////������ʵ�ֶ���
//
//#include<iostream>
//using namespace std;
//
//struct Qnode
//{
//public:
//	Qnode(int val) :data(val), next(nullptr) {}
//	int data;
//	Qnode* next;
//};
//
//class Lqueue
//{
//public:
//	Lqueue():front(nullptr),rear(nullptr)
//	{
//
//	}
//	~Lqueue() {};
//
//	int empty()
//	{
//			
//	}
//	//void push(int);
//	//void pop();
//	//int getFront();
//	//int getRear();
//	//int getSize();
//	//void printQueue()
//	
//private:
//	Qnode* front;
//	Qnode* rear;
//};
//
//int main()
//{
//	
//
//	return 0;
//}