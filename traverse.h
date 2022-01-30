void traverse(struct Node **head, void (*f)(struct Node *))
{
    if(head == NULL) {
           printf("\nEmpty List\n");
       } else {
           struct Node *temp = *head;
           while(temp != NULL)
           {
               f (temp);
               temp = temp->next;
           }
           free(temp);
       }
}
