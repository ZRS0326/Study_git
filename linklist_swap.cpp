//#include <iostream>
//#include <list>
//using namespace std;
//
//struct ListNode
//{
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(NULL) {}  // 节点的构造函数
//	ListNode(int x, ListNode* y) : val(x), next(y) {}  // 节点的构造函数
//};
//void main()
//{
//	ListNode* a = new ListNode(1);
//	ListNode* head = a;
//	for (int i = 0; i < 5; i++)
//	{
//		a->next = new ListNode((i + 1) * 10);
//		a = a->next;
//	}
//	cout << "a: " << a << endl;
//	a = head;
//	for (int i = 0; i < 6; i++)
//	{
//		cout << a->val << "\t";
//		a = a->next;
//	}
// 
// 
//	ListNode* h = new ListNode(0);
//	h->next = head;
//	ListNode* temp;
//	ListNode* v = h;
//	while (v->next != nullptr && v->next->next != nullptr)
//	{
//		temp = v->next->next;
//		v->next->next = v->next->next->next;
//		temp->next = v->next;
//		v->next = temp;
//		v = v->next->next;
//	}
//}