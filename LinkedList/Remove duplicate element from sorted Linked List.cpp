Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node* temp=head;
 while(temp!=NULL)
 {
     while(temp->next!=NULL && temp->next->data==temp->data)
     {
         temp->next=temp->next->next;
     }
     temp=temp->next;
 }
 return head;
}