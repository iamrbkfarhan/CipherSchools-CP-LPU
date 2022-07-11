class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode head, *p = &head;
        head.next = a;
        while (p->next && b) {
            if (p->next->val > b->val) {
                auto node = b;
                b = b->next;
                node->next = p->next;
                p->next = node;
            }
            p = p->next;
        }
        if (b) p->next = b;
        return head.next;
    }
};