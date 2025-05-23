class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* pre = dummy;
        ListNode* nex = dummy;
        ListNode* cur = dummy;
        int count = 0;
        while(cur->next != NULL){
            cur = cur->next;
            count += 1;
        }
        
        while(count >= k){
            cur = pre->next;
            nex = cur->next;
            for(int i = 1; i<k; i++){
                cur->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = cur->next;
            }
            pre = cur;
            count -= k;

        }
        return dummy->next;
    }
};
