void printAllStudentsFromSpecificSemester(struct Node *node, int semester) {
    printf("\nPrinting all students from semester %d: \n", semester);
    int index = 0;
    while (node != NULL) {
        if (node->data.semester == semester) {
            index++;
            printf("%d:", index);
            printf(" %s %s | ", node->data.firstName, node->data.lastName);
            printf("%d | ", node->data.am);
            printf("%d \n", node->data.semester);
        }
        node = node->next;
    }
    if (index == 0) {
        printf("No students found!\n");
    }
    printf("======================");
}

void printAllStudents(struct Node *node) {
    if (node != NULL) {
        printf(" %s %s | ", node->data.firstName, node->data.lastName);
        printf("%d | ", node->data.am);
        printf("%d", node->data.semester);
    }
    printf("\n======================\n");
}

