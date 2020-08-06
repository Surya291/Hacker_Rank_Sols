https://www.interviewbit.com/problems/add-two-numbers-as-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    
    ListNode *temp;
ListNode * head = new ListNode(0);
temp = head;
    int a,b,carry = 0,ans,d;
    while(A != NULL || B!=NULL){
        ListNode *temp2;
        temp2 = new ListNode(0);

        
        
        a =0,b = 0;
        
        if(A!=NULL){
            a = A->val;
            A = A->next;
        }
        
        if(B != NULL){
            b = B->val;
            B = B->next;
        }
        
        ans = a+b + carry;
        carry = ans/10;
        d = ans%10;
        
        //cout << a  << " "<< b << " " << d << endl;
        temp2->val = d;
        temp->next = temp2;
        temp = temp->next;
        
    }
    
    if(carry > 0){
        ListNode *temp2;
        temp2 = new ListNode(carry);
        temp->next = temp2;
        
    }
    
    return head->next;
}

