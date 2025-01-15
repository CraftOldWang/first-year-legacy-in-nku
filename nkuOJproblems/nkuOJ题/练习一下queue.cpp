////实现一个循环队列的类 CircularQueue，支持以下操作：
////
////CircularQueue(int k)：构造函数，初始化队列，设置队列的大小为 k 。
////bool enqueue(int value)：向循环队列插入一个元素。如果成功插入则返回 true ，否则返回 false 。队列满时无法插入新元素。
////bool dequeue()：从循环队列中删除一个元素。如果成功删除则返回 true ，否则返回 false 。
////int front()：获取队首元素。如果队列为空，返回 - 1 。
////int rear()：获取队尾元素。如果队列为空，返回 - 1 。
////bool isEmpty()：检查循环队列是否为空。
////bool isFull()：检查循环队列是否已满。
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
////用链表实现队列
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