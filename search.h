void searchWithFullName(struct Node **head, char *fullName) {
    struct Node *current = *head;
    if (current == NULL) {
        printf("The student list is empty\n");
        return;
    }

    while (current != NULL) {
        if (current->data.fullName == fullName || strcmp(current->data.fullName, fullName) == 0) {
            printf("Found student %s at semester %d with id %d\n", current->data.fullName, current->data.semester,
                   current->data.am);
            return;
        }
        if (current->next != NULL) {
            current = current->next;
        } else {
            break;
        }
    }

    printf("%s does not exist in the list\n", fullName);
}

void searchWithId(struct Node **head, int key) {
    struct Node *current = *head;
    if (current == NULL) {
        printf("The student list is empty\n");
        return;
    }

    while (current != NULL) {
        if (current->data.am == key) {
            printf("Found student %s at semester %d with id %d\n", current->data.fullName, current->data.semester,
                   current->data.am);
            return;
        }
        if (current->next != NULL) {
            current = current->next;
        } else {
            break;
        }
    }

    printf("%d does not exist in the list\n", key);
}

