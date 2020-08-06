https://www.interviewbit.com/problems/intersection-of-linked-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    ListNode * current = A;
     ListNode * curr2;
    int m  = 0,n = 0,i;
    while(current != NULL){
        m++;
        current = current-> next;
    }
    
    current  = B;
        while(current != NULL){
        n++;
        current = current-> next;
    }
    
    if(m > n){
        current = A;
        curr2 = B;
    }
    
    else{
        current = B;
        curr2 = A;
    }
    int d = abs(m-n);
    for(i = 0;i <d;i++){
        current = current ->next;
    }
    
    
    while(current != curr2){
        current = current->next;
        curr2 = curr2 -> next;
    }
    return current;
    
}

