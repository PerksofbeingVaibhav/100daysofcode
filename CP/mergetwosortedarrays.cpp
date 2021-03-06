class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL and l2 == NULL) return NULL;
        if(l1 == NULL and l2 != NULL) return l2;
        if(l1 != NULL and l2 == NULL) return l1;
        
        ListNode *dummy = new ListNode(INT_MIN);
        ListNode *tail = dummy;
        
        while(l1 and l2)
        {
            if(l1->val < l2->val)
            {
                tail->next = l1;
                l1 = l1->next;
            }
            else
            {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }
        
        if(l1 != NULL)
            tail->next = l1;
        if(l2 != NULL)
            tail->next = l2;
        
        return dummy->next;
    }
};
