/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
   双指针

    定义两个指针： preprepre 和 curcurcur ；preprepre 在前 curcurcur 在后。
    每次让 preprepre 的 nextnextnext 指向 curcurcur ，实现一次局部反转
    局部反转完成之后，preprepre 和 curcurcur 同时往前移动一个位置
    循环上述过程，直至 preprepre 到达链表尾部

    time: O(n)
    space: O(1)
*/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* cur = NULL, *pre = head;
        while (pre != NULL) {
            ListNode* t = pre->next;
            pre->next = cur;
            cur = pre;
            pre = t;
        }
        return cur;
    }
};