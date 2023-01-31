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

	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
		for (int i = 1; i <= 50; ++i)
		{
			std::cout << list1->val << list2->next;
			list1 = list1->next;
			list2 = list2->next;
		}
		return list2;
	}
};