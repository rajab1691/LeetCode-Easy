/*
  1.Use two ptr approach put one at head other at head's next
  2.start comparing value
  3.if same value then break the link
  4.else continue
  T.C-O(n)
  S.C-O(1)
*/
ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL or head->next==NULL)
            return head;
        
        ListNode* curr=head->next;
        ListNode* prev=head;
        
        while(curr){
            
            if(prev->val==curr->val){
                prev->next=curr->next;
                curr->next=NULL;
                curr=prev->next;
            }else{
                prev=prev->next;
                curr=curr->next;
            }
        }
        return head;
    }
