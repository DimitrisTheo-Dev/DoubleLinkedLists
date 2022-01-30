void searchWithFullName(struct Node **head, char *firstName, char *lastName) {
    struct Node *current = *head;
    if (current == NULL) {
        printf("The student list is empty\n");
        return;
    }

    while (current != NULL) {
        if ((current->data.firstName == firstName || strcmp(current->data.firstName, firstName) == 0) && (current->data.lastName == lastName || strcmp(current->data.lastName, lastName) == 0)) {
            printf("Found student %s %s at semester %d with id %d\n", current->data.firstName, current->data.lastName, current->data.semester,
                   current->data.am);
            return;
        }
        if (current->next != NULL) {
            current = current->next;
        } else {
            break;
        }
    }
    printf("%s %s does not exist in the list\n", firstName, lastName);
    
}

void searchWithId(struct Node **head, int key) {
    struct Node *current = *head;
    if (current == NULL) {
        printf("The student list is empty\n");
        return;
    }

    while (current != NULL) {
        if (current->data.am == key) {
            printf("Found student %s %s at semester %d with id %d\n", current->data.firstName, current->data.lastName, current->data.semester,
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

