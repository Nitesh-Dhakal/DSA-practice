class Solution {
public:
    struct compare {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val; 
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, compare> min;
        for(int i=0;i<lists.size();i++){
           if(lists[i] != NULL) { 
               min.push(lists[i]);
            }
        }
        ListNode* dummy = new ListNode(0);
        ListNode* current=dummy;
        while(min.size()>0){
            ListNode* winner=min.top();
            min.pop();
            current->next=winner;
            current=current->next;
            if(winner->next != NULL){
                min.push(winner->next);
            }
        }
        return dummy->next;
    }
};