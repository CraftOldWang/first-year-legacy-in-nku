//
//#include<iostream>
//using namespace std;
//class node {
//
//public:
//	int m;
//	node* next;
//	~node() {};
//	node(int a) {
//		m = a;
//		next = nullptr;
//	}
//};
//class list {
//	node* head;
//	node* tail;
//
//public:
//	int count;
//	~list() {};
//	list() {
//		head = nullptr;
//		tail = nullptr;
//		count = 0;
//	}
//	void Insert(int n) {
//		node* tmp = new node(n);
//		//��������ʼ��������ڵ�
//		if (head == NULL) {
//			//����ͷָ��Ϊ�գ�������δ����
//			head = tail = tmp;
//			count++;
//		}
//		else
//		{
//			if (n < head->m)//��ǰ����С������ͷ��㱣�������
//			{
//				tmp->next = head;
//				head = tmp;
//				count++;
//				return;
//			}
//			else if (n > tail->m)//��ǰ���ݴ�������β��㱣�������
//			{
//				tail->next = tmp;
//				tail = tmp;
//				count++;
//				return;
//			}
//
//			node* curr = head;
//			while (curr->next != NULL)//Ѱ�Һ��ʵĲ���λ��
//			{
//				//����ͣ���������
//				//1.�ҵ�����λ����
//				//2.��������ȵģ���Ӧ����
//				if ((curr->m < n) && (curr->next->m > n))
//				{
//					tmp->next = curr->next;
//					curr->next = tmp;
//					count++;
//					return;
//				}
//				else if (curr->m == n)break;
//				curr = curr->next;
//			}
//		}
//	};
//
//	void Print() {
//
//		node* tmp = head;
//		if (count % 2 == 1) {
//			while (tmp != tail) {
//				cout << tmp->m << " "; tmp = tmp->next->next;
//			}
//			cout << tail->m;
//		}
//		else if (count != 0) {
//			while (tmp->next != tail) {
//				cout << tmp->m << " "; tmp = tmp->next->next;
//			}
//			cout << tmp->m;
//		}
//		else cout << endl;
//
//	};//��ӡ�����������
//	void remove(int k) {
//
//
//		if (k == 1) {
//			head = head->next; count--;
//		}
//		else if (k == count) {
//			node* tmp = head; while (tmp->next != tail)tmp = tmp->next;
//			tail = tmp; tail->next = nullptr; count--;
//		}
//		else if (k > 1 && k < count) {
//			node* tmp = head; while ((--k) != 1)tmp = tmp->next;
//			tmp->next = tmp->next->next;
//			count--;
//		}
//		else if (k > count) {};
//	}
//};
//
//int main() {
//	int d; cin >> d; list a[5];
//
//	for (int i = 0; i < d; i++) {
//		int m[1000]; int e = 0;
//
//		for (int j = 0; j < 1000; j++) {
//			cin >> m[j];
//			if (m[j] == 0) {
//				break;
//			}
//			e++;
//		}
//
//		for (int j = 0; j < e; j++) {
//
//			a[i].Insert(m[j]);
//		}
//
//		int g; cin >> g;
//
//		if (g <= a[i].count)a[i].remove(g);
//	}
//
//	for (int i = 0; i < d; i++) {
//		a[i].Print(); cout << endl;
//	}
//
//	return 0;
//}