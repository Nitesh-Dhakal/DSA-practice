class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current=head;
        ListNode* prev=NULL;
        ListNode* nextnode=NULL;
        while(current!=NULL){
            nextnode=current->next;
            current->next=prev;
            prev=current;
            current=nextnode;
        }
        return prev;
    }      
};