ListNode* Solution::reverseList(ListNode* A) {
    
    ListNode *prev = NULL;
    ListNode *current = A;
    ListNode *next;
    while(current!= NULL){
        next = current->next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
