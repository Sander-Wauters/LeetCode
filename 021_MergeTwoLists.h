#pragma once

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class MergeTwoLists {
public:
	/*
	CONSTRAINTS:
	The number of nodes in both lists is in the range[0, 50].
	- 100 <= Node.val <= 100
	Both list1 and list2 are sorted in non - decreasing order.
	*/

	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
	{
		if (list1 == nullptr)
			return list2;
		if (list2 == nullptr)
			return list1;

		if (list1->val < list2->val)
		{
			list1->next = mergeTwoLists(list1->next, list2);
			return list1;
		}
		else
		{
			list2->next = mergeTwoLists(list1, list2->next);
			return list2;
		}
	}
};