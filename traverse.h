void traverse(struct Node **head, void (*f)(struct Node *))
{
    struct Node *temp = *head;
    while(temp != NULL)
    {
        f (temp);
        temp = temp->next;
    }
    free(temp);
}
