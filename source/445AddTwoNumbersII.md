
tips:利用堆栈来计算低位
```
Definition for singly-linked list.
#include <vector>
#include <iostream>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		vector<int> nums1, nums2;
		while (l1) {
			nums1.push_back(l1->val);
			l1 = l1->next;
		}
		while (l2) {
			nums2.push_back(l2->val);
			l2 = l2->next;
		}
		int m = nums1.size(), n = nums2.size();
		int sum = 0, carry = 0;

		ListNode* head = nullptr, *p = nullptr;

		for (int i = m - 1, j = n - 1; i >= 0 || j >= 0 || carry > 0; i--, j--) {
			sum = carry;
			if (i >= 0)
				sum += nums1[i];

			if (j >= 0)
				sum += nums2[j];
			carry = sum / 10;
			p = new ListNode(sum%10);
			p->next = head;
			head = p;
		}
		return head;


	}
};

```
[refer](https://leetcode.com/problems/add-two-numbers-ii/discuss/92624/)
```
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int n1 = length(l1), n2 = length(l2);
		int carry = 0;
		ListNode* h = new ListNode(1);
		h->next = n1 > n2 ? add_aux(l1, l2, n1 - n2, carry) : add_aux(l2, l1, n2 - n1, carry);
		return carry == 1 ? h : h->next;
	}
private:
	int length(ListNode* l) {
		int len = 0;
		while (l != nullptr) {
			len++;
			l = l->next;
		}
		return len;
	}
	ListNode* add_aux(ListNode* l1, ListNode* l2, int k, int& carry) {
		if (l2 == nullptr) return nullptr;
		ListNode* p = new ListNode(l1->val);
		if (k > 0) {
			p->next = add_aux(l1->next, l2, k - 1, carry);
		}
		else {
			p->val += l2->val;
			p->next = add_aux(l1->next, l2->next, k, carry);
		}
		p->val += carry;
		carry = p->val / 10;
		p->val %= 10;
		return p;
	}
};
```
