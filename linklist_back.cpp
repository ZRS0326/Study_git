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
//	a = head;
//	ListNode* L = new ListNode(0);
//	ListNode* N = a->next;
//	while (a->next != nullptr)
//	{
//		a->next = L;
//		L = a;
//		a = N;
//		N = N->next;
//	}
//	a->next = L;
//	delete head->next;
//	head->next = nullptr;
//	for (int i = 0; i < 6; i++)
//	{
//		cout << a->val << "\t";
//		a = a->next;
//	}
//}