void push(struct Node **head, int am, int semester, char *fullName) {
    /* 1. allocate node */
    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));

    /* 2. put in the data  */
    new_node->data.am = am;
    new_node->data.semester = semester;
    new_node->data.fullName = fullName;

    /* 3. Make next of new node as head and previous as NULL */
    new_node->next = (*head);
    new_node->prev = NULL;

    /* 4. change prev of head node to new node */
    if ((*head) != NULL) {
        (*head)->prev = new_node;
    }

    /* 5. move the head to point to the new node */
    (*head) = new_node;
}