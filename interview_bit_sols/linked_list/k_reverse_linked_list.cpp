https://www.interviewbit.com/problems/k-reverse-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    
    ListNode* cur = A;
    ListNode* prev,*present,*next;
    int i;
    if(cur == NULL){
        return NULL;
    }
    
    for(i = 0; i< B;i++){
        cur = cur->next;
    }
    
    prev = Solution::reverseList( cur,  B);
    present = A;
    
    for(i = 0;i < B;i++){

        next = present->next;
        present-> next = prev;
        prev = present;
        present = next;
    }
    
    return prev;
    
}


