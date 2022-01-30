void deleteStudent(struct Node **head, int key) {
    struct Node *temp = *head, *prev = NULL;
    if (temp == NULL) {
        printf("The student list is empty\n");
        return;
    }
    if (temp->data.am == key) {
        *head = temp->next;
        printf("\nStudent with id: %d has been deleted!\n", key);
        free(temp);
        return;
    }

    while (temp != NULL && temp->data.am != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("\nStudent not found\n");
        return;
    }

    prev->next = temp->next;

    free(temp);
}

