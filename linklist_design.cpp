//#include <iostream>
//
//using namespace std;
//
//class MyListNode
//{
//	struct ListNode
//	{
//		int val;
//		ListNode* next;
//		ListNode(int val) :val(val), next(NULL) {}
//	};
//	int _size;
//	ListNode* _dummyHead;
//public:
//	MyListNode()
//	{
//		_dummyHead = new ListNode(0);
//		_size = 0;
//	}
//	int  get_size()
//	{
//		return _size;
//	}
//	auto get(int index)
//	{
//		if (index < 0 || index > _size)
//			return -1;
//		ListNode* cur = _dummyHead->next;
//		while (index--)
//		{
//			cur = cur->next;
//		}
//		return cur->val;
//	}
//	void addAtTail(int val)
//	{
//		ListNode* cur = _dummyHead;
//		while (cur->next != NULL)
//			cur = cur->next;
//		ListNode* newnode = new ListNode(val);
//		cur->next = newnode;
//		_size++;
//	}	
//	void addAtHead(int val)
//	{	
//		ListNode* newnode = new ListNode(val);
//		newnode->next = _dummyHead->next;
//		_dummyHead->next = newnode;
//		_size++;
//	}
//	void addAtIndex(int index, int val)
//	{
//		////方法1，调用
//		//if (index <= 0)
//		//	addAtHead(val);
//		//else if (index == _size)
//		//	addAtTail(val);
//		//else if (index < _size)
//		//{
//		//	ListNode* newnode = new ListNode(val);
//		//	ListNode* cur = _dummyHead;
//		//	while (index--)
//		//	{
//		//		cur = cur->next;
//		//	}
//		//	newnode->next = cur->next;
//		//	cur->next = newnode;
//		//	_size++;
//		//}
//
//		//方法2 实现
//		if (index < 0) index = 0;
//		else if (index > _size) return;
//		ListNode* newnode = new ListNode(val);
//		ListNode* cur = _dummyHead;
//		while (index--)
//		{
//			cur = cur->next;
//		}
//		newnode->next = cur->next;
//		cur->next = newnode;
//		_size++;
//	}
//	void deleteAtIndex(int index)
//	{
//		if (index < 0 || index >= _size) return;
//		ListNode* cur = _dummyHead;
//		while (index--)
//		{
//			cur = cur->next;
//		}
//		ListNode* remove = cur->next;
//		cur->next = remove->next;
//		delete remove;
//		_size--;
//	}
//};
//
//void main()
//{
//	MyListNode a;
//	for (int i = 0; i < 5; i++)
//		a.addAtTail((i + 1) * 10);
//	cout << a.get_size();
//	for (int i = 0; i < 5; i++)
//		cout << a.get(i);
//	a.addAtHead(88);
//	cout << a.get_size();
//	cout << a.get(0) << endl;
//	a.addAtIndex(0, 100);
//	for (int i = 0; i < a.get_size(); i++)
//		cout << a.get(i)<<"\t";
//	cout << endl;
//	a.addAtIndex(4, 200);
//	for (int i = 0; i < a.get_size(); i++)
//		cout << a.get(i) << "\t";
//	cout << endl;
//	a.addAtIndex(a.get_size(), 300);
//
//	a.deleteAtIndex(0);
//	for (int i = 0; i < a.get_size(); i++)
//		cout << a.get(i) << "\t";
//	cout << endl;
//}