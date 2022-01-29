struct Student {
    int am;
    char fullName[20];
    int semester;
};

struct Node {
    struct Student data;
    struct Node *next;
    struct Node *prev;
};

void push(struct Node **head, int am, int semester, char fullName[20]) {
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));

    newNode->data.am = am;
    newNode->data.semester = semester;
    strcpy(newNode->data.fullName, fullName);
    newNode->next = (*head);
    newNode->prev = NULL;

    if ((*head) != NULL) {
        (*head)->prev = newNode;
    }

    (*head) = newNode;
    
}
