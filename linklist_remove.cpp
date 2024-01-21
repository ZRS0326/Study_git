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
//	ListNode*  a = new ListNode(1);
//	ListNode* head = a;
//	for (int i = 0; i < 5; i++)
//	{
//		a->next = new ListNode((i + 1) * 10);
//		a = a->next;
//	}
//	cout << "a: " << a << endl;
//	a = head;
//	while (a != NULL)
//	{
//		cout << a->val << endl;
//		a = a->next;
//	}
//	cout << "head: " << head << endl;
//
//	////1
//	//a = head;
//	//while (a != NULL && a->next != NULL)
//	//{
//	//	if (a->next->val == 50)
//	//	{
//	//		ListNode* tmp = a->next->next;
//	//		delete a->next;
//	//		a->next = tmp;
//	//	}
//	//	else
//	//	{
//	//		a = a->next;
//	//	}
//	//}
//	
//	//a = head;
//	//while (a != NULL)
//	//{
//	//	cout << a->val << endl;
//	//	a = a->next;
//	//}
//	//delete a;
//	//cout << a  << endl;
//
//	ListNode* movehead = new ListNode(0, head);
//	ListNode* cur = movehead;
//	while (cur->next != NULL)
//	{
//		if (cur->next->val == 1)
//		{
//			ListNode* tmp = cur->next;
//			cur->next = cur->next->next;			
//			delete tmp;
//		}
//		else
//		{
//			cur = cur->next;
//		}
//	}
//}