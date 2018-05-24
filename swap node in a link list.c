struct ListNode* swapPairs(struct ListNode* head) 
{
    struct ListNode *temp1,*temp2;
    
    if(head == NULL || head->next == NULL)
    return head;
    
    temp1 = swapPairs(head->next->next);
    temp2 = head->next;
    head->next = temp1;
    temp2->next = head;
    
    return temp2;
}