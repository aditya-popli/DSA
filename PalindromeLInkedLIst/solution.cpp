class Solution {
    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode* reverse(ListNode* head){       
        ListNode* cur = head;
        
        ListNode* pre = NULL;
        while(cur != NULL){
            ListNode* nex = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nex;
        }
        return pre;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        
        ListNode* mid = findMid(head);
        ListNode* rev = reverse(mid->next);
        mid->next = rev;

        ListNode* p1 = head;
        ListNode* p2 = mid->next;

        while(p2 != NULL){
            if(p1->val != p2->val){
                return false;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
};
