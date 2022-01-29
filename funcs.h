
int checkIfExists(struct Node **head, int am) {
    struct Node *current = *head;
    if (current == NULL) {
        return 0;
    }
    while (current != NULL) {
        if (current->data.am == am) {
            return 1;
        }
        if (current->next != NULL) {
            current = current->next;
        } else {
            break;
        }
    }
    free(current);
    return 0;
}

int checkSemester(struct Node **head, int key) {
    struct Node *current = *head;
    if (current == NULL) {
        return 0;
    }
    while (current != NULL) {
        if (current->data.semester != key) {
            printf("Different semester. The correct one is %d. \n", current->data.semester);
            return 1;
        }
        if (current->next != NULL) {
            current = current->next;
        } else {
            break;
        }
    }
    free(current);
    return 0;
}

int checkDuplicateId(struct Node **head, int key) {
    struct Node *current = *head;
    if (current == NULL) {
        return 0;
    }
    while (current != NULL) {
        if (current->data.am == key) {
            printf("Duplicate ID found. Please enter a unique ID.\n");
            return 1;
        }
        if (current->next != NULL) {
            current = current->next;
        } else {
            break;
        }
    }
//    free(current);
    return 0;
}

void changeCredentials(struct Node *node, int option) {
    char newFullName[20];
    int newSemester, newAm;
    switch (option) {
        case 1:
            do {
                printf("Enter new id: ");
                scanf("%d", &newAm);
            } while (checkDuplicateId(&node, newAm) == 1);
            node->data.am = newAm;
            break;
        case 2:
            do {
                printf("Enter new semester: ");
                scanf("%d", &newSemester);
            } while (newSemester <= 0);
            node->data.semester = newSemester;
            break;
        case 3:
            printf("Enter new full name: ");
            scanf("%s", newFullName);
            strcpy(node->data.fullName, newFullName);
            break;
    }
}
