#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student {
    int am;
    char *fullName;
    int semester;
};

struct Node {
    struct Student data;
    struct Node *next;
    struct Node *prev;
};

#include "create.h"
#include "delete.h"
#include "traverse.h"
#include "search.h"
#include "funcs.h"
#include "print.h"
#include "menu.h"

int main(void) {
    struct Node *head = NULL;
    int option = Menu();
    char fullName;
    int specificSemester, am, semester, searchId;
    while (option != 9) {
        switch (option) {
            case 1:
                do {
                    printf("Enter student id: ");
                    scanf("%d", &am);
                } while (checkDuplicateId(&head, am) == 1);
                do {
                    printf("Enter semester: ");
                    scanf("%d", &semester);
                } while (semester <= 0);
                printf("Enter student full name: ");
                scanf("%s", &fullName);
                push(&head, am, semester, &fullName);
                break;
            case 2:
                printf("Enter student id: ");
                int key;
                scanf("%d", &key);
                deleteStudent(&head, key);
                break;
            case 3:
                printf("Enter student id: ");
                int id;
                scanf("%d", &id);
                searchWithId(&head, id);
                break;
            case 4:
                printf("Enter student full name: ");
                char studentFullName;
                scanf("%s", &studentFullName);
                searchWithFullName(&head, &studentFullName);
                break;
            case 5:
                do {
                    printf("\nWhich student do you want to change?\n");
                    printf("Enter student id: ");
                    scanf("%d", &searchId);
                    searchWithId(&head, searchId);
                } while (checkIfExists(&head, searchId) == 0);
                int changeAttribute;
                do {
                    printf("\nWhat do you want to change? \n");
                    printf("1. Student id\n");
                    printf("2. Student semester\n");
                    printf("3. Student full name\n");
                    printf("Your option: ");
                    scanf("%d", &changeAttribute);
                } while (changeAttribute < 1 || changeAttribute > 3);
                changeCredentials(head, changeAttribute);
                break;
            case 6:
                printf("\nCreate a list of students of a specific semester\n");
                break;
            case 7:
                traverse(head, printAllStudents);
                break;
            case 8:
                do {
                    printf("Enter semester: ");
                    scanf("%d", &specificSemester);
                } while (specificSemester <= 0);
                printAllStudentsFromSpecificSemester(head, specificSemester);
                break;
        }
        option = Menu();
    }
    printf("Goodbye!\n");
}
