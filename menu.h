int GetOption(void) {
    int option;
    printf("Your option: ");
    scanf("%d", &option);
    while (option < 1 || option > 9) {
        printf("Wrong option try again.\n");
        printf("Your option: ");
        scanf("%d", &option);
    }
    return option;
}

int Menu(void) {
    printf("\n1. Add student\n");
    printf("2. Remove student\n");
    printf("3. Search student with id\n");
    printf("4. Search student with full name\n");
    printf("5. Change student credentials\n");
    printf("6. Create a list of students of a specific semester\n");
    printf("7. Print all students\n");
    printf("8. Print all students from a specific semester\n");
    printf("9. Exit\n");
    int option = GetOption();
    return option;
}

