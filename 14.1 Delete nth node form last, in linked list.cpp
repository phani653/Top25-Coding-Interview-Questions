ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i;
        if(!head || !n) return head;
        ListNode *_1st=head, *_2nd=head, *tmp;
        for(i=0;_2nd && i<=n;i++) _2nd= _2nd->next;
        if(!_2nd) {
            if(i!=n) {
                tmp=head->next;
                head->next=head->next->next;
            }
            else{
                tmp=head;
                head=head->next;   
            }
            free(tmp);
            return head;
        }
        while(_2nd){
            _2nd=_2nd->next;
            _1st=_1st->next;
        }
        tmp= _1st->next;
        _1st->next= _1st->next->next;
        free(tmp);
        return head;
    }
/*
Here if we add dummy node infront of the list, we need to check all boundary cases
    
    ListNode dummy = new ListNode(0);
    dummy.next = head;
    ListNode first = dummy;
    ListNode second = dummy;
    for (int i = 1; i <= n + 1; i++) {
        first = first.next;
    }
    while (first != null) {
        first = first.next;
        second = second.next;
    }
    second.next = second.next.next;
    return dummy.next;
 */
