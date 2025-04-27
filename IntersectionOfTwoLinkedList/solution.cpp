class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL) return NULL;
        
        ListNode* a = headA;
        ListNode* b = headB;
        
        // Traverse both lists
        while (a != b) {
            // Move to next node or switch to other list's head
            a = (a == NULL) ? headB : a->next;
            b = (b == NULL) ? headA : b->next;
        }
        
        return a; // Either intersection node or NULL
    }
};
