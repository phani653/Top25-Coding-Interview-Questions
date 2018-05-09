int getMiddle(Node *head)
{
   if(!head) return -1;
   Node *slow=head, *fast=head;
   while(fast and fast->next){
       fast=fast->next->next;
       slow=slow->next;
   }
   return slow->data;
}
