void printAllStudentsFromSpecificSemester(struct Node *node, int semester) {
    printf("\nPrinting all students from semester %d: \n", semester);
    int index = 0;
    while (node != NULL) {
        if (node->data.semester == semester) {
            index++;
            printf("%d:", index);
            printf(" %s | ", node->data.fullName);
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
    printf("\nPrinting all students: \n");
    int index = 0;
    while (node != NULL) {
        index++;
        printf("%d:", index);
        printf(" %s | ", node->data.fullName);
        printf("%d | ", node->data.am);
        printf("%d \n", node->data.semester);
        node = node->next;
    }
    if (index == 0) {
        printf("No students found!\n");
    }
    printf("\n======================\n");
}

