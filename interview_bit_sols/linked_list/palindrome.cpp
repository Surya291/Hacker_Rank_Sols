https://www.interviewbit.com/problems/palindrome-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
        ListNode * current = A;
        ListNode *cur1,*cur2;
        int count = 0,end,i;
    while(current != NULL){
        count++;
        current = current-> next;
    }
    
    if(count %2 == 0){
        end = count/2;
        
        
        ListNode *prev = NULL;
        current = A;
        ListNode *next;
            
            for(i = 0;i < end;i++){
            next = current->next;
            current -> next = prev;
            prev = current;
            current = next;
        }
        cur1 = prev;
        cur2 = current;
    
    }
    
    else{
        end = (count-1)/2;
        
        ListNode *prev = NULL;
        current = A;
        ListNode *next;
            
            for(i = 0;i < end;i++){
            next = current->next;
            current -> next = prev;
            prev = current;
            current = next;
        }
        cur1 = prev;
        cur2 = current->next;

    }
//cout << cur1->val<<" " <<cur2->val<<" " << endl;

while(cur1!=NULL){
    if(cur1->val != cur2->val){
        return 0;
    }
    cur1 = cur1->next;
    cur2 = cur2->next;
}
return 1;
    

    

}

